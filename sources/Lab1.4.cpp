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
  cout << "########УПРАЖНЕНИЕ ЧЕТЫРЭ########\n";
  int value;
  cout << "гони число => ";
  cin >> value;
  value %= 10;
  cout << value;
  return 0;
}