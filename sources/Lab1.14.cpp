//
// Created by LemuriiL on 28.03.2022.
//

#include <iostream>
#include <windows.h>
#include <math.h>

int main() {
  system("chcp 65001");
  SetConsoleOutputCP(CP_UTF8);
  using std::cout;
  using std::cin;
  using std::endl;
  cout << "########УПРАЖНЕНИЕ ЧЭТЫРНАЦАТ########\n";
  int edge;
  int V;
  int S;
  cout << "Введите длину ребра куба =>";
  cin >> edge;
  V = pow(edge,3);
  S = pow(edge,2);
  cout << "Объем: " << V << endl;
  cout << "Площадь боковой пов.: " << S << endl;
}
