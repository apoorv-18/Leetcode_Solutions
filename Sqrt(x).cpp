class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return x;
        }
        int s = 0;
        int e = x;
        long long mid;
        int ans;
        while(s<=e){
            mid = s+(e-s)/2;
            if(mid * mid <= x){
               ans = mid;
               s = mid+1;
            }
            else if( mid*mid  > x){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        return ans;
    }
};
