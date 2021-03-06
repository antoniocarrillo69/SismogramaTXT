<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.0 Transitional//EN">

<HTML>
<HEAD>
   <TITLE>class  Base_Ventana_Graficacion</TITLE>
   <META NAME="GENERATOR" CONTENT="DOC++ 3.4.10">
</HEAD>
<BODY BGCOLOR="#ffffff">

<H2>class  <A HREF="#DOC.DOCU">Base_Ventana_Graficacion</A></H2></H2><BLOCKQUOTE>Base de la ventana de graficaci&oacute;n </BLOCKQUOTE>
<HR>

<H2>Inheritance:</H2>
<APPLET CODE="ClassGraph.class" WIDTH=600 HEIGHT=305>
<param name=classes value="CCadenas,MCadenas.html,CBase_Ventana_Graficacion,MBase_Ventana_Graficacion.html,CVentana_Ejes_3D,MVentana_Ejes_3D.html,CVentana_Ejes_2DM,MVentana_Ejes_2DM.html,CVentana_Ejes_2D,MVentana_Ejes_2D.html,CVentana_Coordenadas_Polares,MVentana_Coordenadas_Polares.html,CVentana_Caja_3DM,MVentana_Caja_3DM.html,CVentana_Caja_3D,MVentana_Caja_3D.html,CVentana_Caja_2D,MVentana_Caja_2D.html,CVentana_2D,MVentana_2D.html">
<param name=before value="M,M,M|_,MR_,MR_,MR_,MR_,MR_,MR_,Mr_">
<param name=after value="Md_,M,M,M,M,M,M,M,M,M">
<param name=indent value="0,1,1,1,1,1,1,1,1,1">
<param name=arrowdir value="down">
</APPLET>
<HR>

