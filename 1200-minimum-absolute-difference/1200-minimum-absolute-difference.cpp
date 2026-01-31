class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>res;
        int minDif=INT_MAX;
        sort(arr.begin(),arr.end());
        for(int i=1;i<arr.size();i++){
            minDif=min(minDif,arr[i]-arr[i-1]);
        }
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]==minDif){
                res.push_back({arr[i-1],arr[i]});
            }
        }
        return res;
    }
};