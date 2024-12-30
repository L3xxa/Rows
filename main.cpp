#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Функція для перевірки на паліндром
bool ispalindrom(char str[]) {
    int len = strlen(str);


    int i = 0, j = len - 1;
    while (i < j) {

        if (!isalpha(str[i])) {
            i++;
        } else if (!isalpha(str[j])) {
            j--;
        } else {

            if (tolower(str[i]) != tolower(str[j])) {
                return false;
            }
            i++;
            j--;
        }
    }
    return true;
}

int main() {
    char str[] = "A man, a plan, a canal, Panama";

    if (ispalindrom(str)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not palindrome" << endl;
    }

    return 0;
}
