#ifndef COMPONENTES_H_INCLUDED
#define COMPONENTES_H_INCLUDED
#include <windows.h>
#include "../Biblioteca/CBibliotecaDeComponentes.h"
#include "../Biblioteca/CFuncaoComponentes.h"
#include "../Biblioteca/CBancoDeDados.h"
#include "../main/Janela1.h"

CEstilos(LPARAM cor){
	if(cor == CObterID(8)){
		CMCP(50,50,255);
	}else if(cor==CObterID(2)){
		CMFP(255,255,255);
	}else{
		CFundoT();
	}
}

CComponentesGraficos(){	

	CImagem("back.bmp",0,0,500,300);
	char op1[3][100] = {"2","Arquivos","Abrir-abrir.bmp"}; 
	char op2[4][100] = {"3","Editor","Escrever-esc.bmp","Ler-leitura.bmp"}; 
	char op3[5][100] = {"4","Ambiente","Usuario-user.bmp","Windows-win.bmp","Sair-porta.bmp"}; 
	char op4[6][100] = {"5","Localizar","Mapa-mapa.bmp","Rua-rua.bmp","Cep-cep.bmp","Sair-porta.bmp"};
	char op5[7][100] = {"6","Animais","Cachorro-animal.bmp","Gato-gato.bmp","baleia-baleia.bmp","turarao-tubarao.bmp","girafa-girafa.bmp"}; 
	char op6[8][100] = {"7","Comidas","sorvete-sorvete.bmp","hamburguer-hamburger.bmp","batata-batata.bmp","pizza-pizza.bmp","doce-doce.bmp","comida-comida.bmp"}; 
	char op7[9][100] = {"8","Terror","Annabelle-ana.bmp","Fraddy-Krueger.bmp","O grito-grito.bmp","Jason-jason.bmp","chucky-chucky.bmp","jig Saw-jig.bmp","Samara-samara.bmp"};
	char op8[10][100] = {"9","Times","Gremio-gremio.bmp","Santos-santos.bmp","São Paulo-SaoPaulo.bmp","Flamengo-flamengo.bmp","atletico-atletico.bmp","internacional-internacional.bmp","corinthians-corinthians.bmp","Palmeiras-palmeiras.bmp"};
	char op9[11][100] = {"10","Empresas","Apple-apple.bmp","microsoft-microsoft.bmp","Whatsapp-whatsapp.bmp","instagram-instagram.bmp","google-google.bmp","youtube-youtube.bmp","adobe-adobe.bmp","utorrent-utorrent.bmp","facebook-face.bmp"};
	char op10[12][100] = {"11","Programação","Linguagem C-c.bmp","Linguagem C++-c++.bmp","JavaScript-js.bmp","Java-java.bmp","TypeScript-ts.bmp","Vue-vue.bmp","React-react.bmp","PHP-php.bmp","Python-python.bmp","Ruby-Ruby.bmp"};
	CCriarMenu(10,op1,op2,op3,op4,op5,op6,op7,op8,op9,op10);
	CModIcone("logo.ico");
	CGroupBox(5,53,170,180);
	CTexto(2,"  Login  ",15,45,60,25);
	CCaixaDeTextoB(3,65,80,103,25);
	CTexto(1,"Usuario",9,83,55,18);
	CPasswordBoxB(7,65,120,103,25);
	CTexto(6,"Senha",9,123,55,25);
	CTexto(8,"Esqueceu sua senha?",17,160,150,25);
	CBotaoImagem(9,"logo.ico",25,25,17,190,70,30);
	CBotao(10,"Cadastrar",95,190,70,30);
	CCheckBox(11,"Testando",5,5,100,30);
	CTextArea(15,180,30,250,200);
}

CComandos(WPARAM id){
	switch(id){
		case 10:{
			CJanelaN1("Janela extra",500,100,300,250);
			break;
		}
		case 12:{
			break;
		}
		case 11:{
			CCheck(11);
			break;
		}
		case 9:{
			double teste;
			teste = CBDConsultaMedia("funcionario","id","");
			printf("%.2f",teste);
			break;
		}
		case 401:{
			char aux[][100] = {"7","Rua varchar(30)","Bairro varchar(30)","CEP int","Numero int","cidade varchar(30)","estado varchar(30)","pais varchar(30)"};
			CBDCriarTabela("Endereco",aux);
			break;
		}
		case 402:{
			char campos[][100] = {"1","*"};
			char joins[][100] = {"2","funcionario","id","endereco","id","pagamentos","id"};
			CBDInnerJoin(campos,joins,"","");
			break;
		}
		case 403:{
			CBDAddFK("pagamentos","id","funcionario","id");
			break;
		}
		case 404:{
				MessageBox(NULL,"OP4","Caption",MB_OK);
			break;
		}
		case 405:{
				MessageBox(NULL,"OP5","Caption",MB_OK);
			break;
		}
		case 406:{
				MessageBox(NULL,"OP6","Caption",MB_OK);
			break;
		}
		case 407:{
				MessageBox(NULL,"OP7","Caption",MB_OK);
			break;
		}
		case 408:{
				MessageBox(NULL,"OP8","Caption",MB_OK);
			break;
		}
		case 409:{
				MessageBox(NULL,"OP9","Caption",MB_OK);
			break;
		}
		default:{
			break;
		}
	}
}
#endif
