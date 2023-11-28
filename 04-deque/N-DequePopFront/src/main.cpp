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
    // 删除mydeue头部一个元素
    mydeque.pop_front();
    cout << "\n头部删除一个元素后的mydeque为：";
    for (auto num : mydeque) {
        cout << num << " ";
    }
}
