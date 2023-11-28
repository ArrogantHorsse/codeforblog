#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;

int main() {
    deque<int> mydeque = {2, 3};
    cout<< "mydeque最多可容纳元素个数尾max_size() = "<< mydeque.max_size()<<endl;
}
