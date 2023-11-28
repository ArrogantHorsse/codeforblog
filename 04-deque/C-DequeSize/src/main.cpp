#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;

int main() {
    deque<int> mydeque = {2, 3};
    cout<< "添加元素前mydeque.size() = "<< mydeque.size()<<endl;
    // 在deque头部插入一个元素5
    mydeque.push_front(5);
    // 在deque尾部插入一个元素5
    mydeque.push_back(1);
    cout<< "添加元素后mydeque.size() = "<< mydeque.size()<<endl;
}
