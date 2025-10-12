class Solution {
public:
    bool isHappy(int n) {
        vector<int> wasIn;
        while (n != 1) {
            int temp = n;
            int sum = 0;
            while (temp > 0) {
                int digit = temp % 10;
                sum += digit * digit;
                temp /= 10;
            }
            n = sum;
            if (find(wasIn.begin(), wasIn.end(), n) != wasIn.end()) {
                return false; 
            }
            wasIn.push_back(n);
        }
        return true;
    }
};
