//Antarleen Chand
//24070123018

#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cout << "Enter any integer: ";
    cin >> a;
    cout << "Integer = " << a << " | Size = " << sizeof(a) << " bytes" << endl;

    float b;
    cout << "Enter a decimal (float): ";
    cin >> b;
    cout << "Float = " << b << " | Size = " << sizeof(b) << " bytes" << endl;

    string c;
    cout << "Enter a word (string): ";
    cin >> c;
    cout << "String = " << c << " | Size (object) = " << sizeof(c) << " bytes" << endl;

    double d;
    cout << "Enter a double value: ";
    cin >> d;
    cout << "Double = " << d << " | Size = " << sizeof(d) << " bytes" << endl;

    char e;
    cout << "Enter a character: ";
    cin >> e;
    cout << "Char = " << e << " | Size = " << sizeof(e) << " byte" << endl;

    bool f;
    cout << "Enter a boolean (0 or 1): ";
    cin >> f;
    cout << "Boolean = " << boolalpha << f << " | Size = " << sizeof(f) << " byte" << endl;

    return 0;
}

/*
OUTPUT
Enter any integer: 456
Integer = 456 | Size = 4 bytes
Enter a decimal (float): 247.30
Float = 247.3 | Size = 4 bytes
Enter a word (string): Decembere
String = Decembere | Size (object) = 32 bytes
Enter a double value: 88.888
Double = 88.888 | Size = 8 bytes
Enter a character: D
Char = D | Size = 1 byte
Enter a boolean (0 or 1): 0
Boolean = false | Size = 1 byte
*/
