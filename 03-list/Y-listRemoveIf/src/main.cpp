#include <iostream>
#include <list>

bool isEven(int n) {
    return n % 2 == 0;
}
int main() {
    std::list<int> mylist {1, 2, 3, 4, 5};
    // 移除列表中所有满足 isEven 的元素（偶数）
    mylist.remove_if(isEven);
    std::cout << "移除之后的mylist: ";
    for (const auto& element : mylist) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return 0;
}
