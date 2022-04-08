//
// Created by LemuriiL on 19.03.2022.
//

#include <iostream>
int main() {
  using std::cout;
  using std::cin;
  using std::endl;
  cout << "########УПРАЖНЕНИЕ ШЭСТ########\n";
  int value;
  cout << "гони число => ";
  cin >> value;
  int Next_value = value + (2 - (value % 2));
  cout << Next_value;
  return 0;
}