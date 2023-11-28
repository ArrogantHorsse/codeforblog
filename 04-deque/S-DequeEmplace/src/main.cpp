#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;

int main() {
    deque<int> mydeque{1, 2, 3, 4};
    cout << "初始化后的mydeque1为：";
    for (auto num : mydeque) {
        cout << num << " ";
    }
    // it指向mydeque第二个元素，即2
    deque<int>::iterator it = mydeque.begin() + 1;
    // 向it指向元素(2)前插入元素10，并返回指向10的迭代器
    deque<int>::iterator it1 = mydeque.emplace(it, 10);
    cout << "\n第一次插入后返回的迭代器it1指向元素为：" << *it1;
    // 向it1指向元素(10)前插入元素20，并返回指向20的迭代器
    deque<int>::iterator it2 = mydeque.emplace(it1, 20);
    cout << "\n第二次插入后返回的迭代器it2指向元素为：" << *it2;
    // 向mydeque尾部插入元素30
    mydeque.emplace(mydeque.end(), 30);
    cout << "\n三次插入元素后，mydeque为：";
    for (auto num : mydeque) {
        cout << num << " ";
    }
}
