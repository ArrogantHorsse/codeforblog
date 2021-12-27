#include<iostream>
#include<vector>

using std::endl;
using std::cout;
using std::vector;


int main() {
    vector<int> test {1,2,3,4,5};

    cout<<"初始化的Vector: ";
    for(auto num : test) {
        cout<<num<<" ";
    }
    cout<<endl;
    test.push_back(6);
    test.push_back(7);
    test.push_back(8);
    test[8] = 9;
    cout<<"添加元素后的Vector: ";
    for(auto num : test) {
        cout<<num<<" ";
    }

    cout<<endl<<test[1]<<endl;
    return 0;
}