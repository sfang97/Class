#include <iostream>
#include <cmath>
using namespace std;

int test_is_prime(int n) {
        if (n==1) {
                return 0;
        }
        if (n==2) {
                return 1;
        }
        for (int i = 2; i <= n/2; i++) {
                if (n%i == 0) {
                        return 0;
                }
        }
        return 1;
}
int print_primes() {
        int how_many;
        bool isprime;
        cout << "How many primes?: ";
        cin >> how_many;
        for (int i = 1; how_many > 0; i++) {
                isprime = test_is_prime(i);
                if (isprime) {
                        cout << i << endl;
                        how_many--;
                }
}       }

int main() {
        print_primes();
        return 0;
}

