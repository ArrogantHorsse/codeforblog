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
    // 删除mydeue尾部一个元素
    mylist.pop_back();
    cout << "\n尾部删除一个元素后的mylist为：";
    for (auto num : mylist) {
        cout << num << " ";
    }
}
