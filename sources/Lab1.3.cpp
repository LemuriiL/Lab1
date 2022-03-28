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
  cout << "########УПРАЖНЕНИЕ ТРЫ########\n";
  int one,two,three;
  cout << "введите первое число: ";
  cin >> one;
  cout << endl;
  cout << "введите второе число: ";
  cin >> two;
  cout << endl;
  cout << "введите третье число: ";
  cin >> three;
  cout << endl;
  cout << one << "  " << two << "  " << three << endl;
  return 0;
}