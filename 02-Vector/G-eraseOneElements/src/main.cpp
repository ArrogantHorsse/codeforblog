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
    // 使用erase擦除一个元素
    vector<int>::iterator it;
    // test.begin()指向第一个元素，加二后指向第三个元素
    it = test.begin()+2;
    test.erase(it);

    // 擦除元素后的vector：
    cout<< "\n擦除元素后的vector：";
    for(auto num : test) {
        cout<< num << " ";
    }
}