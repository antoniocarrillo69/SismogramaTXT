//////////////////////////////////////////////////////////////////////////////////////////////
// Definiciones b�sicas de tipos de datos                                                   //
// Revisi�n: 24 de Junio del 2005                                                           //
//                                                                                          //
//                                                                                          //
// An�lisis y Dise�o y Programaci�n:                                                        //
//                                                                                          //
// Nombre:   Antonio Carrillo Ledesma                                                       //
// E-mail:   acl@www.mmc.igeofcu.unam.mx                                                    //
// P�gina:   http://www.mmc.igeofcu.unam.mx/acl                                             //
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


#ifndef __DEFINICIONES_HPP__
#define __DEFINICIONES_HPP__

/// Activada para depurar codigo
#define DEPURAR

/// Activada para trabajar con n�meros double en caso contrario trabajar con long double
//#define __Double__



#ifdef __Double__
   /// Define ldouble como long double 
   typedef double ldouble;
#else
   /// Define ldouble como double 
   typedef long double ldouble;
#endif


/// Dimensiones de una ventana en 3D
struct Dimension_Ventana {
   /// Inicio en X
   ldouble Xi;
   /// Fin en X
   ldouble Xf;
   /// Inicio en Y
   ldouble Yi;
   /// Fin en Y
   ldouble Yf;
   /// Inicio en Z
   ldouble Zi;
   /// Fin en Z
   ldouble Zf;
};

/// Definicion de una ventana en 2D
struct Definicion_Ventana {
   /// Inicio en X
   int Xi;
   /// Fin en X
   int Xf;
   /// Inicio en Y
   int Yi;
   /// Fin en Y
   int Yf;
};

/// Coordenada en 2D
struct C_2D {
   /// Cordenada X
   ldouble X;
   /// Coordenada Y
   ldouble Y;
};

/// Coordenada en 3D
struct C_3D {
   /// Coordenada en X
   ldouble x;
   /// Coordenada en Y
   ldouble y;
   /// Coordenada en Z
   ldouble z;
};

/// Coordenadas triples en formato entero
struct C_3I {
   /// Coordenada X
   int x;
   /// Coordenada Y
   int y;
   /// Coordenada Z
   int z;
};
   
/// Coordenadas dobles en formato entero
struct C_2I {
   /// Coordenada X
   int x;
   /// Coordenada Y
   int y;
};


#ifndef __PROGRAMACION_BORLAND__
   /// Definici�n de colores
   typedef int TColor;
#else
   /// Definici�n de colores
   //extern TColor Colores_16[];
#endif



#include <complex>
/// Definici�n de un n�mero complejo
typedef std::complex <ldouble> cdouble;


#endif
