//
// Created by LemuriiL on 26.03.2022.
//

#include <iostream>
int main() {
  using std::cout;
  using std::cin;
  using std::endl;
  cout << "########УПРАЖНЕНИЕ ВОСЭМНАДЦАТЬ ########\n";
  int value;
  int one;
  int two;
  int two1;
  int two2;
  int result;
  cout << "введите число => ";
  cin >> value;
  one = (value - (value % 10))/100;
  two = value - (one * 100);
  two1 = (two - (two % 10))/10;
  two2 = two % 10;
  two = (two2 * 10) + two1;
  result = (two - one) + 1;
  cout << result;
}
