#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> test;
    // 要求test中至少能容纳10个元素
    test.reserve(10);
    cout << "\nreserve后test.size() = " << test.size();
    cout << "\nreserve后test.capacity() = " << test.capacity();

    vector<int> test1;
    // 向test1中添加7个元素，根据前文经验，此时test1元素个数应为7，容量应为8
    for(int i = 1;i<=7;i++) {
        test1.push_back(i);
    }
    cout << "\nreserve前test1.capacity() = " << test1.capacity();
    // 要求test1中至少能容纳4个元素
    test1.reserve(4);
    cout << "\nreserve后test1.capacity() = " << test1.capacity();
}