class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.emplace(nums[i]);
        }
        if(nums.size()==st.size()){
            return false;
        }
        return true;
    }
};