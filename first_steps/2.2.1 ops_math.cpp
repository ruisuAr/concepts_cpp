// Conceptualization del lenguaje C++: Actividad 2 - Evidencia 1
// Desarrollado por Luis Ariza

// Este es un comentario de linea

/*
Este es un
comentario
de multiples
lineas con
delimitadores
*/

#include <iostream>
using namespace std;

int main() {
  int a, b;

  cout << "Ingresa el primer numero: " << endl;
  cin >> a;
  cout << "Ingresa el segundo numero" << endl;
  cin >> b;
  cout << "La suma de los numeros es: " << a + b << endl;
  cout << "La resta de los numeros es: " << a - b << endl;
  cout << "La multiplicacion de los numeros es: " << a * b << endl;
  cout << "La division de los numeros es: " << a / b << endl;
  cout << "El residuo es: " << a % b << endl;

  system("pause");
  return 0;
}
