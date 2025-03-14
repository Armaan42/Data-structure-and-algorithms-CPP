#include <iostream>
using namespace std;

void findDigits(int *numPtr) {
    int num = *numPtr;  // Dereference pointer to get value

    int lastDigit = num % 10;  // Extract last digit

    int firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;  // Keep dividing to get the first digit
    }

    cout << "First Digit: " << firstDigit << endl;
    cout << "Last Digit: " << lastDigit << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    findDigits(&num);  // Pass the address of num

    return 0;
}
