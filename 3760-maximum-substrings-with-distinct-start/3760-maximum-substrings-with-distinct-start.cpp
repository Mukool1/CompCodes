class Solution {
public:
    int maxDistinct(string s) {
        unordered_set<char>help;
        int count=0;
        for(char c:s){
            help.insert(c);
        }
        return help.size();
    }
};