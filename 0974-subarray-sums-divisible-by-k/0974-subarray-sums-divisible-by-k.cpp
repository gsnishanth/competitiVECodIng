class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>freq;
        freq[0]=1;
        long long prefix=0;
        for(int i=0;i<n;i++)
        {
            prefix+=nums[i];
            int rem=prefix%k;
            if(rem<0)
            {
                rem+=k;
            }
            count+=freq[rem];
            freq[rem]++;
        }
        return count;
    }
};