class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int oddCnt=0;
        int ans=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        for(auto num:nums)
        {
            if(num%2==1)
            {
                oddCnt++;
            }
            ans+=mpp[oddCnt-k];
            mpp[oddCnt]++;
        }
        return ans;
    }
};