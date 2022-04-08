//
// Created by LemuriiL on 28.03.2022.
//

#include <iostream>
#include <math.h>
int main() {
  using std::cout;
  using std::cin;
  using std::endl;
  cout << "########УПРАЖНЕНИЕ ТРЫНАДЦАТ########\n";
  const int pi = 3.14;
  unsigned int R;
  unsigned int r;
  unsigned int Result;
  cout << "Введите R =>";
  cin >> R;
  cout << endl;
  cout << "Введите r =>";
  cin >> r;
  cout << endl;
  Result = pi * (pow(R,2)+pow(r,2));
  cout << Result;
}
