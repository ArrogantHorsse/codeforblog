#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> test;
    // 初始化vector为1-10
    for (int i = 1; i <= 10; i++) {
        test.push_back(i);
    }

    cout << "初始化后vector为： ";
    for (auto num : test) {
        cout << num << " ";
    }
    cout << endl;

    // vector.begin()为指向vector头元素的迭代器
    vector<int>::iterator begin_iterator = test.begin();
    cout << "begin() 指向的元素：" << *begin_iterator << endl;

    // vector.end()为指向vector尾元素后一个位置的迭代器，则test.end()-1指向尾元素
    auto end_iterator = test.end();
    cout << "end()-1 指向的元素：" << *(end_iterator - 1) << endl;

    // vector.rbegin()为指向尾元素的迭代器，即反向(r)的头(begin)迭代器
    auto rbegin_iterator = test.rbegin();
    cout << "rbegin() 指向的元素：" << *rbegin_iterator << endl;

    // vector.rend()为指向头元素的前一个位置的迭代器，即反向(r)尾(end)迭代器，则test.rend()-1指向头元素
    auto rend_iterator = test.rend();
    cout << "rend()-1 指向的元素：" << *(rend_iterator - 1) << endl;

    // vector.cbegin()为指向vector头元素的const迭代器，与begin()不同的是返回迭代器类型为vector<int>::const_iterator
    vector<int>::const_iterator cbegin_iterator = test.cbegin();
    cout << "cbegin() 指向的元素：" << *cbegin_iterator << endl;

    // vector.cend()为指向vector尾元素下一个位置的const迭代器，与end()不同的是返回迭代器类型为vector<int>::const_iterator
    vector<int>::const_iterator cend_iterator = test.cend();
    cout << "cend()-1 指向的元素：" << *(cend_iterator-1) << endl;

    // vector.crbegin()为指向尾元素的const迭代器，即反向(r)的const(c)头(begin)迭代器
    auto crbegin_iterator = test.crbegin();
    cout<<"crbegin() 指向的元素： "<< *crbegin_iterator<<endl;

    // vector.crend()为指向头元素下一个位置的const迭代器，即反向(r)的const(c)尾(end)迭代器
    auto crend_iterator = test.crend();
    cout<<"crend()-1 指向的元素： " << *(crend_iterator-1)<<endl;

    return 0;
}