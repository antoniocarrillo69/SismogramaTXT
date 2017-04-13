//////////////////////////////////////////////////////////////////////////////////////////////
// Ventana de graficaci�n de caja en 2D                                                     //
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


#include "Vent_Graf_Caja-2D.hpp"



/////////////////////////////////////////////////////////////
// Clase Ventana Caja 2D                                   //
/////////////////////////////////////////////////////////////

void Ventana_Caja_2D::Inicializa(void)
{
#ifndef __PROGRAMACION_BORLAND__
   Factor = 0.99;
#else
   Factor = 0.8;
#endif
}

// Dibuja la ventana
void Ventana_Caja_2D::Dibuja(void)
{
   int x, y;
   C_3D  aux1, aux2;
   aux1.x = Dim_vtn.Xi, aux1.y = Dim_vtn.Yi, aux1.z = 0.0;
   aux2.x = Dim_vtn.Xf, aux2.y = Dim_vtn.Yi, aux2.z = 0.0;
   Dibuja_linea_ventana_2D(aux1, aux2, Color_Eje_X);
   aux1.x = Dim_vtn.Xi, aux1.y = Dim_vtn.Yf, aux1.z = 0.0;
   aux2.x = Dim_vtn.Xf, aux2.y = Dim_vtn.Yf, aux2.z = 0.0;
   Dibuja_linea_ventana_2D(aux1, aux2, Color_Eje_X);
   Posicion_ventana_2D(aux1,x,y);
   if (Visualiza_nombre_eje) Muestra_texto_ventana(x,y-20,"  ",Nombre_eje_Y);
   aux1.x = Dim_vtn.Xi, aux1.y = Dim_vtn.Yi, aux1.z = 0.0;
   aux2.x = Dim_vtn.Xi, aux2.y = Dim_vtn.Yf, aux2.z = 0.0;
   Dibuja_linea_ventana_2D(aux1, aux2, Color_Eje_Y);
   aux1.x = Dim_vtn.Xf, aux1.y = Dim_vtn.Yi, aux1.z = 0.0;
   aux2.x = Dim_vtn.Xf, aux2.y = Dim_vtn.Yf, aux2.z = 0.0;
   Dibuja_linea_ventana_2D(aux1, aux2, Color_Eje_Y);
   Posicion_ventana_2D(aux1,x,y);
   if (Visualiza_nombre_eje) Muestra_texto_ventana(x-30,y+7,"  ",Nombre_eje_X);
}


