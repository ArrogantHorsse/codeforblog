#include<iostream>
#include<vector>

using std::endl;
using std::cout;
using std::vector;


int main() {
    vector<int> test {1,2,3,4,5};

    cout<< "test索引为0的元素"<< test.at(0) << endl;
    cout<< "test索引为1元素"<< test.at(1) << endl;
    cout<< "test索引为2元素"<< test[2] << endl;
    cout<< "test索引为6元素"<< test[6] << endl;
    cout<< "test索引为6元素"<< test.at(6) << endl;
    return 0;
}