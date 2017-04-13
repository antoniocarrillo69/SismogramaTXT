//////////////////////////////////////////////////////////////////////////////////////////////
// Ventana de graficaci�n de ejes en 3D                                                     //
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



#ifndef __VENT_GRAF_EJES_3D_HPP__
#define __VENT_GRAF_EJES_3D_HPP__


#include "Vent_Graf_Base.hpp"



/// Ventana de ejes coordenados en 3D 
class Ventana_Ejes_3D: virtual public Base_Ventana_Graficacion
{
   protected:
      
      /// Factor de acercaminento dentro de la ventana
      ldouble            Factor;
      /// Valores usados para la proyecci�n
      ldouble            TETA, FI;
      /// Valores usados para la proyecci�n
      ldouble            ST, SF, CT, CF;
      /// Centro de la pantalla
      C_2I                   Centro;                  

                    /// Calcula valores necesarios para la visualizaci�n
      void          Calcula_valores(void);


   public:

                    /// Inicializa la clase
      virtual void  Inicializa(void);

                    /// Dibuja al ventana
      virtual void  Dibuja(void);

                    /// Permite rotar los ejes coordenados
      void          Rotar_ejes_coordenados(const ldouble fi, const ldouble te)
                    {
                       FI += fi;
                       TETA += te;
                       Calcula_valores();
                    }

                    // Permite acercar o alejar los ejes coordenados
      virtual void  Acercar_alejar_ejes(void)
                    {}

                    /// Permite graduar los ejes coordenados
      virtual void  Graduar_ejes(void)
                    {}


};

#endif
