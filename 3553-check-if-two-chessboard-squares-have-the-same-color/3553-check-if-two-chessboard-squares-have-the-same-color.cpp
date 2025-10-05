class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int box1=(int)coordinate1.at(1)-'0';
        char ch1=coordinate1.at(0);
      int box2=(int)coordinate2.at(1)-'0';
        char ch2=coordinate2.at(0);
        bool c1,c2;
        if (ch1 == 'a' || ch1 == 'c' || ch1 == 'e' || ch1 == 'g') {
            if (box1 % 2 == 0) {
                c1 = true;
            } else {
                c1 = false;
            }
        } else {
            if (box1 % 2 == 0) {
                c1 = false;
            } else {
                c1 = true;
            }
        }
        if (ch2 == 'a' || ch2 == 'c' || ch2 == 'e' || ch2 == 'g') {
            if (box2 % 2 == 0) {
                c2 = true;
            } else {
                c2 = false;
            }
        } else {
            if (box2 % 2 == 0) {
                c2 = false;
            } else {
                c2 = true;
            }
        }

        return !(c1^c2);
    }
};