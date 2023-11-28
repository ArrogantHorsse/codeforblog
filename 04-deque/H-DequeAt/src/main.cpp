#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;

int main() {
    deque<int> mydeque;
    // 初始化mydeque为{1，2，3，4，5}
    for (int i = 1; i <= 5; i++) {
        mydeque.push_back(i);
    }
    cout << "初始化后的mydeque：";
    for (auto num : mydeque) {
        cout << num << " ";
    }

    int num2 = mydeque.at(2);
    cout << "\nmydeque中索引为2的元素为：" << num2;
}
