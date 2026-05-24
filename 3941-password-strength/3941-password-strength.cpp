class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<char,int>help;
        int score=0;
        for(char c:password){
            if(!help.count(c)){
                int sc=static_cast<int>(c);
                if(sc>=48 && sc<=57)score+=3;
                else if(sc>=65 && sc<=90)score+=2;
                else if(sc>=97 && sc<=122)score+=1;
                else score+=5;
            }
            help[c]++;
        }
        return score;
    }
};