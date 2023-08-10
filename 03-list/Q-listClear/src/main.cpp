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
    // 清除mylist中所有元素
    mylist.clear();
    cout << "\n使用erase清空元素后mylist.size() =" << mylist.size();
    cout << "\n使用erase清空元素后：";
    for (auto num : mylist) {
        cout << num << " ";
    }
}
