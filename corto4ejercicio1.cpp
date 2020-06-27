#include <iostream>
#include <string.h>
using namespace std;

void murcielago(char clave[50]);

char clave [50];
int main()
{
    cout<<"Codigo de clave murcielago"<<endl;
    murcielago(clave);

    return 0;
}
void murcielago(char clave[50]){
    int longuitud = 0;
    cout<<"Digite su palabra: "; cin.getline(clave,20);
    longuitud = strlen(clave);
    cout<<"Codigo: ";
    for(int i=0;i<longuitud;i++){
        if(clave[i] == 'm'){
            cout<<"0";
        }
        else if(clave[i] == 'u'){
            cout<<"1";
        }
        else if(clave[i] == 'r'){
            cout<<"2";
        }
        else if(clave[i] == 'c'){
            cout<<"3";
        }
        else if(clave[i] == 'i'){
            cout<<"4";
        }
        else if(clave[i] == 'e'){
            cout<<"5";
        }
        else if(clave[i] == 'l'){
            cout<<"6";
        }
        else if(clave[i] == 'a'){
            cout<<"7";
        }
        else if(clave[i] == 'g'){
            cout<<"8";
        }
        else if(clave[i] == 'o'){
            cout<<"9";
        }
        else{cout<<clave[i];}
    }
} 