#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;

int main() {
    deque<int> test = {1, 2, 3, 4};
    cout << "初始化后deque为： ";
    for (auto num : test) {
        cout << num << " ";
    }
    cout << endl;

    // deque.begin()为指向deque头元素的迭代器
    deque<int>::iterator begin_iterator = test.begin();
    cout << "begin() 指向的元素：" << *begin_iterator << endl;

    // deque.end()为指向deque尾元素后一个位置的迭代器，则test.end()-1指向尾元素
    auto end_iterator = test.end();
    cout << "end()-1 指向的元素：" << *(end_iterator - 1) << endl;

    // deque.rbegin()为指向尾元素的迭代器，即反向(r)的头(begin)迭代器
    auto rbegin_iterator = test.rbegin();
    cout << "rbegin() 指向的元素：" << *rbegin_iterator << endl;

    // deque.rend()为指向头元素的前一个位置的迭代器，即反向(r)尾(end)迭代器，则test.rend()-1指向头元素
    auto rend_iterator = test.rend();
    cout << "rend()-1 指向的元素：" << *(rend_iterator - 1) << endl;

    // deque.cbegin()为指向deque头元素的const迭代器
    // 与begin()不同的是返回迭代器类型为deque<int>::const_iterator，不可修改元素
    deque<int>::const_iterator cbegin_iterator = test.cbegin();
    cout << "cbegin() 指向的元素：" << *cbegin_iterator << endl;

    // deque.cend()为指向deque尾元素下一个位置的const迭代器
    // 与end()不同的是返回迭代器类型为deque<int>::const_iterator，不可修改元素
    deque<int>::const_iterator cend_iterator = test.cend();
    cout << "cend()-1 指向的元素：" << *(cend_iterator - 1) << endl;

    // deque.crbegin()为指向尾元素的const迭代器，即反向(r)的const(c)头(begin)迭代器
    auto crbegin_iterator = test.crbegin();
    cout << "crbegin() 指向的元素： " << *crbegin_iterator << endl;

    // deque.crend()为指向头元素下一个位置的const迭代器，即反向(r)的const(c)尾(end)迭代器
    auto crend_iterator = test.crend();
    cout << "crend()-1 指向的元素： " << *(crend_iterator - 1) << endl;

    return 0;
}
