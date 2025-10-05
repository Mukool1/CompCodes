class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int box=(int)coordinates.at(1);
        char ch=coordinates.at(0);
        int in;
        if(ch=='a' || ch=='c' || ch=='e' || ch=='g'){
            if(box%2==0){
                return true ;
            }
            else{

            return false;
            }
        }
        else{
            if(box%2==0){
                return false ;
            }
            else{

            return true;
            }
    }
}
};