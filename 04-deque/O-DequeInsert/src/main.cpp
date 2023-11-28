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
//     // 使用insert添加一个元素
//     deque<int>::iterator itnew = mydeque.insert(it, 10);
//     cout << "\n返回的迭代器指向的元素为" << *itnew;
//     cout << "\ninsert添加一个元素后的mydeque为：";
//     for (auto num : mydeque) {
//         cout << num << " ";
//     }
// }


// 用法二
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

//     // 使用insert添加2个元素，value为20
//     mydeque.insert(it, 2, 20);
//     cout << "\n使用insert插入元素后：";
//     for (auto num : mydeque) {
//         cout << num << " ";
//     }
// }

// 用法三
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
    // it指向mydeque的第二个元素
    deque<int>::iterator it = mydeque.begin() + 1;
    // 定义一个辅助deque
    deque<int> deque2{10, 20, 30};
    // it1指向deque2的第一个元素
    deque<int>::iterator it1 = deque2.begin();
    // it2指向deque2的最后一个元素后一个位置
    deque<int>::iterator it2 = deque2.end();
    // 使用insert在2之前添加[it1,it2)之间的元素
    mydeque.insert(it, it1, it2);
    cout << "\n使用insert插入元素后：";
    for (auto num : mydeque) {
        cout << num << " ";
    }
}
