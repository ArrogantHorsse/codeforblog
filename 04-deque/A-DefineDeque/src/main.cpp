#include <deque>
#include <iostream>

using std::cout;
using std::deque;
using std::endl;

int main() {
    deque<int> test;
    deque<int> test1 = {1, 2};
    deque<int> test2(test1);
    deque<int> test3 = test1;
    deque<int> test4(3, 2);
    deque<int> test5(5);
    deque<int> test6{1, 2, 3, 4, 5};
    deque<int> test7 = {1, 2, 3, 4, 5, 6};

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
