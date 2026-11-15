class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        vector<int>prefix(n+1,0);
        for(int i=0;i<n;i++)
        {
            prefix[i+1]=prefix[i]+arr[i];
        }
        long long ans=0;
        long long odd=0,even=1;
        for(int i=1;i<=n;i++)
        {
            if(prefix[i]%2==0)
            {
                even++;
                ans+=odd;
            }
            else
            {
                odd++;
                ans+=even;
            }
            ans%=1000000007;
        }
        return ans;
    }
};