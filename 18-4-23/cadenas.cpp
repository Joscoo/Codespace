#include <iostream>
#include <cstring>

using namespace std;

bool is_palindrome(char arr[], int start, int end) {
    if (start >= end) {
        return true;
    }
    if (arr[start] != arr[end]) {
        return false;
    }
    return is_palindrome(arr, start+1, end-1);
}

int main() {
    const int MAX_SIZE = 100;
    char arr[MAX_SIZE];
    cout << "Ingresa los caracteres del arreglo: ";
    cin.getline(arr, MAX_SIZE);
    int start = 0;
    int end = strlen(arr) - 1;
    if (is_palindrome(arr, start, end)) {
        cout << "El arreglo es un palindromo" << endl;
    } else {
        cout << "El arreglo no es un palindromo" << endl;
    }
    return 0;
}