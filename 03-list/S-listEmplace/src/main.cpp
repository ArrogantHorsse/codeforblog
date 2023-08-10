#include <list>
#include <iostream>

using std::cout;
using std::list;
using std::endl;

int main() {
    list<int> mylist{1, 2, 3, 4};
    cout << "初始化后的mylist1为：";
    for (auto num : mylist) {
        cout << num << " ";
    }
    // it指向mylist第二个元素，即2
    list<int>::iterator it = ++mylist.begin();
    // 向it指向元素(2)前插入元素10，并返回指向10的迭代器
    list<int>::iterator it1 = mylist.emplace(it, 10);
    cout << "\n第一次插入后返回的迭代器it1指向元素为：" << *it1;
    // 向it1指向元素(10)前插入元素20，并返回指向20的迭代器
    list<int>::iterator it2 = mylist.emplace(it1, 20);
    cout << "\n第二次插入后返回的迭代器it2指向元素为：" << *it2;
    // 向mylist尾部插入元素30
    list<int>::iterator it3 = mylist.emplace(mylist.end(), 30);
    cout << "\n第三次插入后返回的迭代器it3指向元素为：" << *it3;
    cout << "\n三次插入元素后，mylist为：";
    for (auto num : mylist) {
        cout << num << " ";
    }
}
