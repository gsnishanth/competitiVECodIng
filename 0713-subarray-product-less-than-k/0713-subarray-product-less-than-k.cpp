class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            long long val=1;
            for(int j=i;j<n;j++)
            {
                val*=nums[j];
                if(val>=k)
                {
                    break;
                }
                cnt++;
            }
        }
        return cnt;
    }
};