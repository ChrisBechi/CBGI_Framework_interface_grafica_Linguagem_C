#ifndef COMP1_H_INCLUDED
#define COMP1_H_INCLUDED
#include <windows.h>
#include "../Biblioteca/varAmbiente.h"
#include "../Biblioteca/CBibliotecaDeComponentes.h"
#include "../Biblioteca/CFuncaoComponentes.h"

CEstilos1(LPARAM cor){
	// Estilos para seus componentes
}

CComponentesGraficos1(){
	//componentes a aparecer na tela
	CTextoC(1,"0",0,0,35,10);
	CSlider(2,0,100,0,35,250,25);
	CAtualizaS(2,1);
}

CComandos1(WPARAM id){
	switch(id){
		case 1:{
			MessageBox(NULL,"Caixa","Caption",MB_OK);
			break;
		}
		case 2:{
			MessageBox(NULL,"Slider","Caption",MB_OK);
			break;
		}
		default:{
			break;
		}
	}
}
#endif
