class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);
        int prefixProd=1;
        for(int i=0;i<n;i++)
        {
            ans[i]=prefixProd;
            prefixProd*=nums[i];
        }
        int suffixProd=1;
        for(int j=n-1;j>=0;j--)
        {
            ans[j]*=suffixProd;
            suffixProd*=nums[j];
        }
        return ans;


    }
};