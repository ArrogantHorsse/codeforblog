#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {5, 3, 2, 4, 1};
    std::cout << "初始化后的list为 ";
    for (auto i : myList) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    myList.sort();
    std::cout << "排序后的list为: ";
    for (auto i : myList) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
