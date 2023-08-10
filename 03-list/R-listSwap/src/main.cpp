#include <list>
#include <iostream>

using std::cout;
using std::list;
using std::endl;

int main() {
    list<int> mylist1{1, 11, 111, 1111};
    list<int> mylist2{2, 22, 222};
    cout << "初始化后的mylist1为：";
    for (auto num : mylist1) {
        cout << num << " ";
    }
    cout << "\n初始化后的mylist1为：";
    for (auto num : mylist2) {
        cout << num << " ";
    }
    // 交换mylist1和mylist2的元素
    mylist1.swap(mylist2);
    cout << "\n使用swap交换元素后mylist1：";
    for (auto num : mylist1) {
        cout << num << " ";
    }
    cout << "\n使用swap交换元素后mylist2：";
    for (auto num : mylist2) {
        cout << num << " ";
    }
}
