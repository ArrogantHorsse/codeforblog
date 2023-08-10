#include <list>
#include <iostream>

using std::cout;
using std::list;
using std::endl;

int main() {
    list<int> test;
    list<int> test1 = {1, 2};
    list<int> test2(test1);
    list<int> test3 = test1;
    list<int> test4(3, 2);
    list<int> test5(5);
    list<int> test6{1, 2, 3, 4, 5};
    list<int> test7 = {1, 2, 3, 4, 5, 6};

    cout << "test:";
    for (auto a : test) {
        cout << a << " ";
    }
    cout << endl << "test1: ";
    for (auto b : test1) {
        cout << b << " ";
    }
    cout << endl << "test2: ";
    for (auto b : test2) {
        cout << b << " ";
    }
    cout << endl << "test3: ";
    for (auto b : test3) {
        cout << b << " ";
    }
    cout << endl << "test4: ";
    for (auto b : test4) {
        cout << b << " ";
    }
    cout << endl << "test5: ";
    for (auto b : test5) {
        cout << b << " ";
    }
    cout << endl << "test6: ";
    for (auto b : test6) {
        cout << b << " ";
    }
    cout << endl << "test7: ";
    for (auto b : test7) {
        cout << b << " ";
    }
}
