class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        if(nums.empty()) return {};
        while(i<(nums.size()-1))
        {
            if(!(nums[i]^nums[i+1]))
            {
                nums.erase( nums.begin() + i);
            }
            else
            {
                i++;   
            }
        }
        return nums.size();
    }
};
