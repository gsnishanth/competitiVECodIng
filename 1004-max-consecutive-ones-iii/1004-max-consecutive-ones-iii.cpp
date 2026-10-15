class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        int left=0,right=0;
        int maxLen=INT_MIN;
        while(right<n)
        {
            if(nums[right]==0)
            {
                count++;
                while(count>k)
                {
                    if(nums[left]==0)
                    {
                        count--;
                    }
                    left++;
                }
            }
            maxLen=max(maxLen,right-left+1);
            right++;
        }
        return maxLen==INT_MIN?0:maxLen;
    }
};