class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
                count++;
            }
        }
       ;
        int maxLen=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            if(count-(s[i]-'0')==count)
            {
                count++;
                maxLen=max(maxLen,count);
            }
            else
            {
                count--;
                maxLen=max(maxLen,count);
            }
        }
        return maxLen;

    }
};