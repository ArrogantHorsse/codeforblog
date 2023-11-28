#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;

int main() {
    deque<int> mydeque = {1, 2};
    // 把mydeque的大小设为5
    mydeque.resize(5);
    cout << "第一次resize后deque中元素为：";
    for (auto a : mydeque) {
        cout << a << " ";
    }
    cout << endl;
    // 把mydeque的大小设为1
    mydeque.resize(1);
    cout << "第二次resize后deque中元素为：";
    for (auto a : mydeque) {
        cout << a << " ";
    }
}
