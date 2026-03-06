class Solution {
public:
    bool isFascinating(int n) {
        int doub=n*2;
        int trip=n*3;
        string res="";
        res.append(to_string(n));
        res.append(to_string(trip));
        res.append(to_string(doub));
        if(res.size()!=9)return false;
        vector<int> freq(10,0);
        for(int i=0;i<res.size();i++){
            freq[res[i]-'0']++;
        }
        for(int i=1;i<freq.size();i++){
            if(freq[i]!=1)return false;
        }
        return true;
    }
};