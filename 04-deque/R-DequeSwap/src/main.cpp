#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;

int main() {
    deque<int> mydeque1{1, 11, 111, 1111};
    deque<int> mydeque2{2, 22, 222};
    cout << "初始化后的mydeque1为：";
    for (auto num : mydeque1) {
        cout << num << " ";
    }
    cout << "\n初始化后的mydeque1为：";
    for (auto num : mydeque2) {
        cout << num << " ";
    }
    // 交换mydeque1和mydeque2的元素
    mydeque1.swap(mydeque2);
    cout << "\n使用swap交换元素后mydeque1：";
    for (auto num : mydeque1) {
        cout << num << " ";
    }
    cout << "\n使用swap交换元素后mydeque2：";
    for (auto num : mydeque2) {
        cout << num << " ";
    }
}
