 #include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";
    
    // 1. length(): Returns the length of the string
    cout << "Length of the string: " << str.length() << endl;

    // 2. substr(): Returns a substring of the string
    string substr = str.substr(7, 5); // "World"
    cout << "Substring: " << substr << endl;

    // 3. find(): Finds the position of the first occurrence of a substring
    size_t pos = str.find("World");
    if (pos != string::npos) {
        cout << "\"World\" found at position: " << pos << endl;
    } else {
        cout << "\"World\" not found" << endl;
    }

    // 4. replace(): Replaces a part of the string with another string
    str.replace(7, 5, "Everyone"); // "Hello, Everyone!"
    cout << "String after replace: " << str << endl;

    // 5. append(): Appends a string at the end
    str.append(" How are you?");
    cout << "String after append: " << str << endl;

    return 0;
}
