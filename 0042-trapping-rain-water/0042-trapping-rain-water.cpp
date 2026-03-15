class Solution {
public:
    int trap(vector<int>& h) {
        vector<int>lmax(h.size());
        vector<int>rmax(h.size());
        lmax[0]=h[0];
        rmax[h.size()-1]=h[h.size()-1];
        for(int i=1;i<h.size();i++){
            lmax[i]=max(lmax[i-1],h[i]);
        }
        for(int i=h.size()-2;i>=0;i--){
            rmax[i]=max(rmax[i+1],h[i]);
        }
        int area=0;
        for(int i=0;i<h.size();i++){
            area+=min(lmax[i],rmax[i])-h[i];
        }
        return area;
    }
};