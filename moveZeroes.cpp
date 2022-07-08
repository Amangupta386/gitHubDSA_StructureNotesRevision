//1st approach
//BruteForceApproach
//2nd approach
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count =0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] !=0)
              swap(  nums[count++] , nums[i]);
        } 
    }
};
