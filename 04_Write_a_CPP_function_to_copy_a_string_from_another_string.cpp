#include <iostream>
#include <string>
using namespace std;

string copyString(string s) {
    string copy = s;
    return copy;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Copied string: " << copyString(str);
    return 0;
}
