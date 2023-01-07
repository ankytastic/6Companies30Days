// LeetCode - 1227. Airplane Seat Assignment Probability

class Solution {
public:
    double nthPersonGetsNthSeat(int n) {
        if(n==1){
            return 1.000;
        }
        else{
            return 0.500;
        }
    }
};
