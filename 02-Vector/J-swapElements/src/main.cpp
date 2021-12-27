#include<iostream>
#include<vector>

using std::endl;
using std::cout;
using std::vector;

int main() {
    vector<int> test1 ;
    vector<int> test2 ;
    // initial vector
    for(int i = 1;i<=8;i++) {
        test1.push_back(i);
    }
    for(int i = 10;i<=14;i++) {
        test2.push_back(i);
    }
    // 初始化后的vector:
    cout<<"初始化后的test1: ";
    for(auto num : test1) {
        cout<<num<<" ";
    }
    cout<<"\n初始化后的test2: ";
    for(auto num : test2) {
        cout<<num<<" ";
    }
    // 使用swap交换test1和test2
    test1.swap(test2);

    // 交换元素后的test1：
    cout<< "\n交换元素后的test1：";
    for(auto num : test1) {
        cout<< num << " ";
    }
    cout<< "\n交换元素后的test2：";
    for(auto num : test2) {
        cout<< num << " ";
    }
}