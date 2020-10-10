#include <windows.h>
#include "../Biblioteca/varAmbiente.h"
#include "../Componente/comp1.h"

int idJanela1 = -1, cont1=0;

LRESULT CALLBACK newJanela1(HWND,UINT,WPARAM,LPARAM);

WPARAM CJanelaN1(const char *titulo, float pos_x, float pos_y, float altura, float largura){
	if(idJanela1 != -1)return -1;
	ShowWindow(GetConsoleWindow(),0);
	jan.cbSize = sizeof(jan);
	jan.cbClsExtra = 0;
	jan.cbWndExtra = 0;
	jan.hInstance = window;
	jan.hCursor = LoadCursor(NULL, IDC_ARROW);
	jan.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
	jan.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	jan.hbrBackground = (HBRUSH) COLOR_BACKGROUND;
	jan.lpfnWndProc = newJanela1;
	jan.lpszClassName = titulo;
	jan.lpszMenuName = NULL;
	jan.style = CS_HREDRAW|CS_VREDRAW;
	UnregisterClass(titulo,window);
	if(!RegisterClassEx(&jan)){
		MessageBox(NULL,"Nao foi possivel registrar a classe!","Erro",0x10);
		exit(0);
	}
	Construtora=idJanela1=janelaNula();
	hcomp[idJanela1][0] = CreateWindowEx(0,titulo,titulo,WS_OVERLAPPED|WS_MINIMIZEBOX|WS_SYSMENU,pos_x,pos_y,largura,altura,NULL,NULL,window,NULL);
	ShowWindow(hcomp[idJanela1][0],1);
	while(GetMessage(&mensage,NULL,0,0)){
		TranslateMessage(&mensage);
		DispatchMessage(&mensage);
	}
	return mensage.wParam;
}

LRESULT CALLBACK newJanela1(HWND hwnd, UINT inteiro, WPARAM wpa, LPARAM lpa){
	switch(inteiro){
		case WM_CREATE:{
			hand = hwnd;
			CComponentesGraficos1();
			break;
		}
		case WM_COMMAND:{
			Construtora=idJanela1;
			CComandos1(wpa);
			break;
		}
		case WM_CTLCOLORSTATIC:{
			wpara = wpa;
			lpara = lpa;
			CEstilos1(lpa);
			break;
		}
		case WM_DESTROY:{
			int i=0;
			for(i=0;i<400;i++)
				hcomp[idJanela1][i] = NULL;
			idJanela1=-1;
			PostQuitMessage(0);
			break;
		}
		case WM_TIMER:{
			SendMessage(hcomp[idJanela1][idBarra],PBM_STEPIT,0,0);
			cont1++;
			if(cont1 == timeBarr){
				KillTimer(hwnd,(intptr_t)NULL);
			}
			break;
		}
		case WM_ERASEBKGND:{
			HDC hdc = (HDC) wpa; 
			RECT rc;
		    	GetClientRect(hwnd, &rc); 
			HBRUSH color = CreateSolidBrush(colr);  
		    	FillRect(hdc, &rc, color);
			break;
		}
		case WM_HSCROLL:{
			CComplementaAtualizaS();
			break;
		}
		default:{
			DefWindowProc(hwnd,inteiro,wpa,lpa);
			break;
		}
	}
}
