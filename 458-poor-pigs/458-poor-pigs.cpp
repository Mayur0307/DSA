class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int t=minutesToTest/minutesToDie;
        int x=0;
        int mul=1;
        for(;mul<buckets;x++){
            mul*=(t+1);
        }
        return x;
    }
};