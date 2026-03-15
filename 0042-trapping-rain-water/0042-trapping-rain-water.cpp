class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size();
        int low=0;
        int high=n-1;
        int area=0;
        int lmax=0,rmax=0;
        while(low<high){
            lmax=max(lmax,h[low]);
            rmax=max(rmax,h[high]);
            if(lmax<rmax){
                area+=lmax-h[low];
                low++;
            }
            else{
                area+=rmax-h[high];
                high--;
            }
        }
        return area;
    }
};