class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
       int n=nums.size();
       map<int,int>freq;
        int left=0,right=0;
        int maxlen=INT_MIN;
        while(right<n)
        {
            freq[nums[right]]++;
            while(freq[nums[right]]>k)
            {
                freq[nums[left]]--;
                if(freq[nums[left]]==0)
                {
                    freq.erase(nums[left]);
                }
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
        }
        return maxlen;
    }
};