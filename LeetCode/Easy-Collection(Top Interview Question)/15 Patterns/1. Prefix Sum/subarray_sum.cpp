#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    vector<int> pref;
    unordered_map<int, int> mp;
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        pref.resize(n + 1, 0);
        mp[0] = 1;
        int count = 0, sum = 0;

        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + nums[i];
            int sum = pref[i + 1];
            if (mp.find(sum - k) != mp.end())
            {
                count += mp[sum - k];
            }
            mp[sum]++;
        }
        return count;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 1, 1}; // Example input
    int k = 2;
    cout << "Number of subarrays with sum " << k << ": " << solution.subarraySum(nums, k) << endl;
    return 0;
}
