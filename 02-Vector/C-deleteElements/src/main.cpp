#include<iostream>
#include<vector>

using std::endl;
using std::cout;
using std::vector;


int main() {
    vector<int> test {1,2,3,4,5};

    // initial vector
    cout << "初始化的 Vector: ";
    for (int num : test) {
        cout << num << " ";
    }
    // 删除vector最后一个元素
    test.pop_back();
    // initial vector
    cout << "\n删除元素的 Vector: ";
    for (int num : test) {
        cout << num << " ";
    }

    return 0;
}