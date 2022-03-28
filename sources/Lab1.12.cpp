//
// Created by LemuriiL on 28.03.2022.
//

#include <iostream>
#include <windows.h>

int main() {
  system("chcp 65001");
  SetConsoleOutputCP(CP_UTF8);
  using std::cout;
  using std::cin;
  using std::endl;
  cout << "########УПРАЖНЕНИЕ ДВЫНАТЦАТ########\n";
  unsigned int h;
  unsigned int Footing1;
  unsigned int Footing2;
  unsigned int Result;
  cout << "Введите верхнее основание трапеции =>";
  cin >> Footing1;
  cout << endl;
  cout << "Введите нижнее основание трапеции =>";
  cin >> Footing2;
  cout << endl;
  cout << "Введите высоту =>";
  cin >> h;
  cout << endl;
  Result = ((Footing1 + Footing2)/2)*h;
  cout << Result;


}