class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                res.push_back(res[res.size()-1]+res[res.size()-2]);
            }
            else if(operations[i]=="D"){
                res.push_back(2*res.back());
            }
            else if(operations[i]=="C"){
                res.pop_back();
            }
            else{
                res.push_back(stoi(operations[i]));
            }
        }
        return accumulate(res.begin(), res.end(), 0);
    }
};