<DL>
<P><DL>
<DT><H3>Public Methods</H3><DD><DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>virtual   void <B><A HREF="#DOC.68.28">Inicializa</A></B>(void)
<DD><I>Inicializa la clase</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>virtual   void <B><A HREF="#DOC.68.29">Destruye</A></B>(void)
<DD><I>Destruye la clase</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.30">Retorna_Dimensiones</A></B>(<!1><A HREF="Dimension_Ventana.html">Dimension_Ventana</A> &amp;dim_v)
<DD><I>Retorna la Dimension de los ejes coordenados</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.31">Establece_Dimensiones</A></B>(const <!1><A HREF="Dimension_Ventana.html">Dimension_Ventana</A> dim_v)
<DD><I>Establece la Dimension de los ejes coordenados</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.32">Establece_coordenadas</A></B>(const <!1><A HREF="C_3D.html">C_3D</A> n_cda)
<DD><I>Establece coordenadas reales</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>int <B><A HREF="#DOC.68.33">Retorna_visualiza_nombre_eje</A></B>(void)
<DD><I>Retorna el estado de visualiza nombre de eje coordenado</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.34">Establece_Visualiza_nombre_eje</A></B>(const int tp)
<DD><I>Establece el estado de visualiza nombre de eje coordenado</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.35">Establece_nombre_ejes</A></B>(const char* eje_x, const char* eje_y, const char* eje_z)
<DD><I>Establece el nombre de los ejes coordenado</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.36">Limpia_todos_arreglos</A></B>(void)
<DD><I>Limpia el contenido de los arreglos</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.37">Muestra_texto_ventana</A></B>(const int <!1><A HREF="Ventana_256.html#DOC.49.18">x</A>, const int <!1><A HREF="Ventana_256.html#DOC.49.19">y</A>, const char* txt1, const char* txt2)
<DD><I>Muestra texto en la ventana en la posici&oacute;n (X,Y)</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.38">Limpiar</A></B>(void)
<DD><I>Limpia la ventana de trabajo</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.39">Limpiar_fondo</A></B>(void)
<DD><I>Limpia el fondo de la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.40">Grafica_ventana</A></B>(void)
<DD><I>Grafica el contenido de las ventanas de pixeles</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.41">Grafica_region_ventana</A></B>(const int xx, const int xy, const int tam)
<DD><I>Grafica una regi&oacute;n de la ventana de pixeles</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.42">Quitar_cursor_ventana</A></B>(void)
<DD><I>Quitar el cursor de la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.43">Establecer_visualizar_cursor</A></B>(const bool <!1><A HREF="Ventana_256.html#DOC.49.21">st</A>)
<DD><I>Establece la visualizaci&oacute;n del cursor</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.44">Asigna_puntero_ventana_Visualizacion</A></B>(TPaintBox* ptr)
<DD><I>Asigna el puntero de la ventana de visualizaci&oacute;n</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.45">Retorna_colores_ejes</A></B>(<!1><A HREF="TColor.html">TColor</A> &amp;c1, <!1><A HREF="TColor.html">TColor</A> &amp;c2, <!1><A HREF="TColor.html">TColor</A> &amp;c3)
<DD><I>Retorna los colores de los ejes coordenados</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.46">Fija_colores_ejes</A></B>(const <!1><A HREF="TColor.html">TColor</A> c1, const <!1><A HREF="TColor.html">TColor</A> c2, const <!1><A HREF="TColor.html">TColor</A> c3)
<DD><I>Fija los colores de los ejes coordenados</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.47">Dibuja_punto_ventana_2D</A></B>(const <!1><A HREF="C_3D.html">C_3D</A> aux, const <!1><A HREF="TColor.html">TColor</A> color)
<DD><I>Dibuja un punto dentro de la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.48">Dibuja_linea_ventana_2D</A></B>(const <!1><A HREF="C_3D.html">C_3D</A> aux1, const <!1><A HREF="C_3D.html">C_3D</A> aux2, const <!1><A HREF="TColor.html">TColor</A> color)
<DD><I>Dibuja una linea dentro de la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.49">Posicion_ventana_2D</A></B>(const <!1><A HREF="C_3D.html">C_3D</A> aux, int &amp;<!1><A HREF="Ventana_256.html#DOC.49.18">x</A>, int &amp;<!1><A HREF="Ventana_256.html#DOC.49.19">y</A>)
<DD><I>Retorna la posici&oacute;n de un punto en 3D a su posici&oacute;n dentro de la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>virtual   void <B><A HREF="#DOC.68.50">Posicion_3D</A></B>(const <!1><A HREF="C_3D.html">C_3D</A> aux, int &amp;<!1><A HREF="Ventana_256.html#DOC.49.18">x</A>, int &amp;<!1><A HREF="Ventana_256.html#DOC.49.19">y</A>) = 0
<DD><I>Retorna la posici&oacute;n de un punto en 3D</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.51">Dibuja_punto_ventana_3D</A></B>(const <!1><A HREF="C_3D.html">C_3D</A> aux, const <!1><A HREF="TColor.html">TColor</A> color)
<DD><I>Dibuja un punto dentro de la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.52">Dibuja_linea_ventana_3D</A></B>(const <!1><A HREF="C_3D.html">C_3D</A> aux1, const <!1><A HREF="C_3D.html">C_3D</A> aux2, const <!1><A HREF="TColor.html">TColor</A> color)
<DD><I>Dibuja una linea dentro de la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.53">Posicion_ventana_3D</A></B>(const <!1><A HREF="C_3D.html">C_3D</A> aux, int &amp;<!1><A HREF="Ventana_256.html#DOC.49.18">x</A>, int &amp;<!1><A HREF="Ventana_256.html#DOC.49.19">y</A>)
<DD><I>Retorna la posici&oacute;n de un punto en 3D a su posici&oacute;n dentro de la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.54">Graba_datos</A></B>(const char* arc)
<DD><I>Graba datos graficados en el archivo de datos indicado</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>void <B><A HREF="#DOC.68.55">Cierra_archivo_datos</A></B>(void)
<DD><I>Cierra el archivo de datos graficados</I>
</DL></P>

