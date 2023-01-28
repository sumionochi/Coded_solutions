class Solution {
public:
    int maxSubarraySumCircular(vector<int>& a) {
        int sumwhole=0;
        int sum1=0,max1=INT_MIN;
        for(int i=0;i<a.size();i++){
            sum1+=a[i];
            sumwhole+=a[i];

            max1=max(max1,sum1);
            sum1=max(sum1,0);
        }
        int sum2=0,max2=INT_MIN;
        for(int i=0;i<a.size();i++){
            sum2+=(-a[i]);

            max2=max(sum2,max2);
            sum2=max(sum2,0);
        }
        if(max1<0) return max1;
        return max(max1,sumwhole+max2);
    }
};