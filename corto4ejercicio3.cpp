#include <iostream>
#include <iomanip>
using namespace std;

void Pedir_Datos();
void Nota_Final();
int n;
float nota1[50],nota2[50],nota3[50],nota4[50],nota5[50],promedio;

int main()
{
    Pedir_Datos();
    Nota_Final();

    return 0;
}
void Pedir_Datos(){
    cout<<"Numero de alumnos a registrar: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<i+1<<".Alumno"<<endl;
        cout<<"Digite la nota 1: ";cin>>nota1[i];
        cout<<"Digite la nota 2: ";cin>>nota2[i];
        cout<<"Digite la nota 3: ";cin>>nota3[i];
        cout<<"Digite la nota 4: ";cin>>nota4[i];
        cout<<"Digite la nota 5: ";cin>>nota5[i];
        cout<<endl;
    }
}
void Nota_Final(){
    for(int i=0;i<n;i++){
        promedio = (nota1[i] + nota2[i] + nota3[i] + nota4[i] + nota5[i])/5;
        cout<<i+1<<"Alumno"<<endl;
        cout<<setprecision(3)<<"Nota final: "<<promedio<<endl;
        if(promedio >= 7){
            cout<<"El alumno paso la materia"<<endl;
        }
        else{cout<<"El alumno no paso la materia"<<endl;}
        cout<<endl;
    }
} 