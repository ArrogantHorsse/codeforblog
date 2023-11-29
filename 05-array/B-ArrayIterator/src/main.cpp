#include <array>
#include <iostream>

using std::array;
using std::cout;
using std::endl;

int main() {
    array<int, 5> myarray = {1, 2, 3, 4, 5};
    cout << "初始化后array为： ";
    for (auto num : myarray) {
        cout << num << " ";
    }
    cout << endl;

    // array.begin()为指向array头元素的迭代器
    auto begin_iterator = myarray.begin();
    cout << "begin() 指向的元素：" << *begin_iterator << endl;

    // array.end()为指向array尾元素后一个位置的迭代器，则myarray.end()-1指向尾元素
    auto end_iterator = myarray.end();
    cout << "end()-1 指向的元素：" << *(end_iterator - 1) << endl;

    // array.rbegin()为指向尾元素的迭代器，即反向(r)的头(begin)迭代器
    auto rbegin_iterator = myarray.rbegin();
    cout << "rbegin() 指向的元素：" << *rbegin_iterator << endl;

    // array.rend()为指向头元素的前一个位置的迭代器，即反向(r)尾(end)迭代器，则myarray.rend()-1指向头元素
    auto rend_iterator = myarray.rend();
    cout << "rend()-1 指向的元素：" << *(rend_iterator - 1) << endl;

    // array.cbegin()为指向array头元素的const迭代器，与begin()不同的是返回迭代器类型为array<int>::const_iterator
    auto cbegin_iterator = myarray.cbegin();
    cout << "cbegin() 指向的元素：" << *cbegin_iterator << endl;

    // array.cend()为指向array尾元素下一个位置的const迭代器，与end()不同的是返回迭代器类型为array<int>::const_iterator
    auto cend_iterator = myarray.cend();
    cout << "cend()-1 指向的元素：" << *(cend_iterator-1) << endl;

    // array.crbegin()为指向尾元素的const迭代器，即反向(r)的const(c)头(begin)迭代器
    auto crbegin_iterator = myarray.crbegin();
    cout<<"crbegin() 指向的元素： "<< *crbegin_iterator<<endl;

    // array.crend()为指向头元素下一个位置的const迭代器，即反向(r)的const(c)尾(end)迭代器
    auto crend_iterator = myarray.crend();
    cout<<"crend()-1 指向的元素： " << *(crend_iterator-1)<<endl;
}