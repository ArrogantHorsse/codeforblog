#include<iostream>
#include<vector>

using std::endl;
using std::cout;
using std::vector;
using std::string;


int main() {
    vector<int> test {1,2,3,4,5};

    // 初始化
    cout << "初始化的 Vector: ";
    for (int num : test) {
        cout << num << " ";
    }

    vector<int>::iterator it;
    it = test.begin();
    
    // it指向vector第一个元素，则把9插入到1之前
    test.insert(it,9);
    
    cout << "\n插入元素后的 Vector: ";
    for (int num : test) {
        cout << num << " ";
    }

    return 0;
}