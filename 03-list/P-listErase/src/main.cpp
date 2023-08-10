#include <list>
#include <iostream>

using std::cout;
using std::list;
using std::endl;

// 用法一：list.erase(iterator)
// int main() {
//     list<int> mylist{1, 2, 3, 4};
//     cout << "初始化后的mylist为：";
//     for (auto num : mylist) {
//         cout << num << " ";
//     }
//     // it指向mylist的第二个元素
//     list<int>::iterator it = ++mylist.begin();
//     // 删除it指向的元素，即2，并返回一个迭代器指向2之后的元素
//     list<int>::iterator itnew = mylist.erase(it);
//     cout << "\n删除元素后返回的迭代器itnew指向的元素为：" << *itnew;
//     cout << "\n使用erase删除元素后：";
//     for (auto num : mylist) {
//         cout << num << " ";
//     }
// }


// 用法二：list.erase(iterator1,iterator2)
int main() {
    list<int> mylist{1, 2, 3, 4};
    cout << "初始化后的mylist为：";
    for (auto num : mylist) {
        cout << num << " ";
    }
    // it1指向mylist的第二个元素
    list<int>::iterator it1 = ++mylist.begin();
    // it2指向mylist的最后一个元素后一个位置
    list<int>::iterator it2 = mylist.end();

    // 删除[it1,it2)之间的元素,即删除2，3，4
    mylist.erase(it1, it2);
    cout << "\n使用erase删除元素后：";
    for (auto num : mylist) {
        cout << num << " ";
    }
}
