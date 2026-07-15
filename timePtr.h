#include "timeOfDay.h"

namespace KwakMinChae2449102
{
    class timePtr
    {
        timeOfDay* ptr;
    public:
        timePtr(int h = 0, int m = 0):ptr{new timeOfDay{h,m}}{}
        ~timePtr(){delete ptr;}
        timePtr(const timePtr& copy){
            ptr = copy.ptr ? new timeOfDay{*copy.ptr} : nullptr;
        }
        timePtr& operator=(const timePtr& copy){
            if(this != &copy) {
                delete ptr;
                ptr = copy.ptr ? new timeOfDay{*copy.ptr} : nullptr;
            }
            return *this;
        }
        timePtr(timePtr&& move) noexcept {
            ptr = move.ptr;
            move.ptr = nullptr;
        }
        timePtr& operator=(timePtr&& move){
            if (this != &move){
                delete ptr;
                ptr = move.ptr;
                move.ptr = nullptr;
            }
            return *this;
        }
        void print() const
        {
            if(ptr) {
                ptr->print();
                std::cout << '\n';
            }
            else
                std::cout << "no time data (nullptr)\n";
        }
    };
}
