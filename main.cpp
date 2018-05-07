#include <iostream>
using namespace std;

void HelloFunc(const string name) {
    cout << "Hello, " << name << endl;
}

int main() {
    string name;
    cout << "Input your name: ";
    cin >> name;
    HelloFunc(name);
    return 0;
}