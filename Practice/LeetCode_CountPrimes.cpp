#include <iostream>

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
    int limit;
    std::cout << "Enter a limit: ";
    std::cin >> limit;
    int numPrimes = countPrimes(limit);
    std::cout << "Number of prime numbers up to " << limit << ": " << numPrimes << std::endl;
    return 0;
}
