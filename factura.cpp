//al momento de terminar de ingresar los datos del prducto, es necesario darle un enter mas 
//para que se pueda proseguir con el otro producto
#include "iostream"
#include "string"
#include "string.h"
#include "stdlib.h"
#include "conio.h"
using namespace std;
    int n,i,j;
    char c;
    string cad;
    float total=0;
const int LongCad = 20;
struct costoporarticulo
{
char nombrearticulo[LongCad+1];
int cantidad;
float precio;
float costoporarticulo;
};
//declaracion de funciones y sus variables
void leerdatos();
void calculo(char& nombre, int& cantidad, float& precio);
void ContArreglo(char& nombre, int& cantidad, float& precio, float& costo);
void Ptotal(float& );
int main()
{

    cout<<endl<<"Tienda electronica."<<endl;
    cout<<endl<<"Cuantos articulos desea comprar?: "<<endl;  cin>>n;
    cin.ignore(100, '\n');
    costoporarticulo listado[n];
    leerdatos();    
   getch();
   return 0;
}

void leerdatos()
{
     costoporarticulo listado[n];
      cout<<"Digite nombre, cantidad a comprar y precio del articulo: "<<endl;
        for ( j = 0; j < n; j++)
        {        
        cout<< "Nombre: ";
        getline(cin,cad,'\n');
        strncpy(listado[i].nombrearticulo, cad.c_str(), LongCad);
        listado[i].nombrearticulo[LongCad]='\0';
        cout<<"Cantidad a comprar: ";
        cin>>listado[i].cantidad;
        cout<<"El precio es de: ";
        cin>>listado[i].precio;
        calculo( listado[i].nombrearticulo[LongCad+1],listado[i].cantidad, listado[i].precio);

         cin.ignore(100, '\n');
        }
}

void calculo(char& nombre, int& cantidad, float& precio)
{

    costoporarticulo listado[i];
    //suponiendo que costo por articulo se refiere al costo total del articulo se opera:
          listado[i].costoporarticulo=cantidad*precio;
    //el resultado se pasa a otra funcion que desplegara los datos
    ContArreglo(nombre,cantidad,precio,listado[i].costoporarticulo);
             cin.ignore(100, '\n');  
}


void ContArreglo(char& nombre, int& cantidad, float& precio, float& costo)
{    
    for (i = 0; i < 1; i++)
    {    
           cout<<nombre<<endl;
        cout<< "La cantidad a comprar: " <<cantidad<<endl;
        cout<< "El precio es de: "<<precio<<endl;
        cout<< "Costo total por el articulo: "<<costo<<endl;
    }
    Ptotal(costo);
}

void Ptotal(float& costo)
{
   total=total+costo;
   cout<<"El costo total de la compra es de: "<<total<<endl; 
}