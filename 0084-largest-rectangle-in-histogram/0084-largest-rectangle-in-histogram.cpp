class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>rs;
        stack<int>ls;
        vector<int>rightSmaller(heights.size(),-1);
        vector<int>leftSmaller(heights.size(),-1);
        for(int i=heights.size()-1;i>=0;i--){
            while(rs.size()>0&&heights[rs.top()]>=heights[i]){
                rs.pop();
            }
            if(rs.empty())rightSmaller[i]=heights.size();
            else rightSmaller[i]=rs.top();
            rs.push(i);
        }
        for(int i=0;i<heights.size();i++){
            while(ls.size()>0&&heights[ls.top()]>=heights[i]){
                ls.pop();
            }
            if(ls.empty())leftSmaller[i]=-1;
            else leftSmaller[i]=ls.top();
            ls.push(i);
        }
        int area=0;
        for(int i=0;i<heights.size();i++){
            int width=rightSmaller[i]-leftSmaller[i]-1;
            int currArea=heights[i]*width;
            area=max(area,currArea);
        }

        return area;
    }
};