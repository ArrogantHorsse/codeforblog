#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 2, 3, 3, 4, 5, 5, 5};

    std::cout << "初始化后的list为: ";
    for (auto i : myList) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    myList.unique();

    std::cout << "执行unique后的list为: ";
    for (auto i : myList) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
