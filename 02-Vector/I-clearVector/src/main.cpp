#include<iostream>
#include<vector>

using std::endl;
using std::cout;
using std::vector;

int main() {
    vector<int> test ;
    // initial vector
    for(int i = 1;i<=8;i++) {
        test.push_back(i);
    }
    // 初始化后的vector:
    cout<<"初始化后的vector: ";
    for(auto num : test) {
        cout<<num<<" ";
    }
    // 使用clear清空vector
    test.clear();

    // 清空元素后的vector：
    cout<< "\nvector.size() = "<<test.size();
    cout<< "\n清空元素后的vector：";
    for(auto num : test) {
        cout<< num << " ";
    }
}