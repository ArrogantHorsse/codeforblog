#include <iostream>
#include <list>

int main() {
    std::list<int> mylist {1, 2, 3, 4, 5};
    // 移除列表中所有值为2的元素
    mylist.remove(2);
    std::cout << "移除之后的mylist: ";
    for (const auto& element : mylist) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}
