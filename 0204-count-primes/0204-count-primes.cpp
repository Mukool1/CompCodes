class Solution {
public:
    int countPrimes(int n) {
        vector<int> isPrime(n + 1, 1);
        int ans = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i])
                ans++;
            for (int j = i * 2; j < n; j += i) {
                isPrime[j] = false;
            }
        }
        return ans;
    }
};