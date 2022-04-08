//
// Created by LemuriiL on 28.03.2022.
//
#include <iostream>
int main() {
  using std::cout;
  using std::cin;
  using std::endl;
  cout << "########УПРАЖНЕНИЕ ПАТНАДЦАТ########\n";
  int side;
  int Res15;
  cout << "введите сторону квадрата =>";
  cin >> side;
  cout << endl;
  Res15 = 4 * side;
  cout << Res15 << endl;
  cout << "########УПРАЖНЕНИЕ ШАСТНАДЦАТ########\n";
  int R;
  int Res16;
  cout << "введите радиус окружности =>";
  cin >> R;
  cout << endl;
  Res16 = R*2;
  cout << Res16 << endl;
  cout << "########УПРАЖНЕНИЕ СЕМНАДЦАТ########\n";
  char name[32];
  cout << "Введите имя => ";
  cin >> name;
  cout << "Hello, " << name << " My name is C++.";
}
