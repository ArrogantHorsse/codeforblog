#include<iostream>
#include<deque>

using std::cout;
using std::endl;
using std::deque;

int main () {

    deque<int> mydeque;
    cout<<"mydeque是否为空？"<< mydeque.empty();
    // 在deque尾部插入一个元素5
    mydeque.push_back(5);
    cout<<"\nmydeque是否为空？"<< mydeque.empty();
    
}
