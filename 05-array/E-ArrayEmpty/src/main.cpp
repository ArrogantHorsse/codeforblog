#include <array>
#include <iostream>
using std::array;
using std::cout;
using std::endl;

int main() {
    array<int, 5> myarray = {1, 2, 3, 4, 5};
    array<int, 0> myarray2;
    cout << "初始化后的myarray为：";
    for (auto num : myarray) {
        cout << num << " ";
    }
    cout << "\n初始化后的myarray2为：";
    for (auto num : myarray2) {
        cout << num << " ";
    }
    bool isEmpty = myarray.empty();
    bool isEmpty2 = myarray2.empty();
    cout << "\nmyarray.empty() = " << isEmpty << endl;
    cout << "myarray2.empty() = " << isEmpty2 << endl;
}