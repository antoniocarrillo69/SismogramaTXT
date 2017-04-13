//////////////////////////////////////////////////////////////////////////////////////////////
// Base de la Ventana de graficaci�n                                                        //
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



#ifndef __VENT_GRAFIC_BASE_HPP__
#define __VENT_GRAFIC_BASE_HPP__

#ifndef __PROGRAMACION_BORLAND__
#else
   #include <ExtCtrls.hpp>
   #include <Graphics.hpp>
#endif

#include "V_256.hpp"
#include "Definiciones.hpp"
#include "Cadenas.hpp"
#include "Man_arch.hpp"
#include <string.h>


#define NUMERO_VENTANAS_PIXELES       1


#define VENTANA_2D                    0
#define EJES_COORDENADOS_2D           1
#define EJES_COORDENADOS_2DM          2
#define EJES_COORDENADOS_3D           3
#define EJES_CAJA_2D                  4
#define EJES_CAJA_3D                  5
#define EJES_COORDENADAS_POLARES      6
#define EJES_CAJA_3DM                 7






/// Base de la ventana de graficaci�n 
class Base_Ventana_Graficacion: virtual public Cadenas
{
   protected:
      
      /// Color del fondo
      TColor                 Color_fondo;
      /// Color del cursor
      TColor                 Color_cursor;
      /// Color del eje X
      TColor                 Color_Eje_X;
      /// Color del eje Y
      TColor                 Color_Eje_Y;
      /// Color del eje Z
      TColor                 Color_Eje_Z; 
      /// Indica el n�mero de pixeles en la ventana
      int                    Numero_pixeles_ventana;

#ifdef __PROGRAMACION_BORLAND__
      /// Puntero a la ventana de trabajo
      TPaintBox             *PtrVent;                 
#endif

      /// Arreglo a la ventana de pixeles
      Ventana_256           *Pix;
      /// Contiene las dimensiones de la ventana
      Dimension_Ventana      Dim_vtn;
      /// Posicion dentro de los ejes coordenados (reales)
      C_3D                   Coordenadas_reales;
      /// Escala de la ventana de visualizaci�n
      C_2D                   Escala;
      /// Escala real
      C_3D                   EscalaReal;
      /// Posicion del cursos dentro de la ventana
      C_2I                   Pos_cursor;
      /// Indica si se visualiza el cursor
      bool                   Visualiza_cursor;
      /// Nombre del eje X
      char                  *Nombre_eje_X;
      /// Nombre del eje Y
      char                  *Nombre_eje_Y;
      /// Nombre del eje Z
      char                  *Nombre_eje_Z;
      /// Indica si visualiza el nombre del eje coordenado
      bool                   Visualiza_nombre_eje;
      /// Indica el tipo de ventan a visualizar
      int                    Tipo_ventana;
      /// Factor de acercaminento dentro de la ventana
      ldouble                Factor;
      /// Variables auxiares
      int                    px, py, px1, py1;        
      
      /// Puntero al manejador de archivos para grabar la ventana
      Manipulador_archivos  *MD;
      /// Nombre del archivo a grabar la ventana
      char                   xcad[200];

                    /// Revisa si la cordenada esta dentro de la ventana
      int           Dentro_ventana(const C_3D aux);

   public:

                    /// Inicializa la clase
      virtual void  Inicializa(void);

                    /// Destruye la clase
      virtual void  Destruye(void)
                    {
                       delete [] Nombre_eje_X;
                       delete [] Nombre_eje_Y;
                       delete [] Nombre_eje_Z;
                       delete Pix;
                    }

                    /// Retorna la Dimension de los ejes coordenados
      void          Retorna_Dimensiones(Dimension_Ventana &dim_v)
                    {
                       dim_v = Dim_vtn;
                    }

                    /// Establece la Dimension de los ejes coordenados
      void          Establece_Dimensiones(const Dimension_Ventana dim_v)
                    {
                       Dim_vtn = dim_v;
                       Pix->Cambia_dimension(Dim_vtn,255);
                       EscalaReal.x = Numero_pixeles_ventana / (Dim_vtn.Xf - Dim_vtn.Xi);
                       EscalaReal.y = Numero_pixeles_ventana / (Dim_vtn.Yf - Dim_vtn.Yi);
                       EscalaReal.z = Numero_pixeles_ventana / (Dim_vtn.Zf - Dim_vtn.Zi);
                    }

