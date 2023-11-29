#include <iostream>
#include <array>
using std::cout;
using std::endl;
using std::array;

int main() {
	// 定义一个array，未初始化
    array<int,5> myarray;
    myarray.fill(2);
    cout << "fill(2)后的myarray为：";
    for (auto num : myarray) {
        cout<<num<<" ";
    }
    myarray.fill(5);
    cout << "\nfill(5)后的myarray为：";
    for (auto num : myarray) {
        cout<<num<<" ";
    }
}