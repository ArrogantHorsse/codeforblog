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
    // 在list尾部插入一个元素8
    mylist.push_back(8);
    cout << "\n尾部插入一个元素后的mylist为：";
    for (auto num : mylist) {
        cout << num << " ";
    }
}
