class Solution {
public:
    int numTeams(vector<int>& rating) {
        int count = 0;
        for (int j = 0; j < rating.size(); j++) {
            int leftSmaller = 0, leftGreater = 0;
            int rightSmaller = 0, rightGreater = 0;

            for (int i = 0; i < j; i++) {
                if (rating[i] < rating[j])
                    leftSmaller++;
                else if (rating[i] > rating[j])
                    leftGreater++;
            }

            for (int k = j + 1; k < rating.size(); k++) {
                if (rating[k] > rating[j])
                    rightGreater++;
                else if (rating[k] < rating[j])
                    rightSmaller++;
            }

            count += leftSmaller * rightGreater + leftGreater * rightSmaller;
        }
        return count;
    }
};