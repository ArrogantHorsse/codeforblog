#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> test;
    // 初始化test
    for (int i = 1; i <= 5; i++) {
        test.push_back(i);
    }
    cout << "初始化后的test为：";
    for (auto num : test) {
        cout<<num<<" ";
    }
    int sizeOftest = test.size();
    cout<<"\ntest中的元素个数为："<< sizeOftest;    
}