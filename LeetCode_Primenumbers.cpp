#include <iostream>
#include<vector>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i*i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int countPrimes(int limit) {
    int count = 0;
    for (int i = 2; i < limit; ++i) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int num = 20;
    if (num <= 2) {
            return 0;
        }
        
        vector<bool> prime(num, true);

        for (int p = 2; p * p < num; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i < num; i += p) {
                    prime[i] = false;
                }
            }
        }

        int count = 0;
        for (int p = 2; p < num; p++) {
            if (prime[p]) {
                count++;
            }
        }

        cout<< count;
    return 0;
}
