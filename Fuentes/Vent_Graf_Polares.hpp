//////////////////////////////////////////////////////////////////////////////////////////////
// Ventana de graficaci�n en coordenadas polares                                            //
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



#ifndef __VENT_GRAF_POLARES_HPP__
#define __VENT_GRAF_POLARES_HPP__


#include "Vent_Graf_Base.hpp"


/// Ventana de coordenadas polares
class Ventana_Coordenadas_Polares: virtual public Base_Ventana_Graficacion
{
   private:
      
      /// Factor de acercaminento dentro de la ventana
      ldouble            Factor;                


                    /// Dibuja una linea dentro de la ventana
      void          Dibuja_linea_ventana_coordenadas_polares_2D(const C_3D aux1, const C_3D aux2, const TColor color);
      
   protected:

                    /// Calcula la posici�n de un punto en coordenadas polares dentro de la ventana
      void          Posicion_ventana(const C_3D aux, int &x, int &y);

                    // Convierte una posici�n en coordenadas rectangulares a polares
      void          Convierte_rectangulares_polares(const ldouble x, const ldouble y, ldouble &xx, ldouble &xy);
         
   public:

                    /// Inicializa la clase
      virtual void  Inicializa(void);

                    /// Dibuja al ventana
      virtual void  Dibuja(void);

                    /// Dibuja un punto dentro de la ventana
      void          Dibuja_punto_ventana_coordenadas_polares(const C_3D aux, const TColor color);

                    /// Dibuja una linea dentro de la ventana
      void          Dibuja_linea_ventana_coordenadas_polares(const C_3D aux1, const C_3D aux2, const TColor color);
};



#endif
