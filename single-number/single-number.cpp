class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int i,x=0;
        for(i=0;i<nums.size();i++)
        {
             x^=nums[i];
        }
        return x;
        
    }
};