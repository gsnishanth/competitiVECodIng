class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>str1(26,0);
        vector<int>str2(26,0);
        int k=s1.size();
        for(int i=0;i<s1.size();i++)
        {
            str1[s1[i]-'a']++;
        }
        for(int i=0;i<s2.size();i++)
        {
            str2[s2[i]-'a']++;
            if(i>=k)
            {
                str2[s2[i-k]-'a']--;
            }
            if(i>=k-1&&str1==str2)
            {
                return true;
            }
        }
        return false;
    }
};