class Solution {
public:
    double findMaxAverage(vector<int>& a, int k) {
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
        double m=sum/k;

        for(int i=0,j=k;i<a.size(),j<a.size();i++,j++){
            sum+=a[j]-a[i];
            m=max(m,sum/k);
        }
        return m;
    }
};