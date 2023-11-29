#include <array>
#include <iostream>

using std::cout;
using std::array;
using std::endl;

int main() {
    std::array<int, 5> n = {0};
    std::array<int, 5> n1 = {1, 2, 3, 4, 5};
    std::array<int, 5> n2 { {1, 2, 3, 4, 5} };

    cout<<"n中元素有: ";
    for (auto i : n) {
        cout<<i<<" ";
    }
    cout<<endl<<"n1中元素有: ";
    for (auto i : n1) {
        cout<<i<<" ";
    }
    cout<<endl<<"n2中元素有: ";
    for (auto i : n2) {
        cout<<i<<" ";
    }

}
