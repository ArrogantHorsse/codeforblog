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
    // 清除mydeque中所有元素
    mydeque.clear();
    cout << "\n使用clear清空元素后mydeque.size() =" << mydeque.size();
    cout << "\n使用clear清空元素后：";
    for (auto num : mydeque) {
        cout << num << " ";
    }
}
