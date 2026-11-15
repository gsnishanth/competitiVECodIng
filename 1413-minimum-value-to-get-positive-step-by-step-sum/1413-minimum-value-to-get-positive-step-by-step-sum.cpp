class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n+1,0);
        int minSum=INT_MAX;
        for(int i=0;i<n;i++)
        {
            prefix[i+1]=prefix[i]+nums[i];
            minSum=min(minSum,prefix[i+1]);
        }
        return minSum>0?1:abs(minSum)+1;
    }
};