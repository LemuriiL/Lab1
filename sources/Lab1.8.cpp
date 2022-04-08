//
// Created by LemuriiL on 19.03.2022.
//

//вычисления значения функции x=12a^2 + 7a - 12 при любом значении а;
//вычисления значения функции y=3x^3 + 4x^2 - 11x + 1 при любом значении x.

#include <iostream>
#include "cmath"
int main() {
  using std::cout;
  using std::cin;
  using std::endl;
  int a;
  long long x;
  long long y;
  cout << "########УПРАЖНЕНИЕ ВОСЭМ########\n";
  cout << "Введите a => ";
  cin >> a;
  x = static_cast<long long>(12*pow(a,2)+7*a-12);
  y = 3*pow(x,3)+4*pow(x,2)-11*x+1;
  cout << "x: " << x << " y: " << y;
}
