#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> test;

    cout << "添加元素前test.isempty() = " << test.empty();

    for (int i = 1; i <= 5; i++) {
        test.push_back(i);
    }

    cout << "\n添加元素后test.isempty() = " << test.empty();
}