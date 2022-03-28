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
  cout << "########УПРАЖНЕНИЕ ДЭВЭТ########\n";
  float mass;
  float obiem;
  float result;
  cout << "Введите массу => ";
  cin >> mass;
  cout << endl;
  cout << "Введите объем => ";
  cin >> obiem;
  cout << endl;
  result = mass/obiem;
  cout << result;
}