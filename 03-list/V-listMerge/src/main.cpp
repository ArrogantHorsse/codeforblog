#include <iostream>
#include <list>

using namespace std;

// 用法一：普通的merge

// int main() {
//     std::list<int> list1 = {1, 3, 5};
//     std::list<int> list2 = {2, 4, 6};

//     cout << "初始化后的list1为：";
//     for (auto num : list1) {
//         cout << num << " ";
//     }
//     std::cout << std::endl;
//     cout << "初始化后的list2为：";
//     for (auto num : list2) {
//         cout << num << " ";
//     }
//     std::cout << std::endl;

//     // 将 list2 合并到 list1 中
//     list1.merge(list2);

//     // 输出合并后的列表
//     cout << "合并后的list1为：";
//     for (const auto& element : list1) {
//         std::cout << element << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// 用法二：使用自定义比较函数merge
bool customCompare(int x, int y) {
    return x % 5 < y % 5;
}
int main() {
    list<int> list1 = {3, 7, 8, 10, 21};
    list<int> list2 = {5, 6, 9, 13, 18};

    cout << "初始化后的list1为：";
    for (auto num : list1) {
        cout << num << " ";
    }
    std::cout << std::endl;
    cout << "初始化后的list2为：";
    for (auto num : list2) {
        cout << num << " ";
    }
    std::cout << std::endl;

    // 合并两个列表
    list1.merge(list2, customCompare);

    // 输出排序后的结果
    cout << "合并后的list1为：";
    for (int i : list1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
