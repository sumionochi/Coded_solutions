class Solution {
public:
    int tribonacci(int n) {
        int t0=0, t1=1, t2=1;
        int sum=0;
        if(n==0) return 0;
        if(n==1||n==2) return 1;
        
        for(int i=0;i<=n-3;i++){
           sum=t0+t1+t2;
           t0=t1;
           t1=t2;
           t2=sum;
        }
        return sum;
    }
};