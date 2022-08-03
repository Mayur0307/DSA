class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int f=0,e=nums.size()-1;
        int mid=0;
        
        
        while (f<=e){
            mid=(f+e)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                f=mid+1;        
            }
            else {
                e=mid-1;
            }
        }
        for (int i=0;i<nums.size();i++){
            if(nums[i]>target){
                return i;
            }
        }
        return nums.size();
    }
};