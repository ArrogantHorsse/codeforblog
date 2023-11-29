#include <iostream>
#include <array>
using std::cout;
using std::endl;
using std::array;

int main() {
    array<int,5> myarray = {4,3,1,2,6};
    
    cout << "初始化后的myarray为：";
    for (auto num : myarray) {
        cout<<num<<" ";
    }
    int *sizeOfArray = myarray.data();
    cout<<"\nmyarray中第一个元素为："<< *sizeOfArray;    
    cout<<"\nmyarray中第二个元素为："<< *(sizeOfArray+1);    
    cout<<"\nmyarray中第五个元素为："<< *(sizeOfArray+4);    
}