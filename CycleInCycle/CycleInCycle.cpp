#include <iostream>

using namespace std;

int main() {
    int n = 10; 


    cout << "1)" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i <= j) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "2)" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= j) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "3)" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i <= j && i + j <= n - 1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "4)" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= j && i + j >= n - 1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "5)" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i <= j && i + j <= n - 1) || (i >= j && i + j >= n - 1)) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "6)" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if ((i >= j && i + j <= n - 1) || (i <= j && i + j >= n - 1)) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "7)" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i >= j && i + j <= n - 1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "8)" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i <= j && i + j >= n - 1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "9)" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i + j <= n - 1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }
    cout << endl;


    cout << "10)" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i + j >= n - 1) cout << "* ";
            else cout << "  ";
        }
        cout << endl;
    }

    return 0;
}