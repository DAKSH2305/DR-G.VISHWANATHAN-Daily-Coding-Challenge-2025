// slution link : https://leetcode.com/problems/maximum-subarray/submissions/1644837285
// leetcode -  53. Maximum Subarray

// SOLVED BY KADANE's ALGORITHM 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
  
        int res=nums[0];
        int max_sum=nums[0];
        int i=1;
        while(i<nums.size()){
           
            
        
                max_sum=max_sum+nums[i];
                max_sum=max(max_sum,nums[i]);
                res=max(max_sum,res);
                i++;

            
         
           
        }
        return res;

    }
};
