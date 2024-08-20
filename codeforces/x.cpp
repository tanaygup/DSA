#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}


bool isPerfectSquare(long long n) {
    long long root = sqrt(n);
    return (root * root == n);
}


bool noFactorLessThanX(long long y, int x) {
    for (int i = 2; i < x; ++i) {
        if (y % i == 0) return false;
    }
    return true;
}

int main() {
    int x;
    cin >> x; 

    long long y = x; 
    while (true) {
        if (!isPrime(y) && !isPerfectSquare(y) && noFactorLessThanX(y, x)) {
            cout << y << endl;
            break;
        }
        y++;
    }

    return 0;
}