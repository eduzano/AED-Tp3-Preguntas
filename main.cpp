/* 
   E.Zanotti
   26042015
   Programa de Preguntas y respuestas.
*/
   


#include<iostream>
#include<string>


using namespace std;

int main() 
{
	cout<<"Bienvenido al juego de preguntas y respuestas, cada respuesta acertada suma 10";
	cout<<", una respuesta errada resta 15, si queres salir durante el juego escribi el numero 0\n";
	cout<<"Ingrese 1 (uno) para preguntas de matemáticas..\n";
	cout<<"Ingrese 2 (dos) para preguntas de historia..\n";
	cout<<"Ingrese 3 (tres) para preguntas de biología..\n";
	cout<<"Ingrese 4 (cuatro) para preguntas de deportes..\n";
	int op, contadorf, respuesta, salir=1, contador1=0, contador2=0, contador3=0, contador4=0, totalp=0;
	double pi;
	string resp, minus;
	bool exit=false; //Booleano para salir del do while.
	
	
	do
	{
	cin>>op;
	switch(op)
	{
		case 1:
		{
			cout<<"Elegiste preguntas de matematicas..\n";
			cout<<"1)¿Cuanto vale el numero PI (dos decimales)?\n";
			cin>>pi;
			if(pi==3.14)
			{
				cout<<"Correcto!\n";
				contador1=contador1+10;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador1=contador1-15;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";
			}
			
			cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
			cin>>salir;
			if(salir==0) //Si elijo salir, sale del switch para mostrar resultados.
			{
				  exit=true;
				  break;
			}
			    else if(salir==2)
		 		break;
			string r1=("seno"), r2=("coseno"), r3=("tangente");  //Defino las respuestas posibles.
			cout<<"\n2)Nombra una funcion trigonometrica\n";
			cin>>minus;
			for(int i=0;i<minus.length();i++) //Recorro el string ingresado para que sea todo minuscula.
			{
				char b=minus[i];
				if ((b>='A')and(b<='Z'))
 					minus[i]=b-'A'+'a';
			}
			if(minus.compare(r1)==0 or minus.compare(r2)==0 or minus.compare(r3)==0) //comparo la respuesta ingresada con las establecidas.
			{
				cout<<"Correcto!\n";
				contador1+=10;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";	
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador1-=15;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";	
			}
			
			cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
			cin>>salir;
			if(salir==0)
			{
				exit=true;
				break;
			}
			
		    else if(salir==2)
		 		break;
			
			cout<<"3)¿Cuanto valen los angulos internos de un cuadrado?\n";
			cin>>respuesta;
			if(respuesta==90)
			{
				cout<<"Correcto!\n";
				contador1=contador1+10;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador1=contador1-15;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";
			}
			
			
			cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
			cin>>salir;
			if(salir==0)
			{
				exit=true;
				break;
			}
		    else if(salir==2)
		 		break;
			 
			cout<<"¿Cuantos tipos de triangulos existen?\n";
			cin>>respuesta;
			if(respuesta==3)
			{
				cout<<"Correcto!\n";
				contador1=contador1+10;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador1=contador1-15;
				cout<<"Sumas un total de..."<<contador1<<" puntos en matematicas.\n";
			}
			cout<<"Fin de las preguntas sobre matematicas, sumaste "<<contador1<<" puntos.\n";
			cout<<"Ingresa 2 y luego num de tematica para cambiarla, 0 para salir.\n";
			cin>>op;
			if(op==0)
			  {
			  	exit=true;
			  	break;
			  }
			else if(op==2)
				break;
		}
			
		case 2:
		{
			
			cout<<"Elegiste preguntas de historia. \n";
			cout<<"1)¿En que año Colon descubrio america?\n";
			cin>>respuesta;
			if(respuesta==1492)
			{
				cout<<"Correcto!\n";
				contador2+=10;
				cout<<"Sumas un total de..."<<contador2<<" puntos en historia.\n";
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador2-=15;
				cout<<"Sumas un total de..."<<contador2<<" puntos en historia.\n";
			}
			cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
			cin>>salir;
			if(salir==0)
			{
				exit=true;
				break;
			}
		    else if(salir==2)
		 		break;
			 	
			cout<<"2)¿Cual fue el primer nombre del emperador mas famoso de Roma?\n";
			string r1=("julio");
			cin>>minus;
			for(int i=0;i<minus.length();i++)
			{
				char b=minus[i];
 				if ((b>='A')and(b<='Z'))
  				minus[i]=b-'A'+'a';
			}
			if(minus.compare(r1)==0)
			{
				cout<<"Correcto!\n";
				contador2+=10;
				cout<<"Sumas un total de..."<<contador2<<" puntos en historia.\n";	
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador2-=15;
				cout<<"Sumas un total de..."<<contador2<<" puntos en historia.\n";	
			}
			cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
			cin>>salir;
			if(salir==0)
			{
				exit=true;
				break;
			}
		    else if(salir==2)
		 		break;
			 	
			cout<<"3)¿En que actual pais se encontraban los aztecas?\n";
			r1=("mexico");
			cin>>minus; 
			for(int i=0;i<minus.length();i++)
			{
				char b=minus[i];
 				if ((b>='A')and(b<='Z'))
  				minus[i]=b-'A'+'a';
			}	
			if(minus.compare(r1)==0)
			{
				cout<<"Correcto!\n";
				contador2+=10;
				cout<<"Sumas un total de..."<<contador2<<" puntos en historia.\n";	
			}
			else
			{
				cout<<"Incorrecto!\n";
				contador2-=15;
				cout<<"Sumas un total de..."<<contador2<<" puntos en historia.\n";	
			}
			
			cout<<"Fin de las preguntas sobre historia, sumaste "<<contador2<<" puntos.\n";
			cout<<"Ingresa 2 y luego num de tematica para cambiarla, 0 para salir.\n";
			cin>>salir;
			if(salir==0)
			{
				exit=true;
				break;
			}
			  
			else if(salir==2)
				break;  
			}
		
		case 3:
			{
				
				cout<<"Elegiste preguntas sobre biologia!\n";
				cout<<"1)¿Una bacteria es un organismo unicelular? 1-Si , 2-No\n";
				cin>>respuesta;
				if(respuesta==1)
				{
				cout<<"Correcto!\n";
				contador3+=10;
				cout<<"Sumas un total de..."<<contador3<<" puntos en bioligia.\n";
				}
				else
				{
				cout<<"Incorrecto!\n";
				contador3-=15;
				cout<<"Sumas un total de..."<<contador3<<" puntos en biologia.\n";
				}
				cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
				cin>>salir;
				if(salir==0)
				{
					exit=true;
					break;
				}
		   		else if(salir==2)
		 			break;
			 	
			 	cout<<"2)¿Como se llama el periodo de los dinosaurios?\n";
			 	string r1=("jurasico");
			 	cin>>minus;
 				for(int i=0;i<minus.length();i++)
				{
				char b=minus[i];
				if ((b>='A')and(b<='Z'))
 					minus[i]=b-'A'+'a';
				} 	
				if(minus.compare(r1)==0)
				{
				cout<<"Correcto!\n";
				contador3+=10;
				cout<<"Sumas un total de..."<<contador3<<" puntos en biologia.\n";	
				}
				else
				{
				cout<<"Incorrecto!\n";
				contador3-=15;
				cout<<"Sumas un total de..."<<contador3<<" puntos en biologia.\n";	
				}
				cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
				cin>>salir;
				if(salir==0)
				{
					exit=true;
					break;
				}
		    	else if(salir==2)
		 			break;
			 	
			 	cout<<"3)?Que significan las siglas DN del ADN?\n";
			 	r1=("desoxirribonucleico");
				cin>>minus;
				for(int i=0;i<minus.length();i++)
				{
					char b=minus[i];
					if ((b>='A')and(b<='Z'))
 						minus[i]=b-'A'+'a';
				}
				if(minus.compare(r1)==0)
				{
				cout<<"Correcto!\n";
				contador3+=10;
				cout<<"Sumas un total de..."<<contador3<<" puntos biologia.\n";	
				}
				else
				{
				cout<<"Incorrecto!\n";
				contador3-=15;
				cout<<"Sumas un total de..."<<contador3<<" puntos en biologia.\n";	
				}
				cout<<"Fin de las preguntas sobre biologia, sumaste "<<contador3<<" puntos.\n";
				cout<<"Ingresa 2 y luego num de tematica para cambiarla, 0 para salir.\n";
				cin>>salir;
				if(salir==0)
				{
					exit=true;
					break;
				}
				else if(salir==2)
		 			break;
			}
			
		case 4:
			{
					
				cout<<"Elegiste preguntas sobre deportes.\n";
				cout<<"1)¿Cuantos jugadores por equipo hay en futbol?\n";
				cin>>respuesta;
				if(respuesta==11)
				{
					cout<<"Correcto!\n";
					contador4+=10;
					cout<<"Sumas un total de..."<<contador4<<" puntos en deportes.\n";
				}
				else
				{
					cout<<"Incorrecto!\n";
					contador4-=15;
					cout<<"Sumas un total de..."<<contador4<<" puntos en deportes.\n";
				}
				cout<<"¿Continuamos? 1->Si 2->Cambiar Tematica 0-> Ver resultado final y salir \n";
				cin>>salir;
				if(salir==0)
				{
					exit=true;
					break;
				}
		   		else if(salir==2)
						cin>>op;
		 		
		 		cout<<"2)¿Como es el apellido de quien posee el actual record de velocidad?\n";
		 		string r1=("bolt");
		 		cin>>minus;
				for(int i=0;i<minus.length();i++)
				{
					char b=minus[i];
 					if ((b>='A')and(b<='Z'))
  						minus[i]=b-'A'+'a';
				}
		 		if(minus.compare(r1)==0)
				{
					cout<<"Correcto!\n";
					contador4+=10;
					cout<<"Sumas un total de..."<<contador4<<" puntos en deportes.\n";	
				}
				else
				{
					cout<<"Incorrecto!\n";
					contador4-=15;
					cout<<"Sumas un total de..."<<contador4<<" puntos en deportes.\n";	
				}
				
				cout<<"Fin de las preguntas sobre biologia, sumaste "<<contador4<<" puntos.\n";
				cout<<"Ingresa 2 y luego num de tematica para cambiarla, 0 para salir.\n";
				cin>>salir;
				if(salir==0)
				{
					exit=true;
					break;
				}
			 	 
			    else if(salir==2)
		 			break; 
				
			}
	}
	}while(exit!=true);
	cout<<"Puntajes..:\n";
	cout<<"En matematicas: "<<contador1<<"\n";
	cout<<"En historia: "<<contador2<<"\n";
	cout<<"En biologia: "<<contador3<<"\n";
	cout<<"En deportes: "<<contador4<<"\n";
	contadorf=contador1+contador2+contador3+contador4;
	cout<<"Puntaje total: "<<contadorf<<"\n";
	cout<<"Gracias por jugar.!";
}
