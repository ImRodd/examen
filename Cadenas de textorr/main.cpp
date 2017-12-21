#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) 
{
	float n1=1, n2=1, n3=1, n4=1, n5=1;
    int resultado=0;
	string nombre="", grupo="", Licenciatura="", Fecha="", Bienvenido="", respuesta="";
    string a, b, c, d;
   
        cout<<"Ingresa tu nombre"<<endl;
        cin>>nombre;

        cout<<"Ingresa tu  grupo"<<endl;
        cin>>grupo;	
        
        cout<<"Ingresa tu Licenciatura"<<endl;
        cin>>Licenciatura;

        cout<<"Ingresa la fecha"<<endl;	
        cin>>Fecha;
        
    
      cout<< "\nBienvenido al examen"":"<< nombre << "\n Eres del grupo"":"<< grupo << "\n Tu licenciatura es"":"<< Licenciatura << "\n La fecha es"":"<< Fecha <<endl;
    
    do{
cout<<"1-¿Cual es la sentencia de salida en c++?"<<endl;

	a= "a)Switch";
	b= "b)cin";
	c= "c)cout";
	cout<<a << endl << b << endl << c <<endl;
	cout<<"R=";cin>>respuesta;
 
   if(respuesta=="c")
    {
	   n1=1;
      cout<<"la respuesta es correcta"<<endl;
    } 
   else
   {
     cout<<"La respuesta es incorrecta"<<endl;
      n1=0;
    }
    }while(respuesta !=a || respuesta !="b" || respuesta !="c");
    

    do{
cout<<"2-¿Que es programacion?"<<endl;
    a= "a)Se usa para resolver un problema";
    b= "b)Un conjunto de programas";
    c= "c)Secuencia de operaciones en un determinado orden";
    d= "d)diseñar, depurar, codificar y mantener un codigo";
    cout<<a << endl << b << endl << c << d << endl;
    cout<<"R=";cin>>respuesta;
 
    if(respuesta=="d")
	{
       n2=1;
      cout<<"la respuesta es correcta"<<endl;
    }
   else
   {
     cout<<"La respuesta es incorrecta"<<endl;
      n2=0;
    }
 }while(respuesta !=a || respuesta !="b" || respuesta !="c");


   do{
cout<<"3-¿Que es un algoritmo?"<<endl;
    a= "a)Un conjunto de criterios para evaluar";
    b= "b)Es la forma para resolver un problema";
    c= "c)Enlista opciones";
    d= "d)Secuencia de pasos logicos para llevar una tarea especifica";
    cout<<a << endl << b << endl << c << d <<  endl;
    cout<<"R=";cin>>respuesta;
    
    if(respuesta=="d")
	{
       n3=1;
      cout<<"la respuesta es correcta"<<endl;
    }
   else
   {
     cout<<"La respuesta es incorrecta"<<endl;
      n3=0;
   }
 }while(respuesta !=a || respuesta !="b" || respuesta !="c");


   do{
cout<<"4-¿Para que se usa un algoritmo?"<<endl;
    a= "a)Para la programacion del software";
    b= "b)Para indicar el orden";
    c= "c)Para obtener un resultado";
    d= "d)Ninguna de las anteriores";
    cout<<a << endl << b << endl << c << d << endl;
    cout<<"R=";cin>>respuesta;
    
      if(respuesta=="d")
	{
      n4=1;
      cout<<"la respuesta es correcta"<<endl;
    }
   else
   {
     cout<<"La respuesta es incorrecta"<<endl;
      n4=0;
   }
	}while(respuesta !=a || respuesta !="b" || respuesta !="c");

   do{
cout<<"5-¿Cuantos tipos de condicion hay?"<<endl;
    a= "a)5";
    b= "b)3";
    c= "c)1";
    d= "d)2";
    cout<<a << endl << b << endl << c << d << endl;
    cout<<"R=";cin>>respuesta;
    
    if(respuesta=="d")
	{
      n5=1;
      cout<<"la respuesta es correcta"<<endl;
    }
   else
   {
     cout<<"La respuesta es incorrecta"<<endl;
     n5=0;
   }
    }while(respuesta !=a || respuesta !="b" || respuesta !="c");
   
   
   
   resultado=n1+n2+n3+n4+n5/5*5;
   
   cout<<"tu promedio del examen es ="<<resultado<<endl;
    if(resultado>=3)
	{
      
      cout<<"Estas aprobado"<<endl;
     
	}
   else
   {
   	 resultado<=2;
   	
   	 cout<<"no aprobaste";
   	
   }
   
	return 0;
}
