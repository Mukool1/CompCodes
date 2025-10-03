/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int low=1;
        int high=n;
        int num=0;
        while(low<=high){
            num=low+(high-low)/2;
            if(guess(num)==0){
                return num;
            }
            if(guess(num)==-1){
                high=num-1;
            }
            else{
                low=num+1;
            }
        }
        return -1;
    }
};