class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int totalSteps=0;
        int currCap=capacity;
        for(int i=0;i<plants.size();i++){
            if(currCap<plants[i]){
                totalSteps+=2*i;
                currCap=capacity;
            }
            currCap-=plants[i];
            totalSteps++;
        }
        return totalSteps;
    }
};