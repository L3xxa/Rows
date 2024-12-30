#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

void _delete_symbols(char* str, char symbol) {
    char* temp = new char[100];
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != symbol) {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';
    strncpy(str, temp, 100);
    delete[] temp;
}

int main() {
    char* str = new char[100];
    strncpy(str, "Life is full of small wonders.", 100);
    cout << str << endl;
    char symbol;
    cout << "Enter symbol: ";
    cin >> symbol;
    _delete_symbols(str, symbol);
    cout << str;
    delete[] str;
    return 0;
}