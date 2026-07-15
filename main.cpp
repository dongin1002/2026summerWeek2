#include "alarm.h"
#include <array>

namespace KwakMinChae2449102
{
    void printAlarmArray(const alarm a[], const int n)
    {
        for (int i = 0; i<n; ++i) std::cout << a[i];
    }
    void parVal(timeOfDay v){v += 1;}
    void parRef(timeOfDay& r){r += 1;}
    void parPtr(timeOfDay* p){*p += 1;}
    timeOfDay retVal(timeOfDay v){v += 1; return v;}
    timeOfDay& retRef(timeOfDay& r){r += 1; return r;}
    timeOfDay* retPtr(timeOfDay* p){*p += 1; return p;}
}
int main()
{
    using namespace KwakMinChae2449102;
    timeOfDay val{23,59}; std::cout << val << " ";
    parVal(val); std::cout << val << std::endl;
    timeOfDay& ref{val}; std::cout << ref << " ";
    parRef(ref); std::cout << ref << "\n";
    timeOfDay* ptr(&val); std::cout << *ptr << " ";
    parPtr(ptr); std::cout << *ptr << "\n";

    val = timeOfDay{15,30}; 
    std::cout << val << " " << retVal(val) << "\n";
    std::cout << ref << " " << retRef(ref) << "\n";
    std::cout << *ptr << " " << *retPtr(ptr) << "\n";

    timeOfDay* tPtr {new timeOfDay};
    tPtr->setHour(18);
    tPtr->setMinute(30);
    std::cout << *tPtr << std::endl;
    delete tPtr;
    
    // const int n{4};
    // alarm a[n];
    // a[0] = alarm("morning", {6,0}, 1);
    // a[1].setName("class");
    // a[1].setWakeTime({9,0});
    // a[1].setActive(1);
    // a[2].input();
    // std::cin >> a[3];
    // std::cout << a[3];
    // printAlarmArray(a,n);

    // std::array<alarm, n>b;
    // for (int i = 0; i <b.size(); ++i)
    //     b.at(i) = a[i];
    // for(const auto& bi : b)
    //     bi.print();
    // timeOfDay t1, t2;
    // std::cin >> t1;
    // std::cout << t1 << " " << t2;
    // std::cout << ++t2 << '\n';
    // std::cout << t2++ << '\n';
    // std::cout << t2 << '\n';

    // if (t1==t2) std::cout << "same\n";
    // else std::cout << "different\n";
    return 0;
}
