// Day 26 - Father's day
// Easy DSA  - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
    int ans1(vector<int>& nums, int target){
        int st=0;
        int end=nums.size()-1;
        int res=-1;
        

        while(st<=end){
            int mid=st+(end-st)/2;
            
            if(nums[mid]==target){
                res=mid;
                end=mid-1;
                
                

            }
            
            else if(nums[mid] < target){
                st = mid + 1;  // ✅ move right
            }
            else {
                end = mid - 1; // ✅ move left
            }

            

        }
        return res;
    }
    int ans2(vector<int>& nums, int target){
        int st=0;
        int end=nums.size()-1;
        int res=-1;

        while(st<=end){
            int mid=st+(end-st)/2;
            
            if(nums[mid]==target){
                res=mid;
                st=mid+1;
                
                

            }
            
            else if(nums[mid] < target){
                st = mid + 1;  // ✅ move right
            }
            else {
                end = mid - 1; // ✅ move left
            }
        }

        return res;
    }

    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int a=ans1(nums,target);
        int b=ans2(nums,target);
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
