#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    strncpy(str, "New text to replace the old one.", 100);    cout << str << endl;

    char temp[100];
    int j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '.') {
            temp[j] = '!';
            j++;
        }
        else {
            temp[j] = str[i];
            j++;
        }
    }
    temp[j] = '\0';
    strncpy(str, temp, 100);
    cout << str << endl;

    return 0;
}