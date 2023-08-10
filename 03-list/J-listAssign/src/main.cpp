#include <list>
#include <iostream>

using std::cout;
using std::list;
using std::endl;
// List Assign用法一
// int main() {
//     list<int> mylist{1, 2, 3, 4};
//     cout << "初始化后的mylist为：";
//     for (auto num : mylist) {
//         cout << num << " ";
//     }
//     mylist.assign(3, 2);
//     cout << "\nassign之后mylist为：";
//     for (auto num : mylist) {
//         cout << num << " ";
//     }
// }


// List Assign用法二
// int main() {
//     list<int> mylist1{1, 2, 3, 4};
//     list<int> mylist2{5, 6, 7, 8};
//     cout << "初始化后的mylist1为：";
//     for (auto num : mylist1) {
//         cout << num << " ";
//     }
//     cout << "\n初始化后的mylist2为：";
//     for (auto num : mylist2) {
//         cout << num << " ";
//     }
//     // it1指向mylist1头元素的下一个元素，即第二个元素
//     list<int>::iterator it1 = ++mylist1.begin();
//     // it2指向mylist1尾元素
//     list<int>::iterator it2 = --mylist1.end();

//     // 用[*it1,*it2)的元素替换mylist2中的元素
//     mylist2.assign(it1, it2);

//     cout << "\nassign后的mylist2为：";
//     for (auto num : mylist2) {
//         cout << num << " ";
//     }
// }

// List Assign用法三
int main() {
    list<int> mylist1{1, 2, 3, 4};
    int a[5] = {10, 20, 30, 40, 50};
    cout << "初始化后的mylist1为：";
    for (auto num : mylist1) {
        cout << num << " ";
    }

    // a[2]为30，a[4]为50，则用[a[2],a[4])的元素替换mylist1中元素
    mylist1.assign(&a[2], &a[4]);

    cout << "\nassign后的mylist1为：";
    for (auto num : mylist1) {
        cout << num << " ";
    }
}
