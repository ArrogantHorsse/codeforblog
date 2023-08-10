#include <list>
#include <iostream>

using std::cout;
using std::list;
using std::endl;

int main() {
    list<int> mylist{1, 2, 3, 4};

    cout << "初始化后的mylist为：";
    for (auto num : mylist) {
        cout << num << " ";
    }
    // 在list头部插入一个元素10
    mylist.emplace_front(10);

    cout << "\n头部插入一个元素后的mylist为：";
    for (auto num : mylist) {
        cout << num << " ";
    }
}
