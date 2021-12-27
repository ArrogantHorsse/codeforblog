#include<iostream>
#include<vector>

using std::endl;
using std::cout;
using std::vector;
using std::string;


int main() {
    vector<string> test {"dog","cat","rabbit","pig","fish"};

    // 初始化
    cout << "初始化的 Vector: ";
    for (string animal : test) {
        cout << animal << " ";
    }

    vector<string>::iterator it;
    it = test.begin();
    // 指定vector元素，it+1指向cat,end-1指向fish"
    // 用[it+1,end-1)之间元素覆盖旧的元素
    test.assign(it+1,test.end()-1);
    // 使用迭代器指定元素后
    cout << "\n使用迭代器指定元素的 Vector: ";
    for (string animal : test) {
        cout << animal << " ";
    }

    // 使用数组元素地址指定vector元素
    string mystrs[] = {"bird","snack","dragon"};
    test.assign(mystrs,mystrs+2);
    cout << "\n使用数组元素地址指定元素的 Vector: ";
    for (string animal : test) {
        cout << animal << " ";
    }
    return 0;
}