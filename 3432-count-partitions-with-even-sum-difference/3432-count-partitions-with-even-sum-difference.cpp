class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n,0);
        int count=0;
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        int max=prefix[n-1];
        for(int i=0;i<n-1;i++)
        {
            int rightSum=max-prefix[i];
            int leftSum=prefix[i];
            if(abs(rightSum-leftSum)%2==0)
            {
                count++;
            }
        }
        return count;

    }
};