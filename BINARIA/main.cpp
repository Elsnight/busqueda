#include <iostream>
using namespace std;

#define tamanio(a) (sizeof(a)/sizeof(a[0]));
#include <fstream>



int main()
{
    ofstream binario;
    string nombreArchivo;


    cout << "Ingrese el nombre del archivo: ";
    getline(cin,nombreArchivo);

    binario.open(nombreArchivo.c_str(),ios::app);//open un archivo/c_stringresa el nombre
    if(binario.fail()) //fail crea un true o false
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }


    int b,i,j,k;

    int a[10]={1,2,3,4,5,6,7,8,9};
    binario<<"0,1,2,3,4,5,6,7,8,9"<<endl;


    cout<<tamanio(a)"\t";
    binario<<"\t"<<tamanio(a);

    i=0;

    j=10-1;

    b=4;

    do{

        k=(i+j)/2;

        if (a[k]<=b)
        {
            i=k+1;
        }


        if(a[k]>=b)
        {
            j=k-1;
        }


    }
    while(i<=j);

    cout<<"ELEMENTO ENCONTRADO EN: "<<a[k];
    binario<<"ELEMENTO ENCONTRADO EN: "<<a[k];

    binario.close();
    return 0;
}

