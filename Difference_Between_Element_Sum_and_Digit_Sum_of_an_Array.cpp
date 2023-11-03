class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < nums.size(); i++){
            sum1 += nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            while(nums[i] > 0){
                int rem = nums[i] % 10;
                sum2 += rem;
                nums[i] /= 10;
            }
        }
        int diff = abs(sum1 - sum2);
        return diff;
    }
};
