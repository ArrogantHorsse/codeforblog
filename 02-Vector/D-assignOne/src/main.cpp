#include<iostream>
#include<vector>

using std::endl;
using std::cout;
using std::vector;
using std::string;


int main() {
    vector<string> test {"dog","cat","rabbit"};

    // 初始化
    cout << "初始化的 Vector: ";
    for (string animal : test) {
        cout << animal << " ";
    }
    // 指定vector元素，2个"sheep"
    test.assign(2,"sheep");
    // 指定元素后
    cout << "\n指定元素的 Vector: ";
    for (string animal : test) {
        cout << animal << " ";
    }
    
    return 0;
}