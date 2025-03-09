//operators

#include<iostream>
using namespace std;
// 1. Arithematic Operator ( -, +, /, %, * )

int main(){

    cout << "Arithematic Operator" << endl;
    int a = 10, b = 3;
    int sum = a + b; // Addition
    int diff = a - b; // Subtraction
    int prod = a * b; // Multiplication
    int quot = a / b; // Division
    int rem = a % b; // Modulus

    cout << sum << endl;
    cout << diff << endl;
    cout << prod << endl;
    cout << quot << endl;
    cout << rem << endl;

    cout << endl;
    cout << endl;

    cout << "Assignment Operator" << endl;

    int x = 5;
    x += 3; // x = x + 3 (x becomes 8)
    cout << x << endl;

    x -= 2; // x = x - 2 (x becomes 6)
    cout << x << endl;

    x *= 2; // x = x * 2 (x becomes 12)
    cout << x << endl;

    cout << endl;
    cout << endl;

    cout << "Increment / Decrement Operator" << endl;

    int s = 5;
    s++; // a becomes 6 (post-increment)
    cout << s << endl;
    ++s; // a becomes 7 (pre-increment)
    cout << s << endl;

    s--; // a becomes 6 (post-decrement)
    cout << s << endl;

    --s; // a becomes 5 (pre-decrement)
    cout << s << endl;

    cout << endl;
    cout << endl;

    cout << "Bitwise Operator" << endl;

    int result1 = a & b; 
    int result2 = a | b; 
    int result3 = a ^ b; 
    int result4 = ~a; 
    int result5 = a << 1; 
    int result6 = a >> 1; 

    cout << result1 << endl;
    cout << result2 << endl;
    cout << result3 << endl;
    cout << result4 << endl;
    cout << result5 << endl;
    cout << result6 << endl;
    
    cout << endl;
    cout << endl;

    cout << "Logical Operator" << endl;

    bool q = true, w = false;
    bool result11 = (q && w); // false (AND)
    bool result22 = (q || w); // true (OR)
    bool result33 = !q; // false (NOT)

    cout << result11 << endl;
    cout << result22 << endl;
    cout << result33 << endl;

    cout << endl;
    cout << endl;

    cout << "Relational Operator" << endl;

    int x1 = 5, y1 = 10;
    bool isEqual = (x1 == y1); // false
    bool isGreater = (x1 > y1); // false
    bool isLessOrEqual = (x1 <= y1); // true

    cout << isEqual << endl;
    cout << isGreater << endl;
    cout << isLessOrEqual << endl;


    return 0;
}

// 2. Increment / Decrement operator ( ++, -- )
// 3. Relational operator ( ==, !=, >, <, >=, <= )
// 4. Logical operator ( &&, ||, ! )
// 5. Bitwise operator ( &, | , ^, ~, <<, >> )
// 6. Assignment operator ( =, +=, -=, *=, /=, %= )