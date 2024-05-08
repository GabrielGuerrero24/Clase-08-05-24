#include <iostream>
using namespace std;
int main()
{
    char opcion, variable ='A,B,C';
    
    do 
    {
        cout <<"Menu"<< "\n";
        cout <<"A Carne asada"<< "\n";
        cout <<"B pollo"<< "\n";
        cout <<"C cerdo"<< "\n";
        cout <<"seleccione una opccion"<< "\n";
        cin >> opcion;
        cout <<"opccion selecionada"<< opcion << "\n";
    }
    while (opcion!='A' && opcion!='B'&& opcion!='C');
    
    return 0;
    }
