class Solution {
public:
    int divide(int dividend, int divisor) {
        long start=0;
        long end=abs(dividend);
        long mid= start+(end-start)/2;
        long ans=0;
         if(dividend == INT_MIN && divisor == -1 ) 
       {
             return INT_MAX;
        }
        while(start<=end){
            if(abs(mid*divisor)==abs(dividend)){
                ans=mid;
            }
            if(abs(mid*divisor)>abs(dividend)){
                end=mid-1;
            }
            else{
                ans=mid;
                start=mid+1;
            }
            mid= start+(end-start)/2;
        }
        if(divisor<0 && dividend<0 || divisor>0 && dividend>0){
            return abs(ans);
        }
        else{
            return -abs(ans);
        }
    }
};
