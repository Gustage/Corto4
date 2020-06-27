#include <iostream>
using namespace std;

void Calculo_Alturas(int altura[24],int&);
void Comparacion_Alturas (int altura[24],int&);
int altura[24],promedio=0;
int main()
{
    cout<<"Altura de alumnos"<<endl;
    Calculo_Alturas(altura,promedio);
    Comparacion_Alturas (altura,promedio);

    return 0;
}
void Calculo_Alturas(int altura[24], int& promedio){
    int suma=0;
    cout<<"Escriba la altura de los alumnos en centimetros"<<endl;
    for(int i=0;i<25;i++){
        cout<<i+1<<"Alumno: ";cin>>altura[i];
        suma += altura[i];
    }
    promedio =  suma / 25;
    cout<<endl<<"El promedio es: "<<promedio<<" centimetros."<<endl;
}
void Comparacion_Alturas (int altura[24],int& promedio){
    int altos=0,bajos=0;
    for(int i=0;i<25;i++){
        if(altura[i] >= promedio){
            altos++;
        }
        else{bajos++;}
    }
    cout<<"Hay "<<altos<<" alumnos arriba de la media."<<endl;
    cout<<"Y hay "<<bajos<<" alumnos debajo de la media.";
} 