//////////////////////////////////////////////////////////////////////////////////////////////
// Controlador de la ventana de graficaci�n                                                 //
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



#ifndef __VENT_GRAF_CONTROLADOR_HPP__
#define __VENT_GRAF_CONTROLADOR_HPP__


#include "Vent_Graf_2D.hpp"
#include "Vent_Graf_Caja-2D.hpp"
#include "Vent_Graf_Caja-3D.hpp"
#include "Vent_Graf_Caja-3DM.hpp"
#include "Vent_Graf_Ejes-2D.hpp"
#include "Vent_Graf_Ejes-2DM.hpp"
#include "Vent_Graf_Ejes-3D.hpp"
#include "Vent_Graf_Polares.hpp"


/// Control de visualizaci�n
class Control_Visualizacion:  virtual public Ventana_2D, virtual public Ventana_Ejes_3D, virtual public Ventana_Ejes_2D, virtual public Ventana_Ejes_2DM, virtual public Ventana_Caja_3D, virtual public Ventana_Caja_3DM, virtual public Ventana_Caja_2D, virtual public Ventana_Coordenadas_Polares
{
   private:

                    /// Retorna la posici�n de un punto en 3D
      virtual void  Posicion_3D(const C_3D aux, int &x, int &y);
                    // Variables temporales para calcular la proyecci�n
      C_3D          aux4, aux3;
                    /// Indica si se graficara con puntos o con lineas al graficar datos
      int           Lin;                     

   public:

                    /// Inicializa la clase
      void          Inicializa(void);

                    /// Desruye la clase
      void          Destruye(void)
                    {
                       Base_Ventana_Graficacion::Destruye();
                    }

                    /// Establece el tipo de ventana activo
      void          Tipo_ventana_activa(const int tp)
                    {
                       Tipo_ventana = tp;
                    }

                    /// Retorna el tipo de Vantana activa
      int           Retorna_tipo_ventana(void)
                    {
                       return Tipo_ventana;
                    }

                    /// Dibuja la ventana
      void          Dibuja(void);

                    /// Rota los ejes coordenados
      void          Rotar_ejes_3D(const ldouble fi, const ldouble te);

                    /// Acerca o aleja los ejes coordenados
      void          Acercar_alejar_ejes(void);

                    /// Gradua los ejes
      void          Graduar_ejes(void);


                    /// Dibuja un punto haciendo caso del escenario
      void          Dibuja_punto(const C_3D aux, const TColor col);

                    /// Dibuja una linea haciendo caso del escenario
      void          Dibuja_linea(const C_3D aux1, const C_3D aux2, const TColor col);

                    /// Grafica el contenido de las ventanas de pixeles
      void          Grafica(void);

                    /// Muestra el cursor en los ejes coordenados
      void          Poner_cursor(void);

                    /// Graba la ventana de pixeles
      void          Graba_ventana_pixeles(const char *nombre);

                    /// Lee la ventana de pixeles
      void          Lee_ventana_pixeles(const char *nombre);

                    /// Borra los archivos de las ventanas de pixeles grabados
      void          Borra_archivo_ventana_pixeles(const char *nombre);

                    /// Ajusta las dimensiones de la ventana real a la escala que se usa en la ventana de visualizaci�n
      void          Ajusta_dimension_escala(Dimension_Ventana &aux);



                    /// Busca el maximo y el m�nimo de los valores del arreglo X
      void          Busca_max_min(ldouble *x, int n, ldouble &min, ldouble &max);

                    /// Grafica el contenido de los arreglos X vs Y
      void          Grafica(ldouble *x, ldouble *y, int n, TColor col = clBlack);

                    /// Grafica el contenido de los arreglos X vs Y y Z
      void          Grafica(ldouble *x, ldouble *y, ldouble *z, int n, TColor col = clBlack);

                    /// Grafica X vs Y
      void          Grafica(ldouble x, ldouble y, TColor col = clBlack);

                    /// Grafica X vs Y y Z
      void          Grafica(ldouble x, ldouble y, ldouble z, TColor col = clBlack);

                    /// Interpola num valores con los dados
      void          Interpola_grafica(ldouble *x, ldouble *y,  int n, int num, TColor col = clBlack);

                    /// Interpola num valores con los dados
      void          Interpola_grafica(ldouble x1, ldouble y1, ldouble x2, ldouble y2, int num, TColor col = clBlack);


};

#endif

