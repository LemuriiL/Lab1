//
// Created by LemuriiL on 26.03.2022.
//

#include <iostream>
#include <math.h>
int main() {
  using std::cout;
  using std::cin;
  using std::endl;
  cout << "########УПРАЖНЕНИЕ АДЫНАДЦАТ########\n";
  struct FirstCoordinate
  {
    int x1;
    int y1;
  };
  struct SecondCoordinate
  {
    int x2;
    int y2;
  };
  FirstCoordinate Point1;
  SecondCoordinate Point2;
  unsigned int Result;
  int Sum1;
  int Sum2;
  cout << "ПЕРВАЯ ТОЧКА\n";
  cout << "Введите x1 => ";
  cin >> Point1.x1;
  cout << "Введите y1 => ";
  cin >> Point1.y1;
  cout << endl;
  cout << "ВТОРАЯ ТОЧКА\n";
  cout << "Введите x2 => ";
  cin >> Point2.x2;
  cout << "Введите y2 => ";
  cin >> Point2.y2;
  cout << endl;
  Sum1 = Point2.x2 - Point1.x1;
  Sum2 = Point2.y2 - Point1.y1;
  Result = sqrt(pow(Sum1,2)+pow(Sum2,2));
  cout << Result;
}
