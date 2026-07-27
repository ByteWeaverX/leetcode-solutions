class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd = 0 ;
        int sumeven = 0 ;
        for(int i = 0 ; i < n ; i++){
            sumodd = sumodd + (2*i-1);
            sumeven = sumeven + (2*i);
        }
        return gcd(sumodd, sumeven);
    }
};