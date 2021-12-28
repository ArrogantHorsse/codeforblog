#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> test;
    // 初始化test = [1,2,3,4,5,6,7,8,9,10]
    for (int i = 1; i <= 10; i++) {
        test.push_back(i);
        cout << "test中的元素个数为：" << test.size();
        cout << "\ntest当前被分配的容量为：" << test.capacity();
        cout<<"\n==========================================\n";
    }
}