//Problem link: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/727/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         if (nums.empty())
            return 0;

        int k = 0; // keep tracking unique elements and use it for prev elements i-1 and k are same
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[k])
            {
                k++;
                nums[k] = nums[i];
                
            }
        }
        return k + 1; // +1 is for O index!
    }
};