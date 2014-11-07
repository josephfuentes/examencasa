#include <iostream>
#include <stdlib.h>

using namespace std;

//FUENTES:  http://es.kioskea.net/faq/2818-generar-numeros-aleatorios-eficazmente-con-rand


int rdtsc()
{
    __asm__ __volatile__("rdtsc");
}

int numero(int t){
  srand(rdtsc());
return rand() % t;
}



int juego(int t, int d){
string arreglo[t][t];
int f;
int c;
int tiros=d;
int num1 = numero(t);
int num2 = numero(t);
string estado= " ";
//cout<<"Numero aleatorio escogido para la fila: "<<num2<<endl;
//cout<<"Numero aleatorio escogido para la columna: "<<num1<<endl;

        for(int i=0;i<t;i++){
        for(int a=0;a<t;a++){
        arreglo[i][a] = "-";
        }
        }


        do{

        for(int i=0;i<t;i++){
        cout<<"  "<<i;
        }
        cout<<endl;
        for(int i=0;i<t;i++){
        cout<<i<<" ";
        for(int a=0;a<t;a++){
        cout<<arreglo[i][a]<<"  ";
        }
        cout<<endl;
        }

        cout<<endl;

        cout<<estado<<endl;
        cout<<"Tiros restantes: ";
        cout<<tiros<<endl;
        cout<<"Ingrese posicion fila: ";
        cin>>f;

        cout<<"Ingrese posicion columna ";
        cin>>c;

        if(f<t && c<t){
        if(f==num2 && c==num1){
        estado = " ";
        arreglo[f][c] = "x";

         for(int i=0;i<t;i++){
        cout<<"  "<<i;
        }
        cout<<endl;
        for(int i=0;i<t;i++){
        cout<<i<<" ";
        for(int a=0;a<t;a++){
        cout<<arreglo[i][a]<<"  ";
        }
        cout<<endl;
        }



        cout<<"FELICIDADES HAS GANADO!!!"<<endl;
        break;
        }else{
        estado = "FALLASTES";
        arreglo[f][c] = "o";
        tiros-=1;
        }
        }else{
//        cout<<"Fuera de Rango"<<endl;
        estado = "Fuera de Rango";
        }

        if(tiros==0){

         for(int i=0;i<t;i++){
        cout<<"  "<<i;
        }
        cout<<endl;
        for(int i=0;i<t;i++){
        cout<<i<<" ";
        for(int a=0;a<t;a++){
        cout<<arreglo[i][a]<<"  ";
        }
        cout<<endl;
        }


        cout<<"Te has quedado sin mas disparos!!"<<endl;
        cout<<"Numero aleatorio escogido para la fila: "<<num2<<endl;
        cout<<"Numero aleatorio escogido para la columna: "<<num1<<endl;
        cout<<":::::::GAME OVER::::::";
        break;
        }

        }while(true);





return 0;
}

int main()
{
int opcion;
do{
cout<<"1. Jugar Modo Facil"<<endl;
cout<<"2. Jugar Modo Normal"<<endl;
cout<<"3. Jugar Modo Dificil"<<endl;
cin>>opcion;

switch(opcion){
case 1: juego(5,7);
        break;
case 2: juego(7,5);
        break;
case 3: juego(9,3);
        break;
default: cout<<"seleccione bien"<<endl;

        break;
}
}while(opcion>=4);



//int f;
//int c;
//int tiros=3;
//int num1 = numero();
//int num2 = numero();
//cout<<"Numero aleatorio escogido para la fila: "<<num2<<endl;
//cout<<"Numero aleatorio escogido para la columna: "<<num1<<endl;
//
//
//        inicializarTablero();
//        do{
//        cout<<endl;
//        dibujar();
//        cout<<"Tiros restantes: ";
//        cout<<tiros<<endl;
//        cout<<"Ingrese posicion fila: ";
//        cin>>f;
//
//        cout<<"Ingrese posicion columna ";
//        cin>>c;
//        if(f<5 && c<5){
//        if(f==num2 && c==num1){
//        arreglo[f][c] = "x";
//        dibujar();
//        cout<<"FELICIDADES HAS GANADO!!!"<<endl;
//        break;
//        }else{
//        cout<<"FALLASTES!!!"<<endl;
//        arreglo[f][c] = "0";
//        tiros-=1;
//        }
//        }else{
//        cout<<"Fuera de Rango";
//        }
//
//        if(tiros==0){
//        cout<<":::::::GAME OVER::::::";
//        break;
//        }
//
//        }while(true);
//
//
//
//
//

    return 0;
}


