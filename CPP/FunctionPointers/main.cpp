#include <iostream>
using namespace std;

// Declare function pointer
void (*ptrFn)();

void show() {
    cout << "Hello Transflower using Show() \n";
}

void display() {
    cout << "Hello Transflower using display() \n";
}
int main() {
    cout << "Hello from Main function\n";

    // Call show directly
    show();

    // Call show via function pointer
    ptrFn = show;
    ptrFn();

    // Call display directly
    display();

    // Call display via function pointer
    ptrFn = display;
    ptrFn();

    return 0;
}

