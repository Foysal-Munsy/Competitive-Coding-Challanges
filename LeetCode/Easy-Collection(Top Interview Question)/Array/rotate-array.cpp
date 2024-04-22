//
// Created by Foysal Munsy on 21 / 04 / 2024
// Time: 21 : 03 : 16
//
// problem link: https://leetcode.com/explore/interview/card/top-interview-questions-easy/92/array/646/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k %= n;
        reverse(nums, 0, n - 1); // reverse whole array
        reverse(nums, 0, k - 1); // reverse the first k elements
        reverse(nums, k, n - 1); // reverse the rest of the array
    }
    void reverse(vector<int> &nums, int start, int end)
    {
        while (start < end)
        {
            /*
            //this is a way!!
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            */
            // or we can use swap std!!
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};
