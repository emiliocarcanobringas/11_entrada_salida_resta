/*Este programa lee la entrada de dos números, y muestra en la salida estándar la resta de estos, 
para ello se han asignado 3 variables de tipo float y el operador aritmético de resta*/

#include <iostream> //Librería estándar de entrada o salida de datos
#include <locale.h> //Librería estándar de localización (regionalización)

using namespace std; //Damos acceso al espacio de nombres

int main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería y colocamos el valor para manejo de caracteres, le asignamos el idioma español
float numero1; //Declaramos la variable minuendo (al que se le resta)
float numero2; //Declaramos la variable sustraendo (el que resta al primer número)
float resta1menos2; //Declaramos la diferencia 
	
	cout<<"Ingrese el número al que se le restara otra cifra"<<endl; //Solicitamos el minuendo
	cin>>numero1; //Almacenamos el minuendo
	cout<<"Ingrese la cifra a restar"<<endl; //Solicitamos el sustraendo
	cin>>numero2; //Almacenamos el sustraendo
	cout<<"La resta de ambos números es igual a:"<<endl;
	resta1menos2 = numero1-numero2; //Realizamos la resta
	cout<<resta1menos2<<endl; //Imprimimos en pantalla la resta
	
	return 0;//Fin del programa
	
}

/*Este programa fue escrito por Emilio Carcaño Bringas*/
