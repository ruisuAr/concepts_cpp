// Calcular area de un rombo
// Desarrollado por Luis Manuel Ariza Pineda
// Estructura del lenguaje C++: Actividad 2 - Evidencia 1

#include <iostream>
using namespace std;

int main() {
  float diagMayor, diagMenor, area;

  cout << "Ingresa la diagonal mayor del rombo" << endl;
  cin >> diagMayor;
  cout << "Ingresa la diagonal menor del rombo" << endl;
  cin >> diagMenor;
  // Ecuación para definir el área del rombo
  area = (diagMayor * diagMenor) / 2;
  system("clear");  // Limpia la consola

  cout << "ROMBO \n El area es: " << area << endl;
  cout << "LUIS MANUEL ARIZA PINEDA" << endl;

  return 0;
}