#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = {1, 2, 3, 4, 5};
    std::list<int> list2 = {10, 20, 30};
    std::list<int> list3 = {1, 2, 3, 4, 5};
    std::list<int> list4 = {10, 20, 30};
    std::list<int> list5 = {1, 2, 3, 4, 5};
    std::list<int> list6 = {10, 20, 30};

    /*
       用法一 : splice(iterator_pos, otherList)
    */

    // 将list2中所有元素插入到list1的第一个位置
    list1.splice(list1.begin(), list2);
    // 输出结果
    std::cout<< "转移list2元素到list1之后的list1: ";
    for (int i : list1) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout<< "转移list2元素到list1之后的list1: ";
    for (int i : list2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    /*
        用法二：splice(iterator_pos, otherList, iter1)
    */
    auto it = list3.begin();
    // 将迭代器向后移动两个位置，指向第三个元素
    std::advance(it, 2);
    // 将list4的第一个元素(10)插入到list3的第三个位置
    list3.splice(it, list4, list4.begin());

    // 输出结果
    std::cout<< "转移list4元素到list3之后的list3: ";
    for (int i : list3) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout<< "转移list4元素到list3之后的list4: ";
    for (int i : list4) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    /*
        用法三：splice(iterator_pos, otherList, iter_start, iter_end)
    */

    // 将list5中第二个到第四个元素移动到list6的末尾
    auto first = list5.begin();
    std::advance(first, 1);
    auto last = list5.begin();
    std::advance(last, 4);
    list6.splice(list6.end(), list5, first, last);

    // 输出结果
    std::cout<< "转移list5元素到list6之后的list5: ";
    for (int i : list5) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout<< "转移list5元素到list6之后的list6: ";
    for (int i : list6) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
