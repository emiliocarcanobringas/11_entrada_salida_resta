/*Este programa lee la entrada de dos n�meros, y muestra en la salida est�ndar la resta de estos, 
para ello se han asignado 3 variables de tipo float y el operador aritm�tico de resta*/

#include <iostream> //Librer�a est�ndar de entrada o salida de datos
#include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std; //Damos acceso al espacio de nombres

int main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a y colocamos el valor para manejo de caracteres, le asignamos el idioma espa�ol
float numero1; //Declaramos la variable minuendo (al que se le resta)
float numero2; //Declaramos la variable sustraendo (el que resta al primer n�mero)
float resta1menos2; //Declaramos la diferencia 
	
	cout<<"Ingrese el n�mero al que se le restara otra cifra"<<endl; //Solicitamos el minuendo
	cin>>numero1; //Almacenamos el minuendo
	cout<<"Ingrese la cifra a restar"<<endl; //Solicitamos el sustraendo
	cin>>numero2; //Almacenamos el sustraendo
	cout<<"La resta de ambos n�meros es igual a:"<<endl;
	resta1menos2 = numero1-numero2; //Realizamos la resta
	cout<<resta1menos2<<endl; //Imprimimos en pantalla la resta
	
	return 0;//Fin del programa
	
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
