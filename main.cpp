#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    for (int i = 2; i <= 100; i++) {
        if (i % 2 == 0) {
            cout << i << " é par" << endl;
        } else if (isPrime(i)) {
            int square = i * i;
            cout << i << " é primo e seu quadrado é " << square << endl;
        }
    }

    return 0;
}
