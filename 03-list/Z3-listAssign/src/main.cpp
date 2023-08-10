#include <iostream>
#include <vector>
#include <list>

int main() {
    std::list<int> myList;

    // 使用迭代器范围进行分配
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    myList.assign(numbers.begin(), numbers.end());

    std::cout << "第一次执行assign之后的list为: ";
    for (auto i : myList) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    // 使用元素数量和值进行分配
    myList.assign(3, 100);

    std::cout << "第二次执行assign之后的list为: ";
    for (auto i : myList) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
