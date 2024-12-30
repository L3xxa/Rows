#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);
    char symbol_tofind;
    cout << "Enter a symbol to find: ";
    cin >> symbol_tofind;
    cout << str << endl;
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == symbol_tofind) {
            count++;
        }
    }
    cout << symbol_tofind << " is found " << count << " times" << endl;
    return 0;
}