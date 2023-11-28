#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;

int main() {
    deque<int> mydeque;
    // 改变mydeque的大小为100，此时会分配给deque这100个元素所需要的内存
    mydeque.resize(100);
    cout << "mydeque.size() = " << mydeque.size() << "\n";
    // 改变mydeque的大小为10，deque中后90个元素被删除
    // 但是由于deque实现机制，这些元素被删除后，分配给他们的内存空间可以被保留
    // 因此改变mydeque大小为10之后，可能会有额外的内存空间在mydeque中未被使用
    mydeque.resize(10);
    cout << "mydeque.size() = " << mydeque.size() << "\n";
    // 减小mydeque的内存到实际mydeque使用的大小
    mydeque.shrink_to_fit();
}
