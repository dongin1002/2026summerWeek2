#include "timePtr.h"
#include <memory>

int main()
{
    using namespace KwakMinChae2449102;
    timePtr t1{13,30}; t1.print();
    timePtr t2{t1}; t2.print();
    timePtr t3{std::move(t2)}; t2.print(); t3.print();
    t2 = std::move(t3);
    t3 = t2;

    std::unique_ptr<timePtr> up1;
    auto up2 = std::make_unique<timePtr>(14, 40);
    up1 = std::move(up2); up1->print();

    auto sp1 = std::make_shared<timePtr>(15, 50);
    std::shared_ptr<timePtr> sp2{sp1};
    std::cout << sp1.use_count() << " " << sp2.use_count() << "\n";

    std::weak_ptr<timePtr> wp1{sp1};
    std::cout << sp1.use_count() << " " << sp2.use_count() << "\n";

    if(!wp1.expired())
        sp1 = wp1.lock();
    std::cout << sp1.use_count() << " " << sp2.use_count() << "\n";

    return 0;
}
