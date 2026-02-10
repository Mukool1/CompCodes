class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>res;
        unordered_set<int>s;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(s.find(grid[i][j])!=s.end())res.push_back(grid[i][j]);
                s.insert(grid[i][j]);
            }
        }
        for(int i=1;i<=grid.size()*grid.size();i++){
            if(s.find(i)==s.end())res.push_back(i);
        }
        return res;
    }
};