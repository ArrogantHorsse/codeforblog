#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;

int main() {
    deque<int> mydeque{1, 2, 3, 4};

    cout << "初始化后的mydeque为：";
    for (auto num : mydeque) {
        cout << num << " ";
    }
    // 在deque头部插入一个元素10
    mydeque.emplace_front(10);

    cout << "\n头部插入一个元素后的mydeque为：";
    for (auto num : mydeque) {
        cout << num << " ";
    }
}
