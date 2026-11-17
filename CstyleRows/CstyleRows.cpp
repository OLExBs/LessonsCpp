#include <iostream>
#include <cctype>


using namespace std;

int myStrLen(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void compareAandO(const char* str) {
    int countA = 0;
    int countO = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'а') countA++;
        if (c == 'o' || c == 'о') countO++;
    }

    cout << "Count of 'a' (" << countA << ") and 'o' (" << countO << "): ";
    if (countA > countO) {
        cout << "More 'a' letters.\n";
    }
    else if (countO > countA) {
        cout << "More 'o' letters.\n";
    }
    else {
        cout << "Equal.\n";
    }
}

void countChars(const char* str) {
    int letters = 0, digits = 0, spaces = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letters++;
        }
        else if (isdigit(str[i])) {
            digits++;
        }
        else if (isspace(str[i])) {
            spaces++;
        }
    }

    cout << "Letters: " << letters << ", Digits: " << digits << ", Spaces: " << spaces << "\n";
}

void toggleCase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

void englishStats(const char* str) {
    int spaces = 0, vowels = 0, consonants = 0, punctuation = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (isspace(c)) {
            spaces++;
        }
        else if (ispunct(c)) {
            punctuation++;
        }
        else if (isalpha(c)) {
            char lower = tolower(c);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    cout << "Whitespaces: " << spaces << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Punctuation: " << punctuation << endl;
}

int main() {
    srand(time(0));

    cout << "1.\n";
    char text1[] = "Abrakadabra mirrors";
    cout << "String: \"" << text1 << "\"\n";
    compareAandO(text1);
    cout << endl;

    cout << "2.\n";
    char text2[100] = "Hello C++ Students 2026!";
    cout << "String: \"" << text2 << "\"\n";
    countChars(text2);
    cout << endl;

    cout << "3.\n";
    char text3[100] = "Hello World 123";
    cout << "Before: \"" << text3 << "\"\n";
    toggleCase(text3);
    cout << "After:  \"" << text3 << "\"\n";
    cout << endl;

    cout << "4.\n";
    char text4[] = "Test string";
    cout << "String: \"" << text4 << "\"\n";
    cout << "Length: " << myStrLen(text4) << endl;
    cout << endl;

    cout << "5.\n";
    char text5[] = "Programming is awesome, isn't it? Let's code!";
    cout << "String: \"" << text5 << "\"\n";
    englishStats(text5);

    return 0;
}