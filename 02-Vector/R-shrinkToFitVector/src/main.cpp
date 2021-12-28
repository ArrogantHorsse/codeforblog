#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> test;
    
    for(int i = 1;i<=9;i++) {
        test.push_back(i);
    }

    cout << "\nshink_to_fit前test.capacity() = " << test.capacity();

    test.shrink_to_fit();

    cout << "\nshrink_to_fit后test.capacity() = " << test.capacity();
}