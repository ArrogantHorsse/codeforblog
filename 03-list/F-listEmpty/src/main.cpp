#include<iostream>
#include<list>

using std::cout;
using std::endl;
using std::list;

int main () {

    list<int> mylist1;
    list<int> mylist2 = {1, 2};
    cout<< "mylist1是否为空？"<< mylist1.empty() << endl;
    cout<< "mylist2是否为空？"<< mylist2.empty() << endl;
}
