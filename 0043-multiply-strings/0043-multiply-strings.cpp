class Solution {
public:
    string multiply(string num1, string num2) {
        vector<int> res(num1.size()+num2.size(),0);
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        for(int i=0;i<num1.size();i++){
            int num1_digit=num1[i]-'0';
            for(int j=0;j<num2.size();j++){
                int num2_digit=num2[j]-'0';
                res[i+j]+=num1_digit*num2_digit;
            }
        }
        for(int i=0;i<res.size();i++){
            if(res[i]>=10){
                res[i+1]+=res[i]/10;
                res[i]%=10;
            }
        }
        while(res.size()>1 && res.back()==0){
            res.pop_back();
        }
        string result;
        for(int i=res.size()-1;i>=0;i--){
            result+=(res[i]+'0');
        }
        return result;
    }
};