#include <iostream>
#include <string>
using namespace std;

int countWords(string s) {
    int count = 1;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '_') // using underscore as space
            count++;
    return count;
}

int main() {
    string str;
    cout << "Enter a sentence (use _ instead of space): ";
    cin >> str;
    cout << "Number of words: " << countWords(str);
    return 0;
}
