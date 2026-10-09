class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int n=s.size();
       map<char,int>freq;
       int left=0,right=0;
       int maxlen=INT_MIN;
       if(n==0)
       {
            return 0;
       }
       while(right<n)
       {
            freq[s[right]]++;
            while(freq[s[right]]>1)
            {
                freq[s[left]]--;
                if(freq[s[left]]==0)
                {
                    freq.erase(s[left]);
                }
                left++;
            }
            maxlen=max(maxlen,right-left+1);
            right++;
       }
       return maxlen;
    }
};
