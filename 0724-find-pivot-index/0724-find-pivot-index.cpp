class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int n=nums.size();
       int rightsum=0;
       for(int i=0;i<n;i++)
       {
        rightsum+=nums[i];
       }
       int leftsum=0;
       for(int i=0;i<n;i++)
       {
          leftsum+=nums[i];

          if(leftsum==rightsum)
          {
            return i;
          }
          rightsum-=nums[i];
       }
       return -1;
    }
};