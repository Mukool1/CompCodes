class Solution {
public:
    string intToBinary(int n) {
        if (n == 0)
            return "0";
        string bin = "";
        while (n > 0) {
            bin += (n % 2 == 0 ? "0" : "1");
            n /= 2;
        }
        reverse(bin.begin(), bin.end());
        return bin;
    }
    string convertDateToBinary(string date) {
        int y = stoi(date.substr(0, 4));
        int m = stoi(date.substr(5, 2));
        int d = stoi(date.substr(8, 2));
        return intToBinary(y) + "-" + intToBinary(m) + "-" + intToBinary(d);
    }
};
