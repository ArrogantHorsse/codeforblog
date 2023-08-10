#include <list>
#include <iostream>

using std::cout;
using std::list;
using std::endl;

// 用法一：list.insert(iterator,value)
// int main() {
//     list<int> mylist{1, 2, 3, 4};
//     cout << "初始化后的mylist为：";
//     for (auto num : mylist) {
//         cout << num << " ";
//     }
//     // it指向mylist的第二个元素
//     list<int>::iterator it = ++mylist.begin();
//     // 使用insert添加一个元素
//     list<int>::iterator itnew = mylist.insert(it, 10);
//     cout << "\n返回的迭代器指向的元素为" << *itnew;
//     cout << "\ninsert添加一个元素后的mylist为：";
//     for (auto num : mylist) {
//         cout << num << " ";
//     }
// }

// 用法二：list.insert(iterator,num,value)
// #include <list>
// #include <iostream>

// using std::cout;
// using std::list;
// using std::endl;

// int main() {
//     list<int> mylist{1, 2, 3, 4};
//     cout << "初始化后的mylist为：";
//     for (auto num : mylist) {
//         cout << num << " ";
//     }
//     // it指向mylist的第二个元素
//     list<int>::iterator it = ++mylist.begin();

//     // 使用insert添加2个元素，value为20
//     mylist.insert(it, 2, 20);
//     cout << "\n使用insert插入元素后：";
//     for (auto num : mylist) {
//         cout << num << " ";
//     }
// }

// 用法三：insert(iterator, iterator1, iterator2)
// int main() {
//     list<int> mylist{1, 2, 3, 4};
//     cout << "初始化后的mylist为：";
//     for (auto num : mylist) {
//         cout << num << " ";
//     }
//     // it指向mylist的第二个元素
//     list<int>::iterator it = ++mylist.begin();
//     // 定义一个辅助list
//     list<int> {10, 20, 30};
//     // it1指向list2的第一个元素
//     list<int>::iterator it1 = list2.begin();
//     // it2指向list2的最后一个元素后一个位置
//     list<int>::iterator it2 = list2.end();
//     // 使用insert在2之前添加[it1,it2)之间的元素
//     mylist.insert(it, it1, it2);
//     cout << "\n使用insert插入元素后：";
//     for (auto num : mylist) {
//         cout << num << " ";
//     }
// }

// 用法四 insert(iterator, std::initializer_list)
int main() {
    list<int> mylist{1, 2, 3, 4};
    cout << "初始化后的mylist为：";
    for (auto num : mylist) {
        cout << num << " ";
    }
    // it指向mylist的第二个元素
    list<int>::iterator it = ++mylist.begin();

    // 使用insert在2之前添加元素
    mylist.insert(it, {100, 200, 300});
    cout << "\n使用insert插入元素后：";
    for (auto num : mylist) {
        cout << num << " ";
    }
}
