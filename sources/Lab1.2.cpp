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
  char symbol;
  cout << "Какой символ изволите? => ";
  cin >> symbol;
  cout << "1" << symbol << "13" << symbol << "4221\n";
  return 0;
}
