//Given an array of n integers where n > 1, nums, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

//Solve it without division and in O(n).

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       const int N = nums.size();
        vector<int> ret(N, 1);
        int left = 1, right = 1;
        for (int i = 0; i < N; ++i) {
            ret[i] *= left;
            ret[N-1-i] *= right;
            left *= nums[i];
            right *= nums[N-1-i];
        }
        return ret; 
    }
};