#include<iostream>
#include<list>

using std::cout;
using std::endl;
using std::list;

int main() {
    list<int> mylist {1, 2, 3, 4, 5, 6, 7, 8};
    cout<< "初始化后的mylist为：";
    for (auto num : mylist) {
        cout<< num<< " ";
    }
    int back = mylist.back();

    cout<< "\nmylist的头元素为："<< back;
}