                    /// Establece coordenadas reales
      void          Establece_coordenadas(const C_3D n_cda)
                    {
                       Coordenadas_reales = n_cda;
                    }

                    /// Retorna el estado de visualiza nombre de eje coordenado
      int           Retorna_visualiza_nombre_eje(void)
                    {
                       return Visualiza_nombre_eje;
                    }

                    /// Establece el estado de visualiza nombre de eje coordenado
      void          Establece_Visualiza_nombre_eje(const int tp)
                    {
                       Visualiza_nombre_eje = tp;
                    }

                    /// Establece el nombre de los ejes coordenado
      void          Establece_nombre_ejes(const char *eje_x, const char *eje_y, const char *eje_z);

                    /// Limpia el contenido de los arreglos
      void          Limpia_todos_arreglos(void)
                    {
                       Pix->Asigna_todo_array(255);
                    }

                    /// Muestra texto en la ventana en la posici�n (X,Y)
      void          Muestra_texto_ventana(const int x, const int y, const char *txt1, const char *txt2);

                    // Dibuja un punto en la ventana de trabajo
//      void          Dibuja_punto_ventana(const int x, const int y, const TColor color);

                    // Dibuja un punto en la ventana de trabajo
//      void          Dibuja_linea_ventana(const int x1, const int y1, const int x2, const int y2, const TColor color);

                    /// Limpia la ventana de trabajo
      void          Limpiar(void);

                    /// Limpia el fondo de la ventana
      void          Limpiar_fondo(void);

                    /// Grafica el contenido de las ventanas de pixeles
      void          Grafica_ventana(void);

                    /// Grafica una regi�n de la ventana de pixeles
      void          Grafica_region_ventana(const int xx, const int xy, const int tam);

                    /// Quitar el cursor de la ventana
      void          Quitar_cursor_ventana(void);

                    /// Establece la visualizaci�n del cursor
      void          Establecer_visualizar_cursor(const bool st)
                    {
                       Visualiza_cursor = st;
                    }

#ifdef __PROGRAMACION_BORLAND__
                    /// Asigna el puntero de la ventana de visualizaci�n
      void          Asigna_puntero_ventana_Visualizacion(TPaintBox *ptr)
                    {
                       PtrVent = ptr;
                    }
#endif
                    /// Retorna los colores de los ejes coordenados
      void          Retorna_colores_ejes(TColor &c1, TColor &c2, TColor &c3)
                    {
                       c1 = Color_Eje_X;
                       c2 = Color_Eje_Y;
                       c3 = Color_Eje_Z;
                    }

                    /// Fija los colores de los ejes coordenados
      void          Fija_colores_ejes(const TColor c1, const TColor c2, const TColor c3)
                    {
                       Color_Eje_X = c1;
                       Color_Eje_Y = c2;
                       Color_Eje_Z = c3;
                    }


                    /// Dibuja un punto dentro de la ventana
      void          Dibuja_punto_ventana_2D(const C_3D aux, const TColor color);

                    /// Dibuja una linea dentro de la ventana
      void          Dibuja_linea_ventana_2D(const C_3D aux1, const C_3D aux2, const TColor color);

                    /// Retorna la posici�n de un punto en 3D a su posici�n dentro de la ventana
      void          Posicion_ventana_2D(const C_3D aux, int &x, int &y);


                    /// Retorna la posici�n de un punto en 3D
      virtual void  Posicion_3D(const C_3D aux, int &x, int &y) = 0;

                    /// Dibuja un punto dentro de la ventana
      void          Dibuja_punto_ventana_3D(const C_3D aux, const TColor color);

                    /// Dibuja una linea dentro de la ventana
      void          Dibuja_linea_ventana_3D(const C_3D aux1, const C_3D aux2, const TColor color);

                    /// Retorna la posici�n de un punto en 3D a su posici�n dentro de la ventana
      void          Posicion_ventana_3D(const C_3D aux, int &x, int &y);



                    /// Graba datos graficados en el archivo de datos indicado
      void          Graba_datos(const char *arc);

                    /// Cierra el archivo de datos graficados
      void          Cierra_archivo_datos(void);
};

#endif
