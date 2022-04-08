//
// Created by LemuriiL on 19.03.2022.
//

#include <iostream>
int main() {
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
