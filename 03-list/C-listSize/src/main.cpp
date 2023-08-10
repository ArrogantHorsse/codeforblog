#include <list>
#include <iostream>

using std::cout;
using std::list;
using std::endl;

int main() {
    list<int> mylist1 = {2, 3};
    list<int> mylist2 = {1, 2, 3, 4};
    cout<< "mylist1中元素个数为 = "<< mylist1.size()<< endl;
    cout<< "mylist2中元素个数为 = "<< mylist2.size()<< endl;
}
