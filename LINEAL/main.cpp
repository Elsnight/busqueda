#include <iostream>

using namespace std;
#include <fstream>

int busqueda (int a[], int n, int dato);


int main()
{
    ofstream lineal;
    string nombreArchivo;


    cout << "Ingrese el nombre del archivo: ";
    getline(cin,nombreArchivo);

    lineal.open(nombreArchivo.c_str(),ios::app);//open un archivo/c_stringresa el nombre
    if(lineal.fail()) //fail crea un true o false
    {
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    int a[5]={4,1,3,2,10};
    lineal<<"4,1,3,2,10";

    if (busqueda(a,5,10)== -1)
    {
        cout<<"ELEMENTO NO ENCONTRADO";
        lineal<<"ELEMENTO NO ENCONTRADO";
    }
    else
    {
        cout<<"ELEMENTO ENCONTRADO EN LA POSICIÓN: "<<busqueda(a,5,10);
        lineal<<"ELEMENTO ENCONTRADO EN LA POSICIÓN: "<<busqueda(a,5,10);
    }
    lineal.close();

    return 0;
}



int busqueda (int a[], int n, int dato)
{

    for (int i=0 ; i<=n; i++)
    {
            if (a[i] == dato)
                {
                    return i;
                }
    }

    return -1;
}


