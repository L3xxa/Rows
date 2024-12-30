#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

void paste_in_index(char* str, int* index, char* symbol) {
    if (*index < 0) {
        cout << "Index is too small, using minimum index (0)." << endl;
        *index = 0;
    }

    size_t len = strlen(str);
    if (*index > static_cast<int>(len)) {
        cout << "Index is too large, using maximum index (" << len << ")." << endl;
        *index = len;
    }
    char* temp = new char[len + 2];

    size_t j = 0;
    for (size_t i = 0; i <= len; ++i) {
        if (static_cast<int>(i) == *index) {
            temp[j++] = *symbol;
        }
        if (i < len) {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';

    strncpy(str, temp, len + 2);
    delete[] temp;
}

int main() {
    char* str = new char[100];
    strncpy(str, "Paste symbol in index", 100);
    cout << str << endl;
    int* index = new int;
    char* symbol = new char;

    cout << "Enter index: ";
    cin >> *index;
    cout << "Enter symbol: ";
    cin >> *symbol;

    paste_in_index(str, index, symbol);

    cout << str << endl;

    delete[] str;
    delete index;
    delete symbol;

    return 0;
}