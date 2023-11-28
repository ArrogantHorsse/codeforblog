// 用法一
// #include <deque>
// #include <iostream>

// using std::cout;
// using std::deque;
// using std::endl;

// int main() {
//     deque<int> mydeque{1, 2, 3, 4};
//     cout << "初始化后的mydeque为：";
//     for (auto num : mydeque) {
//         cout << num << " ";
//     }
//     // it指向mydeque的第二个元素
//     deque<int>::iterator it = mydeque.begin() + 1;
//     // 删除it指向的元素，即2，并返回一个迭代器指向2之后的元素
//     deque<int>::iterator itnew = mydeque.erase(it);
//     cout << "\n删除元素后返回的迭代器itnew指向的元素为：" << *itnew;
//     cout << "\n使用erase删除元素后：";
//     for (auto num : mydeque) {
//         cout << num << " ";
//     }
// }


// 用法二
#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;

int main() {
    deque<int> mydeque{1, 2, 3, 4};
    cout << "初始化后的mydeque为：";
    for (auto num : mydeque) {
        cout << num << " ";
    }
    // it1指向mydeque的第二个元素
    deque<int>::iterator it1 = mydeque.begin() + 1;
    // it2指向mydeque的最后一个元素后一个位置
    deque<int>::iterator it2 = mydeque.end();

    // 删除[it1,it2)之间的元素,即删除2，3，4
    mydeque.erase(it1, it2);
    cout << "\n使用erase删除元素后：";
    for (auto num : mydeque) {
        cout << num << " ";
    }
}
