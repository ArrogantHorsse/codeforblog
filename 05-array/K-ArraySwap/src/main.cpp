#include <array>
#include <iostream>
using std::array;
using std::cout;
using std::endl;

int main() {
    array<int, 5> myarray1 = {1, 2, 3, 4, 5};
    array<int, 5> myarray2 = {11, 22, 33, 44, 55};

    cout << "初始化后的myarray1为：";
    for (auto num : myarray1) {
        cout << num << " ";
    }
    cout << "\n初始化后的myarray2为：";
    for (auto num : myarray2) {
        cout << num << " ";
    }
    myarray1.swap(myarray2);
    cout << "\n交换元素后myarray1为：";
    for (auto num : myarray1) {
        cout << num << " ";
    }
    cout << "\n交换元素后myarray2为：";
    for (auto num : myarray2) {
        cout << num << " ";
    }
}