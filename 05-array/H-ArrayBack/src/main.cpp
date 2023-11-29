#include <array>
#include <iostream>
using std::array;
using std::cout;
using std::endl;

int main() {
    array<int, 5> myarray = {1, 2, 3, 4, 5};

    cout << "初始化后的myarray为：";
    for (auto num : myarray) {
        cout << num << " ";
    }
    int back = myarray.back();
    cout << "\nmyarray中的最后一个元素为：" << back;
}