class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int op=0;
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        for(int i=0;i<seats.size();i++){
            op+=abs(students[i]-seats[i]);
        }
        return op;
    }
};