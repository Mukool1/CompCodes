class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int lastMax=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int currMax=arr[i];
            arr[i]=lastMax;
            lastMax=max(lastMax,currMax);
        }
        return arr;
    }
};