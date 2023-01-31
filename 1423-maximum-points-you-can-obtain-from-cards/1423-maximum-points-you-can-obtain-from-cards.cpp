class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int window=a.size()-k;
        int sum=0,sumfull=0,maxsum=INT_MIN;
        for(int i=0;i<window;i++) sum+=a[i];
        for(int i=0;i<a.size();i++) sumfull+=a[i];
        for(int i=window,j=0;i<a.size();i++,j++){
            maxsum=max(sumfull-sum,maxsum);
            sum+=a[i]-a[j];
        }
        maxsum=max(sumfull-sum,maxsum);
        return maxsum;

    }
};