#include <iostream>
#include <string>

using namespace std;

string inverterString(const string& s) {
    string inverted;
    for (int i = s.length() - 1; i >= 0; i--) {
        inverted += s[i];
    }
    return inverted;
}

int main() {
    const string stringOriginal = "Hello, World!";
    const string stringInvertida = inverterString(stringOriginal);
    cout << "String original: " << stringOriginal << endl;
    cout << "String invertida: " << stringInvertida << endl;
    return 0;
}