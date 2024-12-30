#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {

    char str[] = "Ghost of Tsushima, a breathtaking open-world game with samurai, combat, and exploration";
    char* word = strtok(str, " ");
    int wordCount = 0;

    while (word != nullptr) {
        wordCount++;
        word = strtok(nullptr, " ");
    }

    cout << "Number of words in the Ghost of Tsushima description: " << wordCount << endl;

    return 0;
}
