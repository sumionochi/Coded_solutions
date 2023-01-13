//kadane algo
class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int sum=0,maxsum=INT_MIN;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
            if(sum>maxsum){
                maxsum=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxsum;
    }
};