//
// Created by LemuriiL on 19.03.2022.
//

#include <iostream>
int main() {
  using std::cout;
  using std::cin;
  using std::endl;
  cout << "########УПРАЖНЕНИЕ СЭМ########\n";
  struct time {
    int first_minute_number;
    int second_minute_number;
    int first_second_number;
    int second_second_number;
  };
  time minute;
  time second;
  int Start_Seconds;
 int hours;
 int minutes;
 int seconds;
 cout << "Введите кол-во секунд => ";
 cin >> Start_Seconds;
 minutes = Start_Seconds/60;
 hours = minutes/60;
 seconds = Start_Seconds%60;
 minutes = minutes%60;
 minute.first_minute_number = (minutes - (minutes % 10))/10;
 minute.second_minute_number = minutes%10;
 second.first_second_number = (seconds - (seconds % 10))/10;
 second.second_second_number = seconds%10;
 cout << hours << ":" << minute.first_minute_number << minute.second_minute_number
      << ":" << second.first_second_number << second.second_second_number;
}
