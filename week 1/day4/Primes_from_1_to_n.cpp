#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void printPrimes(int N) {
    vector<int> primes;
    for (int i = 2; i <= N; i++) {
        if (isPrime(i))
            primes.push_back(i);
    }
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    printPrimes(N);
    return 0;
}
