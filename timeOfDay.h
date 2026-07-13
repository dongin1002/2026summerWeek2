#pragma once
#include <iostream>
namespace KwakMinChae2449102
{
    class timeOfDay
    {
        int hour;
        int minute;

        void testHour() {
            if (hour < 0 || hour > 23) {
                std::cout << "invalid hour\n";
                std::exit(1);
            }
        }
        void testMinute() {
            if (minute < 0 || minute > 59) {
                std::cout << "invalid minute\n";
                std::exit(1);
            }
        }
    public:
            timeOfDay(int h = 0, int m = 0):hour{h}, minute{m}{testHour(); testMinute();}
            void input(){
                std::cout << "Enter hour(0-23): "; std::cin>>hour; testHour();
                std::cout << "Enter minute(0-59): "; std::cin >> minute; testMinute();}
            
            void setHour(int h) {hour = h; testHour();}
            void setMinute(int m) {minute = m; testMinute();}
            void print() const{
                if (hour< 10) std::cout << "0";
                std::cout << hour << ":" ;
                if (minute < 10) std::cout << "0";
                std::cout << minute; }
            int getHour() const {return hour;}
            int getMinute() const {return minute;}

            
      };            
}
