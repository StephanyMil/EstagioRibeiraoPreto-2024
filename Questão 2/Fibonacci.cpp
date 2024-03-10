#include <iostream>

using namespace std;

bool isInFibonacci(int numero) {
    int a = 0, b = 1;
    while (b <= numero) {
        if (b == numero) {
            return true;
        }
        int temp = b;
        b = a + b;
        a = temp;
    }
    return false;
}

int main() {
    const int numeroInformado = 23;
    if (isInFibonacci(numeroInformado)) {
        cout << numeroInformado << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << numeroInformado << " não pertence à sequência de Fibonacci." << endl;
    }
    return 0;
}