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
//     mydeque.assign(3, 2);
//     cout << "\nassign之后mydeque为：";
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
//     deque<int> mydeque1{1, 2, 3, 4};
//     deque<int> mydeque2{5, 6, 7, 8};
//     cout << "初始化后的mydeque1为：";
//     for (auto num : mydeque1) {
//         cout << num << " ";
//     }
//     cout << "\n初始化后的mydeque2为：";
//     for (auto num : mydeque2) {
//         cout << num << " ";
//     }
//     // it1指向mydeque1头元素的下一个元素，即第二的元素
//     deque<int>::iterator it1 = mydeque1.begin() + 1;
//     // it2指向mydeque1尾元素
//     deque<int>::iterator it2 = mydeque1.end() - 1;

//     // 用[*it1,*it2)的元素替换mydeque2中的元素
//     mydeque2.assign(it1, it2);

//     cout << "\nassign后的mydeque2为：";
//     for (auto num : mydeque2) {
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
    deque<int> mydeque1{1, 2, 3, 4};
    int a[5] = {10,20,30,40,50};
    cout << "初始化后的mydeque1为：";
    for (auto num : mydeque1) {
        cout << num << " ";
    }
    
    // a[2]为30，a[4]为50，则用[a[2],a[4])的元素替换mydeque1中元素
    mydeque1.assign(&a[2], &a[4]);

    cout << "\nassign后的mydeque1为：";
    for (auto num : mydeque1) {
        cout << num << " ";
    }
}
