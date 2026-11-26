class Solution {
public:
    int addDigits(int num) {
        if(num<10)
        {
            return num;
        }
        int n=num;
        while(n>=10)
        {
            int sum=n/10+n%10;
            n=sum;
        }
        return n;
    }
};