//
// Created by LemuriiL on 19.03.2022.
//

#include <iostream>
#include <windows.h>

int main() {
  system("chcp 65001");
  SetConsoleOutputCP(CP_UTF8);
  using std::cout;
  using std::cin;
  using std::endl;
  cout << "########УПРАЖНЕНИЕ ДЭСЭТ########\n";
  double a,b,x;
  cout << "Введите a\n";
  cin >> a;
  cout << endl;
  cout << "Введите b\n";
  cin >> b;
  cout << endl;
  x = -b/a;
  cout << x;



}