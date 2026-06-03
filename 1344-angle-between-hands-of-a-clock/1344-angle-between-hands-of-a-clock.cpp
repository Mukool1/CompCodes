class Solution {
public:
    double angleClock(int hour, int minutes) {
        double val=abs(30*hour-5.5*minutes);
        double restVal=360-abs(30*hour-5.5*minutes);
        return val>restVal?restVal:val;
    }
};