<P><DL>
<DT><H3>Protected Fields</H3><DD><DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="TColor.html">TColor</A> <B><A HREF="#DOC.68.1">Color_fondo</A></B>
<DD><I>Color del fondo</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="TColor.html">TColor</A> <B><A HREF="#DOC.68.2">Color_cursor</A></B>
<DD><I>Color del cursor</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="TColor.html">TColor</A> <B><A HREF="#DOC.68.3">Color_Eje_X</A></B>
<DD><I>Color del eje X</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="TColor.html">TColor</A> <B><A HREF="#DOC.68.4">Color_Eje_Y</A></B>
<DD><I>Color del eje Y</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="TColor.html">TColor</A> <B><A HREF="#DOC.68.5">Color_Eje_Z</A></B>
<DD><I>Color del eje Z</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>int <B><A HREF="#DOC.68.6">Numero_pixeles_ventana</A></B>
<DD><I>Indica el n&uacute;mero de pixeles en la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>TPaintBox* <B><A HREF="#DOC.68.7">PtrVent</A></B>
<DD><I>Puntero a la ventana de trabajo</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="Ventana_256.html">Ventana_256</A>* <B><A HREF="#DOC.68.8">Pix</A></B>
<DD><I>Arreglo a la ventana de pixeles</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="Dimension_Ventana.html">Dimension_Ventana</A> <B><A HREF="#DOC.68.9">Dim_vtn</A></B>
<DD><I>Contiene las dimensiones de la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="C_3D.html">C_3D</A> <B><A HREF="#DOC.68.10">Coordenadas_reales</A></B>
<DD><I>Posicion dentro de los ejes coordenados (reales)</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="C_2D.html">C_2D</A> <B><A HREF="#DOC.68.11">Escala</A></B>
<DD><I>Escala de la ventana de visualizaci&oacute;n</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="C_3D.html">C_3D</A> <B><A HREF="#DOC.68.12">EscalaReal</A></B>
<DD><I>Escala real</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="C_2I.html">C_2I</A> <B><A HREF="#DOC.68.13">Pos_cursor</A></B>
<DD><I>Posicion del cursos dentro de la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>bool <B><A HREF="#DOC.68.14">Visualiza_cursor</A></B>
<DD><I>Indica si se visualiza el cursor</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>char* <B><A HREF="#DOC.68.15">Nombre_eje_X</A></B>
<DD><I>Nombre del eje X</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>char* <B><A HREF="#DOC.68.16">Nombre_eje_Y</A></B>
<DD><I>Nombre del eje Y</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>char* <B><A HREF="#DOC.68.17">Nombre_eje_Z</A></B>
<DD><I>Nombre del eje Z</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>bool <B><A HREF="#DOC.68.18">Visualiza_nombre_eje</A></B>
<DD><I>Indica si visualiza el nombre del eje coordenado</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>int <B><A HREF="#DOC.68.19">Tipo_ventana</A></B>
<DD><I>Indica el tipo de ventan a visualizar</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="ldouble.html">ldouble</A> <B><A HREF="#DOC.68.20">Factor</A></B>
<DD><I>Factor de acercaminento dentro de la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>int <B><A HREF="#DOC.68.21">px</A></B>
<DD><I>Variables auxiares</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>int  <B><A HREF="#DOC.68.22">py</A></B>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>int   <B><A HREF="#DOC.68.23">px1</A></B>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>int    <B><A HREF="#DOC.68.24">py1</A></B>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif><!1><A HREF="Manipulador_archivos.html">Manipulador_archivos</A>* <B><A HREF="#DOC.68.25">MD</A></B>
<DD><I>Puntero al manejador de archivos para grabar la ventana</I>
<DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>char <B><A HREF="#DOC.68.26">xcad</A></B>[200]
<DD><I>Nombre del archivo a grabar la ventana</I>
</DL></P>

<P><DL>
<DT><H3>Protected Methods</H3><DD><DT>
<IMG ALT="[more]" BORDER=0 SRC=icon1.gif>int <B><A HREF="#DOC.68.27">Dentro_ventana</A></B>(const <!1><A HREF="C_3D.html">C_3D</A> aux)
<DD><I>Revisa si la cordenada esta dentro de la ventana</I>
</DL></P>

