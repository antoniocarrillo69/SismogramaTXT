//////////////////////////////////////////////////////////////////////////////////////////////
// Ventana de pixeles en blanco y negro                                                     //
// Revisi�n: 3 de Noviembre del 2003                                                        //
//                                                                                          //
//                                                                                          //
// An�lisis y Dise�o y Programaci�n:                                                        //
//                                                                                          //
// Nombre:   Antonio Carrillo Ledesma                                                       //
// E-mail:   acl@www.dynamics.unam.edu                                                      //
// P�gina:   http://www.dynamics.unam.edu/acl                                               //
//                                                                                          //
//                                                                                          //
// Este programa es software libre. Puede redistribuirlo y/o modificarlo                    //
// bajo los t�rminos de la Licencia P�blica General de GNU seg�n es                         //
// publicada por la Free Software Foundation, bien de la versi�n 2 de                       //
// dicha Licencia o bien (seg�n su elecci�n) de cualquier versi�n                           //
// posterior.                                                                               //
//                                                                                          //
// Este programa se distribuye con la esperanza de que sea �til, pero SIN                   //
// NINGUNA GARANT�A, incluso sin la garant�a MERCANTIL impl�cita o sin                      //
// garantizar la CONVENIENCIA PARA UN PROP�SITO PARTICULAR. V�ase la                        //
// Licencia P�blica General de GNU para m�s detalles.                                       //
//                                                                                          //
// Deber�a haber recibido una copia de la Licencia P�blica General junto                    //
// con este programa. Si no ha sido as�, escriba a la Free Software                         //
// Foundation, Inc., en 675 Mass Ave, Cambridge, MA 02139, EEUU.                            //
//                                                                                          //
//                                                                                          //
//////////////////////////////////////////////////////////////////////////////////////////////




#ifndef __V_PIXEL_HPP__
#define __V_PIXEL_HPP__

#include "Definiciones.hpp"
#define EN_REVISION

/// Definici�n del pixel
struct Definicion_pixel {
   bool pixel;
};


/// Estructura de ocho pixeles
struct Ocho_pixeles 
{
   unsigned int pix1: 1;
   unsigned int pix2: 1;
   unsigned int pix3: 1;
   unsigned int pix4: 1;
   unsigned int pix5: 1;
   unsigned int pix6: 1;
   unsigned int pix7: 1;
   unsigned int pix8: 1;
};


/// Union para obtener un byte de pixeles
union  Byte_pixeles
{
   Ocho_pixeles pixeles;
   char         byte;
};


/// Clase que manipila y controla un array de pixeles
class Arreglo_pixeles
{
   private:

      /// Indica si esta activo el objeto
      bool               Activo;
      /// Longitud de la matriz en Y
      int                Num_Y;
      /// Longitud de la matrix en X
      int                Num_X;
      /// Escala usada dentro de la ventana de pixeles
      C_2D               Escala;
      /// Dimensiones de la ventana de trabajo
      Dimension_Ventana  Dimensiones;
      /// Valores temporales
      int                pxx, pyx;      
      int                p_x, p_y;
      int                xi1, xi2;
      int                xi, xf, yi, yf, x, y;
      bool               st;
      /// Indica si ya tiene datos
      bool               Con_valores;   

      /// Puntero al arreglo de pixeles
      Definicion_pixel **Arreglo;
      /// Puntero al arreglo de pixeles
      Definicion_pixel  *prtArreglo;    

   public:
                     /// Constructor de la clase
                     Arreglo_pixeles(void)
                     {
                        Activo = false, 
                        Con_valores = false; 
                     }

                     /// Destructor de la clase
                    ~Arreglo_pixeles(void)
                     {Destruye();}

                     /// Inicializa la clase
               void  Inicializa(const int pix_x, const int pix_y, const bool val, const Dimension_Ventana v_dim);

                     /// Destruye el contenido del arreglo
               void  Destruye(void);

                     /// Calcula la posici�n de un punto dentro de la ventana de pixeles
               bool  Calcula_punto(const ldouble x, const ldouble y, int &px, int &py)
                     {
                        st = true;
                        if ((y >= Dimensiones.Yi && y <= Dimensiones.Yf) && (x >= Dimensiones.Xi && x <= Dimensiones.Xf)) {
                           py = (int)(Num_Y - (((y - Dimensiones.Yi) * Escala.Y) + 1.0));
                           px = (int)((x - Dimensiones.Xi) * Escala.X);
                        } else st = false;
                        return st;
                     }


