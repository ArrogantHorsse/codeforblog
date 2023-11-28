#include<iostream>
#include<deque>

using std::cout;
using std::endl;
using std::deque;

int main () {
    deque<int> mydeque {1,2,3,4,5,6,7,8};
    cout<<"初始化后的mydeque为：";
    for(auto num:mydeque) {
        cout<<num<<" ";
    }
    int front = mydeque.front();
    int back = mydeque.back();
    cout<<"\nmydeque的头元素为："<< front;
    cout<<"\nmydeque的尾元素为："<< back;
}
