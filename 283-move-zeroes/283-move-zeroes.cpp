class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for (int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                i--;
                count++;
            }
        }
        for(int i=0;i<count;i++){
            nums.emplace_back(0);
        }
    }
};