</DL>
<HR><H3>Inherited from <A HREF="Cadenas.html">Cadenas</A>:</H3>
<DL>
<P><DL>
<DT><H3>Public Methods</H3><DD><DT>
<IMG ALT="o" SRC=icon2.gif>char* <B>Asigna_puntero</B>(const char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>char* <B>Asigna_puntero</B>(const unsigned int lg)
<DT>
<IMG ALT="o" SRC=icon2.gif>char* <B>Asigna_puntero_sin_copiar</B>(const char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Elimina_espacios_inicesarios</B>(const char* cad1, char* cad2)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Elimina_espacios_inicesarios</B>(char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Borra_cadena</B>(char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Borra_caracter</B>(char* cad, const unsigned int pos)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Borra_caracter</B>(const char* cad, const unsigned int pos, char* cadobj)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Borra_cadena_ini_pos</B>(char* cad, const unsigned int pos)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Borra_cadena_pos_fin</B>(char* cad, const unsigned int pos)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Busca_caracter</B>(const char* cad, const char <!1><A HREF="Manipulador_archivos.html#DOC.27.3">car</A>, unsigned int &amp;pos)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Busca_caracteres</B>(const char* cad, const char* cars, unsigned int &amp;pos)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Busca_cadena</B>(const char* cad, const char* <!1><A HREF="Manipulador_archivos.html#DOC.27.9">xcad</A>, unsigned int &amp;pos)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Busca_cadena</B>(const char* cad, const char* cbus, const unsigned int pos_ini, unsigned int &amp;pos)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Busca_cadena_inicio</B>(const char* cad, const char* cbus, const unsigned int tp)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Busca_cadena_final</B>(const char* cad, const char* cbus, const unsigned int tp)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Busca_cadena_metacaracteres</B>(const char* cad, const char* cbus, const unsigned int pos_ini, unsigned int &amp;pos)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Busca_patron</B>(const char* cad, const char* patron)
<DT>
<IMG ALT="o" SRC=icon2.gif>unsigned int <B>Busca_remplaza_cadenas</B>(char* cad, const char* bus, const char* rem)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Busca_expresion</B>(const char* cad, const char* exp, unsigned int &amp;pos)
<DT>
<IMG ALT="o" SRC=icon2.gif>unsigned int <B>Busca_remplaza_expresion</B>(char* exp, const char* bus, const char* rem)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Posicion_palabra_anterior</B>(const char* cad, const unsigned int pos, const unsigned int t_p)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Posicion_palabra_siguiente</B>(const char* cad, const unsigned int pos, const unsigned int t_p)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Compara_ignorando_minusculas</B>(const char* cad1, const char* cad2)
<DT>
<IMG ALT="o" SRC=icon2.gif>unsigned int <B>Numero_veces_cadena</B>(const char* cadena, const char* cbus)
<DT>
<IMG ALT="o" SRC=icon2.gif>unsigned int <B>Numero_veces_caracter</B>(const char* cadena, const char <!1><A HREF="Manipulador_archivos.html#DOC.27.3">car</A>)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Es_caracter_digito</B>(const char <!1><A HREF="Manipulador_archivos.html#DOC.27.3">car</A>)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Es_caracter_numerico</B>(const char <!1><A HREF="Manipulador_archivos.html#DOC.27.3">car</A>)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Es_caracter_alfabetico</B>(const char <!1><A HREF="Manipulador_archivos.html#DOC.27.3">car</A>)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Es_caracter_alfnumerico</B>(const char <!1><A HREF="Manipulador_archivos.html#DOC.27.3">car</A>)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Es_caracter_espaciado</B>(const char <!1><A HREF="Manipulador_archivos.html#DOC.27.3">car</A>)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Es_cadena_numero</B>(const char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Es_cadena_alfabetica</B>(const char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Es_cadena_vacia</B>(const char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>char <B>Convierte_may_min</B>(const char <!1><A HREF="Manipulador_archivos.html#DOC.27.3">car</A>, const unsigned int t_p)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Convierte_mayusculas</B>(char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Convierte_minusculas</B>(char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Convierte_ucfirst</B>(char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Convierte_ucwords</B>(char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>unsigned int <B>Substr</B>(const char* cad, const unsigned int p_i, const unsigned int n_c, char* cadobj)
<DT>
<IMG ALT="o" SRC=icon2.gif>unsigned int <B>Lg_cadena_sin_espacios_final</B>(const char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>unsigned int <B>Lg_cadena_sin_espacios</B>(const char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>unsigned int <B>Trim</B>(char* cad)
<DT>
<IMG ALT="o" SRC=icon2.gif>unsigned int <B>Trim</B>(const char* cad, char* cadobj)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Inserta_caracter</B>(char* cad, const unsigned int pos, const char <!1><A HREF="Manipulador_archivos.html#DOC.27.3">car</A>)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Alinea_cadena</B>(const char* cad, const unsigned int lg, const int tp, char* <!1><A HREF="Manipulador_archivos.html#DOC.27.9">xcad</A>)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Quitar_caracter</B>(char* cad, const char <!1><A HREF="Manipulador_archivos.html#DOC.27.3">car</A>, const unsigned int t_p = 1)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Expander_Cadena_numerica_entera</B>(const char* cad, char* <!1><A HREF="Manipulador_archivos.html#DOC.27.9">xcad</A>)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Arreglo_libera</B>(void)
<DT>
<IMG ALT="o" SRC=icon2.gif>void <B>Arreglo_inicializa</B>(const int num_col_max, const int tam)
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Arreglo_Separa_elementos</B>(const char* <!1><A HREF="Manipulador_archivos.html#DOC.27.9">xcad</A>, const char sep)
<DT>
<IMG ALT="o" SRC=icon2.gif>char* <B>Arreglo_retorna_elemento</B>(const int in)
</DL></P>

<P><DL>
<DT><H3>Private Fields</H3><DD><DT>
<IMG ALT="o" SRC=icon2.gif>bool <B>Arreglo_inicializado</B>
<DT>
<IMG ALT="o" SRC=icon2.gif>char** <B>Arreglo</B>
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Arreglo_num_columnas_maximas</B>
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Arreglo_num_columnas_encontradas</B>
<DT>
<IMG ALT="o" SRC=icon2.gif>int <B>Arreglo_tamano_columna</B>
</DL></P>

</DL>

<A NAME="DOC.DOCU"></A>
<HR>
<H2>Documentation</H2>
<BLOCKQUOTE>Base de la ventana de graficaci&oacute;n </BLOCKQUOTE>
<DL>

<A NAME="Color_fondo"></A>
<A NAME="DOC.68.1"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="TColor.html">TColor</A> Color_fondo</B></TT>
<DD>Color del fondo
<DL><DT><DD></DL><P>
<A NAME="Color_cursor"></A>
<A NAME="DOC.68.2"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="TColor.html">TColor</A> Color_cursor</B></TT>
<DD>Color del cursor
<DL><DT><DD></DL><P>
<A NAME="Color_Eje_X"></A>
<A NAME="DOC.68.3"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="TColor.html">TColor</A> Color_Eje_X</B></TT>
<DD>Color del eje X
<DL><DT><DD></DL><P>
<A NAME="Color_Eje_Y"></A>
<A NAME="DOC.68.4"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="TColor.html">TColor</A> Color_Eje_Y</B></TT>
<DD>Color del eje Y
<DL><DT><DD></DL><P>
<A NAME="Color_Eje_Z"></A>
<A NAME="DOC.68.5"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="TColor.html">TColor</A> Color_Eje_Z</B></TT>
<DD>Color del eje Z
<DL><DT><DD></DL><P>
<A NAME="Numero_pixeles_ventana"></A>
<A NAME="DOC.68.6"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>int Numero_pixeles_ventana</B></TT>
<DD>Indica el n&uacute;mero de pixeles en la ventana
<DL><DT><DD></DL><P>
<A NAME="PtrVent"></A>
<A NAME="DOC.68.7"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>TPaintBox* PtrVent</B></TT>
<DD>Puntero a la ventana de trabajo
<DL><DT><DD></DL><P>
<A NAME="Pix"></A>
<A NAME="DOC.68.8"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="Ventana_256.html">Ventana_256</A>* Pix</B></TT>
<DD>Arreglo a la ventana de pixeles
<DL><DT><DD></DL><P>
<A NAME="Dim_vtn"></A>
<A NAME="DOC.68.9"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="Dimension_Ventana.html">Dimension_Ventana</A> Dim_vtn</B></TT>
<DD>Contiene las dimensiones de la ventana
<DL><DT><DD></DL><P>
<A NAME="Coordenadas_reales"></A>
<A NAME="DOC.68.10"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="C_3D.html">C_3D</A> Coordenadas_reales</B></TT>
<DD>Posicion dentro de los ejes coordenados (reales)
<DL><DT><DD></DL><P>
<A NAME="Escala"></A>
<A NAME="DOC.68.11"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="C_2D.html">C_2D</A> Escala</B></TT>
<DD>Escala de la ventana de visualizaci&oacute;n
<DL><DT><DD></DL><P>
<A NAME="EscalaReal"></A>
<A NAME="DOC.68.12"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="C_3D.html">C_3D</A> EscalaReal</B></TT>
<DD>Escala real
<DL><DT><DD></DL><P>
<A NAME="Pos_cursor"></A>
<A NAME="DOC.68.13"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="C_2I.html">C_2I</A> Pos_cursor</B></TT>
<DD>Posicion del cursos dentro de la ventana
<DL><DT><DD></DL><P>
<A NAME="Visualiza_cursor"></A>
<A NAME="DOC.68.14"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>bool Visualiza_cursor</B></TT>
<DD>Indica si se visualiza el cursor
<DL><DT><DD></DL><P>
<A NAME="Nombre_eje_X"></A>
<A NAME="DOC.68.15"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>char* Nombre_eje_X</B></TT>
<DD>Nombre del eje X
<DL><DT><DD></DL><P>
<A NAME="Nombre_eje_Y"></A>
<A NAME="DOC.68.16"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>char* Nombre_eje_Y</B></TT>
<DD>Nombre del eje Y
<DL><DT><DD></DL><P>
<A NAME="Nombre_eje_Z"></A>
<A NAME="DOC.68.17"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>char* Nombre_eje_Z</B></TT>
<DD>Nombre del eje Z
<DL><DT><DD></DL><P>
<A NAME="Visualiza_nombre_eje"></A>
<A NAME="DOC.68.18"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>bool Visualiza_nombre_eje</B></TT>
<DD>Indica si visualiza el nombre del eje coordenado
<DL><DT><DD></DL><P>
<A NAME="Tipo_ventana"></A>
<A NAME="DOC.68.19"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>int Tipo_ventana</B></TT>
<DD>Indica el tipo de ventan a visualizar
<DL><DT><DD></DL><P>
<A NAME="Factor"></A>
<A NAME="DOC.68.20"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="ldouble.html">ldouble</A> Factor</B></TT>
<DD>Factor de acercaminento dentro de la ventana
<DL><DT><DD></DL><P>
<A NAME="px"></A>
<A NAME="DOC.68.21"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>int px</B></TT>
<DD>Variables auxiares
<DL><DT><DD></DL><P>
<A NAME="py"></A>
<A NAME="DOC.68.22"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>int  py</B></TT>
<DL><DT><DD></DL><P>
<A NAME="px1"></A>
<A NAME="DOC.68.23"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>int   px1</B></TT>
<DL><DT><DD></DL><P>
<A NAME="py1"></A>
<A NAME="DOC.68.24"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>int    py1</B></TT>
<DL><DT><DD></DL><P>
<A NAME="MD"></A>
<A NAME="DOC.68.25"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B><!1><A HREF="Manipulador_archivos.html">Manipulador_archivos</A>* MD</B></TT>
<DD>Puntero al manejador de archivos para grabar la ventana
<DL><DT><DD></DL><P>
<A NAME="xcad"></A>
<A NAME="DOC.68.26"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>char xcad[200]</B></TT>
<DD>Nombre del archivo a grabar la ventana
<DL><DT><DD></DL><P>
<A NAME="Dentro_ventana"></A>
<A NAME="DOC.68.27"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>int Dentro_ventana(const <!1><A HREF="C_3D.html">C_3D</A> aux)</B></TT>
<DD>Revisa si la cordenada esta dentro de la ventana
<DL><DT><DD></DL><P>
<A NAME="Inicializa"></A>
<A NAME="DOC.68.28"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>virtual   void Inicializa(void)</B></TT>
<DD>Inicializa la clase
<DL><DT><DD></DL><P>
<A NAME="Destruye"></A>
<A NAME="DOC.68.29"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>virtual   void Destruye(void)</B></TT>
<DD>Destruye la clase
<DL><DT><DD></DL><P>
<A NAME="Retorna_Dimensiones"></A>
<A NAME="DOC.68.30"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Retorna_Dimensiones(<!1><A HREF="Dimension_Ventana.html">Dimension_Ventana</A> &amp;dim_v)</B></TT>
<DD>Retorna la Dimension de los ejes coordenados
<DL><DT><DD></DL><P>
<A NAME="Establece_Dimensiones"></A>
<A NAME="DOC.68.31"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Establece_Dimensiones(const <!1><A HREF="Dimension_Ventana.html">Dimension_Ventana</A> dim_v)</B></TT>
<DD>Establece la Dimension de los ejes coordenados
<DL><DT><DD></DL><P>
<A NAME="Establece_coordenadas"></A>
<A NAME="DOC.68.32"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Establece_coordenadas(const <!1><A HREF="C_3D.html">C_3D</A> n_cda)</B></TT>
<DD>Establece coordenadas reales
<DL><DT><DD></DL><P>
<A NAME="Retorna_visualiza_nombre_eje"></A>
<A NAME="DOC.68.33"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>int Retorna_visualiza_nombre_eje(void)</B></TT>
<DD>Retorna el estado de visualiza nombre de eje coordenado
<DL><DT><DD></DL><P>
<A NAME="Establece_Visualiza_nombre_eje"></A>
<A NAME="DOC.68.34"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Establece_Visualiza_nombre_eje(const int tp)</B></TT>
<DD>Establece el estado de visualiza nombre de eje coordenado
<DL><DT><DD></DL><P>
<A NAME="Establece_nombre_ejes"></A>
<A NAME="DOC.68.35"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Establece_nombre_ejes(const char* eje_x, const char* eje_y, const char* eje_z)</B></TT>
<DD>Establece el nombre de los ejes coordenado
<DL><DT><DD></DL><P>
<A NAME="Limpia_todos_arreglos"></A>
<A NAME="DOC.68.36"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Limpia_todos_arreglos(void)</B></TT>
<DD>Limpia el contenido de los arreglos
<DL><DT><DD></DL><P>
<A NAME="Muestra_texto_ventana"></A>
<A NAME="DOC.68.37"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Muestra_texto_ventana(const int <!1><A HREF="Ventana_256.html#DOC.49.18">x</A>, const int <!1><A HREF="Ventana_256.html#DOC.49.19">y</A>, const char* txt1, const char* txt2)</B></TT>
<DD>Muestra texto en la ventana en la posici&oacute;n (X,Y)
<DL><DT><DD></DL><P>
<A NAME="Limpiar"></A>
<A NAME="DOC.68.38"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Limpiar(void)</B></TT>
<DD>Limpia la ventana de trabajo
<DL><DT><DD></DL><P>
<A NAME="Limpiar_fondo"></A>
<A NAME="DOC.68.39"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Limpiar_fondo(void)</B></TT>
<DD>Limpia el fondo de la ventana
<DL><DT><DD></DL><P>
<A NAME="Grafica_ventana"></A>
<A NAME="DOC.68.40"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Grafica_ventana(void)</B></TT>
<DD>Grafica el contenido de las ventanas de pixeles
<DL><DT><DD></DL><P>
<A NAME="Grafica_region_ventana"></A>
<A NAME="DOC.68.41"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Grafica_region_ventana(const int xx, const int xy, const int tam)</B></TT>
<DD>Grafica una regi&oacute;n de la ventana de pixeles
<DL><DT><DD></DL><P>
<A NAME="Quitar_cursor_ventana"></A>
<A NAME="DOC.68.42"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Quitar_cursor_ventana(void)</B></TT>
<DD>Quitar el cursor de la ventana
<DL><DT><DD></DL><P>
<A NAME="Establecer_visualizar_cursor"></A>
<A NAME="DOC.68.43"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Establecer_visualizar_cursor(const bool <!1><A HREF="Ventana_256.html#DOC.49.21">st</A>)</B></TT>
<DD>Establece la visualizaci&oacute;n del cursor
<DL><DT><DD></DL><P>
<A NAME="Asigna_puntero_ventana_Visualizacion"></A>
<A NAME="DOC.68.44"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Asigna_puntero_ventana_Visualizacion(TPaintBox* ptr)</B></TT>
<DD>Asigna el puntero de la ventana de visualizaci&oacute;n
<DL><DT><DD></DL><P>
<A NAME="Retorna_colores_ejes"></A>
<A NAME="DOC.68.45"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Retorna_colores_ejes(<!1><A HREF="TColor.html">TColor</A> &amp;c1, <!1><A HREF="TColor.html">TColor</A> &amp;c2, <!1><A HREF="TColor.html">TColor</A> &amp;c3)</B></TT>
<DD>Retorna los colores de los ejes coordenados
<DL><DT><DD></DL><P>
<A NAME="Fija_colores_ejes"></A>
<A NAME="DOC.68.46"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Fija_colores_ejes(const <!1><A HREF="TColor.html">TColor</A> c1, const <!1><A HREF="TColor.html">TColor</A> c2, const <!1><A HREF="TColor.html">TColor</A> c3)</B></TT>
<DD>Fija los colores de los ejes coordenados
<DL><DT><DD></DL><P>
<A NAME="Dibuja_punto_ventana_2D"></A>
<A NAME="DOC.68.47"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Dibuja_punto_ventana_2D(const <!1><A HREF="C_3D.html">C_3D</A> aux, const <!1><A HREF="TColor.html">TColor</A> color)</B></TT>
<DD>Dibuja un punto dentro de la ventana
<DL><DT><DD></DL><P>
<A NAME="Dibuja_linea_ventana_2D"></A>
<A NAME="DOC.68.48"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Dibuja_linea_ventana_2D(const <!1><A HREF="C_3D.html">C_3D</A> aux1, const <!1><A HREF="C_3D.html">C_3D</A> aux2, const <!1><A HREF="TColor.html">TColor</A> color)</B></TT>
<DD>Dibuja una linea dentro de la ventana
<DL><DT><DD></DL><P>
<A NAME="Posicion_ventana_2D"></A>
<A NAME="DOC.68.49"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Posicion_ventana_2D(const <!1><A HREF="C_3D.html">C_3D</A> aux, int &amp;<!1><A HREF="Ventana_256.html#DOC.49.18">x</A>, int &amp;<!1><A HREF="Ventana_256.html#DOC.49.19">y</A>)</B></TT>
<DD>Retorna la posici&oacute;n de un punto en 3D a su posici&oacute;n dentro de la ventana
<DL><DT><DD></DL><P>
<A NAME="Posicion_3D"></A>
<A NAME="DOC.68.50"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>virtual   void Posicion_3D(const <!1><A HREF="C_3D.html">C_3D</A> aux, int &amp;<!1><A HREF="Ventana_256.html#DOC.49.18">x</A>, int &amp;<!1><A HREF="Ventana_256.html#DOC.49.19">y</A>) = 0</B></TT>
<DD>Retorna la posici&oacute;n de un punto en 3D
<DL><DT><DD></DL><P>
<A NAME="Dibuja_punto_ventana_3D"></A>
<A NAME="DOC.68.51"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Dibuja_punto_ventana_3D(const <!1><A HREF="C_3D.html">C_3D</A> aux, const <!1><A HREF="TColor.html">TColor</A> color)</B></TT>
<DD>Dibuja un punto dentro de la ventana
<DL><DT><DD></DL><P>
<A NAME="Dibuja_linea_ventana_3D"></A>
<A NAME="DOC.68.52"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Dibuja_linea_ventana_3D(const <!1><A HREF="C_3D.html">C_3D</A> aux1, const <!1><A HREF="C_3D.html">C_3D</A> aux2, const <!1><A HREF="TColor.html">TColor</A> color)</B></TT>
<DD>Dibuja una linea dentro de la ventana
<DL><DT><DD></DL><P>
<A NAME="Posicion_ventana_3D"></A>
<A NAME="DOC.68.53"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Posicion_ventana_3D(const <!1><A HREF="C_3D.html">C_3D</A> aux, int &amp;<!1><A HREF="Ventana_256.html#DOC.49.18">x</A>, int &amp;<!1><A HREF="Ventana_256.html#DOC.49.19">y</A>)</B></TT>
<DD>Retorna la posici&oacute;n de un punto en 3D a su posici&oacute;n dentro de la ventana
<DL><DT><DD></DL><P>
<A NAME="Graba_datos"></A>
<A NAME="DOC.68.54"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Graba_datos(const char* arc)</B></TT>
<DD>Graba datos graficados en el archivo de datos indicado
<DL><DT><DD></DL><P>
<A NAME="Cierra_archivo_datos"></A>
<A NAME="DOC.68.55"></A>
<DT><IMG ALT="o" BORDER=0 SRC=icon2.gif><TT><B>void Cierra_archivo_datos(void)</B></TT>
<DD>Cierra el archivo de datos graficados
<DL><DT><DD></DL><P></DL>
<HR>
<DL><DT><B>Direct child classes:
</B><DD><A HREF="Ventana_Ejes_3D.html">Ventana_Ejes_3D</A><BR>
<A HREF="Ventana_Ejes_2DM.html">Ventana_Ejes_2DM</A><BR>
<A HREF="Ventana_Ejes_2D.html">Ventana_Ejes_2D</A><BR>
<A HREF="Ventana_Coordenadas_Polares.html">Ventana_Coordenadas_Polares</A><BR>
<A HREF="Ventana_Caja_3DM.html">Ventana_Caja_3DM</A><BR>
<A HREF="Ventana_Caja_3D.html">Ventana_Caja_3D</A><BR>
<A HREF="Ventana_Caja_2D.html">Ventana_Caja_2D</A><BR>
<A HREF="Ventana_2D.html">Ventana_2D</A><BR>
</DL>

<DL><DT><DD></DL><P><P><I><A HREF="index.html">Alphabetic index</A></I> <I><A HREF="HIER.html">HTML hierarchy of classes</A> or <A HREF="HIERjava.html">Java</A></I></P><HR>
<BR>
This page was generated with the help of <A HREF="http://docpp.sourceforge.net">DOC++</A>.
</BODY>
</HTML>
