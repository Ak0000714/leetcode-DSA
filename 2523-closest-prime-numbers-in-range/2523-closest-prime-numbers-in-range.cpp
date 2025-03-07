#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    vector<bool> sieve(int n) {
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= n; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        return isPrime;
    }

    vector<int> closestPrimes(int left, int right) {
        vector<bool> isPrime = sieve(right);
        
        vector<int> primes;
        for (int i = left; i <= right; ++i) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }
        if (primes.size() < 2) {
            return {-1, -1};
        }
        int minDiff = INT_MAX;
        pair<int, int> closestPair;
        for (int i = 0; i < primes.size() - 1; ++i) {
            int diff = primes[i + 1] - primes[i];
            if (diff < minDiff) {
                minDiff = diff;
                closestPair = {primes[i], primes[i + 1]};
            }
        }

        return {closestPair.first, closestPair.second};
    }
};
