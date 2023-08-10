#include <list>
#include <iostream>

using std::cout;
using std::list;
using std::endl;

int main() {
    list<int> mylist = {2, 3};
    cout<< "mylist最多可容纳元素个数尾max_size() = "<< mylist.max_size()<< endl;
}
