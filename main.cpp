#include <iostream>
using namespace std;

int main() {
    char str[] = "I'm currently playing Ghost of Tsushima and I just can't be bothered to do homework right now.";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '\t';
        }
    }
    cout << str << endl;
    return 0;
}