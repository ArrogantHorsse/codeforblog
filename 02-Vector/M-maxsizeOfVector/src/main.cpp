#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;

int main() {
    vector<int> test;
    int sizeOftest = test.size();
    cout<<"\ntest中最多能容纳的元素个数为："<< test.max_size();    
}