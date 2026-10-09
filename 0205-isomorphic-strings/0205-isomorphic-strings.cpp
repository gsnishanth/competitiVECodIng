class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>f1;
        unordered_map<char,char>f2;
        int i=0;
        while(i<s.size())
        {
           char a=s[i];
           char b=t[i];
           if(f1.count(a)&&f1[a]!=b)
           {
                return false;
           }
           if(f2.count(b)&&f2[b]!=a)
           {
                return false;
           }
           f1[a]=b;
           f2[b]=a;
           i++;
        }
        return true;
    }
};