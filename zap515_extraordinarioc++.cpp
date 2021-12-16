//zap515_extraordinarioc++.cpp
//Ricardo Duarte Hurtado
//coliceo
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>//librerias
using namespace std;

int main(){//inicio main
	int ataque [2], velocidad[2], defenza[2], power_up ,posibilidad ,salir;
	string siguiente; //variables
	srand(time(NULL));
	salir = 0;
	power_up = 2;
	for(int i=0; salir == 0; i++){//ciclo para que se repita hasta que ya quieras salir 
		system("cls");
		ataque[1]=0;
		ataque[2]=0;
		velocidad[1]=0;
		velocidad[2]=0;
		defenza[1]=0;
		defenza[2]=0;
		cout<<"bienvenido a el coliceo donde 2 guerreros se enfrentaran en 3 pruebas para ver quien es el ganador en las distintas cosas que evaluamos"<<endl;//entrada
		cout<<"primero que nada veremos la prueba de velocidad preparate presiona un numero o letra y enter para seguir"<<endl;//prueba de velocidad
		cin>>siguiente;
		velocidad[1] = rand()%10;
		velocidad[2] = rand()%10;
		posibilidad = rand()%11;//asignacion de valores
		if(velocidad[1] < velocidad[2]&& posibilidad >7){
			cout<<"parece que el guerrero numero 2 va a ganar "<<endl;
			velocidad[1]= velocidad[1]*power_up;
		}else{
		
		if(velocidad[1] > velocidad[2]&& posibilidad >7){
			cout<<"parece que el guerrero numero 1 va a ganar "<<endl;
			velocidad[2]= velocidad[2]*power_up;
		}//asignacion de power ups
		}
		if(velocidad[1] < velocidad[2]){
			cout<<"y al final gano el gurrero 2 con "<<velocidad[2]<< " de puntuacion"<<endl;
		}else{
			if(velocidad[1] == velocidad[2]){
			cout<<"y al final empataron con "<<velocidad[2]<< " de puntuacion"<<endl;
			}else{
				cout<<"y al final gano el gurrero 1 con "<<velocidad[1]<< " de puntuacion"<<endl;	
			}
		}//resultados
		
		cout<<"ahora la prueba de fuerza presiona un numero o letra y enter para seguir"<<endl; //lo mismo con la prueba de fuerza
			cin>>siguiente;
		ataque[1] = rand()%10;
		ataque[2] = rand()%10;
		posibilidad = rand()%11;
		if(ataque[1] < ataque[2]&& posibilidad >7){
			cout<<"parece que el guerrero numero 2 va a ganar "<<endl;
			ataque[1]= ataque[1]*power_up;
		}else{
		
		if(ataque[1] > ataque[2]&& posibilidad >7){
			cout<<"parece que el guerrero numero 1 va a ganar "<<endl;
			ataque[2]= ataque[2]*power_up;
		}
		}
		if(ataque[1] < ataque[2]){
			cout<<"y al final gano el gurrero 2 con "<<ataque[2]<< " de puntuacion"<<endl;
		}else{
			if(ataque[1] == ataque[2]){
			cout<<"y al final empataron con "<<ataque[2]<< " de puntuacion"<<endl;
			}else{
				cout<<"y al final gano el gurrero 1 con "<<ataque[1]<< " de puntuacion"<<endl;	
			}
		}
		cout<<"y ahora la prueba de defenza presiona un numero o letra y enter para seguir"<<endl;//lo mismo con la prueba de dureza
			cin>>siguiente;
		defenza[1] = rand()%10;
		defenza[2] = rand()%10;
		posibilidad = rand()%11;
		if(defenza[1] < defenza[2]&& posibilidad >7){
			cout<<"parece que el guerrero numero 2 va a ganar "<<endl;
			defenza[1]= defenza[1]*power_up;
		}else{
		
		if(defenza[1] > defenza[2]&& posibilidad >7){
			cout<<"parece que el guerrero numero 1 va a ganar "<<endl;
			defenza[2]= defenza[2]*power_up;
		}
		}
		if(defenza[1] < defenza[2]){
			cout<<"y al final gano el gurrero 2 con "<<defenza[2]<< " de puntuacion"<<endl;
		}else{
			if(defenza[1] == defenza[2]){
			cout<<"y al final empataron con "<<defenza[2]<< " de puntuacion"<<endl;
			}else{
				cout<<"y al final gano el gurrero 1 con "<<defenza[1]<< " de puntuacion"<<endl;	
			}
		}
		cout<<"las puntuaciones fueron en la categoria de velocidad: "<<velocidad[1]<<" del guerrero 1 y "<<velocidad[2]<<" del guerrero 2"<<endl;
		cout<<"las puntuaciones fueron en la categoria de velocidad: "<<ataque[1]<<" del guerrero 1 y "<<ataque[2]<<" del guerrero 2"<<endl;
		cout<<"las puntuaciones fueron en la categoria de velocidad: "<<defenza[1]<<" del guerrero 1 y "<<defenza[2]<<" del guerrero 2"<<endl;
		cout<<"ya no quieres presenciar mas enfrentamienos?(presiona 0 y enter para quedarte presiona cualquier otro numero para salir)"<<endl;
		cin>>salir;
				
	}
}
