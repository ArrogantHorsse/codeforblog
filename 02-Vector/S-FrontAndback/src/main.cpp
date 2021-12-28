#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> test;
    // 初始化test为【1，2，3，4，5】
    for (int i = 1; i <= 5; i++) {
        test.push_back(i);
    }

    cout << "test的第一个元素为：" <<test.front()<< endl;
    cout << "test的最后一个元素为：" <<test.back()<< endl;
}