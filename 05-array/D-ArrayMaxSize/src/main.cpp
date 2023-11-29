#include <iostream>
#include <array>
using std::cout;
using std::endl;
using std::array;

int main() {
    array<int,5> myarray = {1,2,3,4,5};
    cout << "初始化后的myarray为：";
    for (auto num : myarray) {
        cout<<num<<" ";
    }
    int sizeOfArray = myarray.max_size();
    cout<<"\nmyarray.size为："<< sizeOfArray; 
    int max_sizeOfArray = myarray.max_size();
    cout<<"\nmyarray.max_size为："<< max_sizeOfArray;    
}