                     /// Asigna a un pixel del arreglo el valor indicado
               void  Asigna_valor(const int pix_x, const int pix_y, const bool val)
                     {
#ifdef EN_REVISION
                        if (Activo && pix_x >= 0 && pix_x < Num_X && pix_y >= 0 && pix_y < Num_Y) Arreglo[pix_x][pix_y].pixel = val;
#else
                        Arreglo[pix_x][pix_y].pixel = val;
#endif
                        Con_valores = true;
                     }

                     /// Asigna a un pixel del arreglo el valor indicado
               void  Asigna_valor(const ldouble x, const ldouble y, const bool val)
                     {
                        if (Calcula_punto(x, y, pxx, pyx)) Arreglo[pxx][pyx].pixel = val;
                     }


                     /// Retorna el valor del pixel indicado dentro del arreglo
               bool  Retorna_valor(const int pix_x, const int pix_y) const
                     {
#ifdef EN_REVISION
                        if (pix_x >= 0 && pix_x < Num_X && pix_y >= 0 && pix_y < Num_Y) return (Arreglo[pix_x][pix_y].pixel);
#else
                        return (Arreglo[pix_x][pix_y].pixel);
#endif
                        return 255;
                     }

                     /// Asigna a todo el array el valor especificado
               void  Asigna_todo_array(const bool val)
                     {
                        if (Activo) {
                           for (xi1 = 0; xi1 <  Num_X; xi1++) {
                              prtArreglo = &Arreglo[xi1][0];
                              for (xi2 = 0; xi2 <  Num_Y; xi2++) {
                                 prtArreglo->pixel = val;
                                 prtArreglo++;
                              }
                           }
                        }
                        Con_valores = val;
                     }
                     
                     /// Asigna linea
               void  Asigna_linea(const int xi, const int yi, const int xf, const int yf, const bool val);
                     
                     /// Asigna linea
               void  Asigna_linea(const ldouble xi, const ldouble yi, const ldouble xf, const ldouble yf, const bool val);
                     
                     /// Asigna un recuadro apartir del centro n pixeles
               void  Asigna_recuadro(const int pix_x, const int pix_y, const int num, const bool val)
                     {
                        if (!Activo) return;
                        if (num > 1) {
                           xi = pix_x - num >= 0 ? pix_x - num : 0;
                           xf = pix_x + num < Num_X ? pix_x + num : Num_X -1;

                           yi = pix_y - num >= 0 ? pix_y - num : 0;
                           yf = pix_y + num < Num_Y ? pix_y + num : Num_Y -1;
                           for (y = yi; y <= yf; y ++) {
                                for (x = xi; x <= xf; x ++) {
                                     Arreglo[x][y].pixel = val;
                                } 
                           }
                        } else Arreglo[pix_x][pix_y].pixel = val;
                        Con_valores = true;
                     }
               
                     /// Asigna un recuadro apartir del centro n pixeles
               void  Asigna_recuadro(const ldouble x, const ldouble y, const int num, const bool val)
                     {
                        if (Calcula_punto(x, y, p_x, p_y)) Asigna_recuadro(p_x, p_y, num, val);
                     }
                     
                     /// Cambia la dimension del al ventana
               void  Cambia_dimension(const Dimension_Ventana v_dim, const bool val = false);

                     /// Cambia la cantidad de pixeles en la ventana
               void  Cambia_cantidad_pixeles(const int pix_x, const int pix_y, const bool val, const Dimension_Ventana v_dim);

                     /// Graba la ventana con el nombre dado
               void  Graba_ventana(const char *nombre);

                     /// Lee la ventana con el nombre dado
               void  Lee_ventana(const char *nombre);

                     /// Visualiza la ventana en stdout como texto
               void  Visualiza_ventana_txt(const char chr);

                     /// Retorna si tiene datos
               bool  Tiene_datos(void)
                     {
                        return Con_valores;
                     }
                     
                     /// Revisa si el punto esta dentro de la ventana
               bool  Dentro(const int pix_x, const int pix_y)
                     {
                        if (Activo && pix_x >= 0 && pix_x < Num_X && pix_y >= 0 && pix_y < Num_Y) return true;
                        return false;
                     }
                     
                     /// Indica el estado de la ventana
               bool  Ventana_activa(void)
                     {
                        return (Activo);
                     }      
                                    
};


// Notas:
//   (1) El array empieza en cero para los pixeles Y y X
//   (2) El numero maximo de elemetos depende de la memoria de la maquina

#endif




