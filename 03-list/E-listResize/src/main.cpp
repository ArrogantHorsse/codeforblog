#include <iostream>
#include <list>

using std::cout;
using std::list;
using std::endl;

int main() {
    list<int> mylist = {1, 2};
    // 把mylist的大小设为5
    mylist.resize(5);
    cout << "第一次resize后list中元素为：";
    for (auto a : mylist) {
        cout << a << " ";
    }
    cout << endl;
    // 把mylist的大小设为1
    mylist.resize(1);
    cout << "第二次resize后list中元素为：";
    for (auto a : mylist) {
        cout << a << " ";
    }
    cout << endl;

    // 把list大小设为4，不足部分填充5
    mylist.resize(4, 5);
    cout << "第三次resize后list中元素为：";
    for (auto a : mylist) {
        cout << a << " ";
    }
    cout << endl;
}
