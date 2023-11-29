#include<iostream>
#include<array>

using std::endl;
using std::cout;
using std::array;

int main() {
    array<int,5> myarray = {1,2,3,4,5};
    
    cout<< "myarray索引为0的元素: "<< myarray.at(0) << endl;
    cout<< "myarray索引为1元素: "<< myarray.at(1) << endl;
    cout<< "myarray索引为2元素: "<< myarray[2] << endl;
    return 0;
}