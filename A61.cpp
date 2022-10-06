#include <iostream>
using namespace std;

bool validate_input(int b, int e);
void print_primes(int b, int e);

int main() {
    int begin, end;

    do {
        cout << "Enter the range (space separated): ";
        cin >> begin >> end;
    } while (!validate_input(begin, end));

    print_primes(begin, end);
}

bool validate_input(int b, int e) {
    if (b > e || b < 2) {
        cout << "Invalid range\n";
        return false;
    } else {
        return true;
    }
}

void print_primes(int b, int e) {
    int i, j;
    cout << "Prime numbers: ";
    for (i=b; i<=e; i++) {
        for (j=2; j <= i/2; j++) {
            if (i%j == 0) {
                break;
            }
        }
        if (j>i/2) {
            cout << i << " ";
        }
    }
}