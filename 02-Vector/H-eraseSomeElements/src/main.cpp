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
    vector<int>::iterator it1;
    vector<int>::iterator it2;
    // test.begin()指向第1个元素，加1后指向第2个元素
    it1 = test.begin()+1;
    // test.begin()指向第1个元素，加5后指向第6个元素
    it2 = test.begin()+5;
    // 删除2，3，4，5
    test.erase(it1,it2);

    // 擦除元素后的vector：
    cout<< "\n擦除元素后的vector：";
    for(auto num : test) {
        cout<< num << " ";
    }
}