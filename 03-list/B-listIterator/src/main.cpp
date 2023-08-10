#include <list>
#include <iostream>

using std::cout;
using std::list;
using std::endl;

int main() {
    list<int> test = {1, 2, 3, 4};
    cout << "初始化后list为： ";
    for (auto num : test) {
        cout << num << " ";
    }
    cout << endl;

    // list.begin()为指向list头元素的迭代器
    list<int>::iterator begin_iterator = test.begin();
    cout << "begin() 指向的元素：" << *begin_iterator << endl;

    // list.end()为指向list尾元素后一个位置的迭代器，则test.end()指向位置的前一个元素是最后一个元素
    auto end_iterator = test.end();
    // end指向位置的前一个元素才是最后一个元素
    end_iterator--;
    cout << "end() 指向位置的前一个元素: " << *end_iterator << endl;

    // list.rbegin()为指向尾元素的迭代器，即反向(r)的头(begin)迭代器
    auto rbegin_iterator = test.rbegin();
    cout << "rbegin() 指向的元素：" << *rbegin_iterator << endl;

    // list.rend()为指向头元素的前一个位置的迭代器，即反向(r)尾(end)迭代器，则test.rend()指向位置的后一个元素指向头元素
    auto rend_iterator = test.rend();

    rend_iterator--;
    cout << "rend()指向位置的后一个元素：" << *rend_iterator << endl;

    // list.cbegin()为指向list头元素的const迭代器
    // 与begin()不同的是返回迭代器类型为list<int>::const_iterator，不可修改元素
    list<int>::const_iterator cbegin_iterator = test.cbegin();
    cout << "cbegin() 指向的元素：" << *cbegin_iterator << endl;

    // list.cend()为指向list尾元素下一个位置的const迭代器
    // 与end()不同的是返回迭代器类型为list<int>::const_iterator，不可修改元素
    list<int>::const_iterator cend_iterator = test.cend();
    cend_iterator--;
    cout << "cend()指向位置的前一个元素：" << *cend_iterator << endl;

    // list.crbegin()为指向尾元素的const迭代器，即反向(r)的const(c)头(begin)迭代器
    auto crbegin_iterator = test.crbegin();
    cout << "crbegin() 指向的元素： " << *crbegin_iterator << endl;

    // list.crend()为指向头元素下一个位置的const迭代器，即反向(r)的const(c)尾(end)迭代器
    auto crend_iterator = test.crend();
    crend_iterator--;
    cout << "crend()指向位置的后一个元素： " << *crend_iterator << endl;

    return 0;
}
