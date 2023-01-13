class Solution {
public:
    int maximumDifference(vector<int>& a) {
        int minval = a[0];
        int mindiff = a[1] - a[0];
        for(int i=1;i<a.size();i++){
            mindiff = max(mindiff,a[i]-minval);
            minval = min(minval,a[i]);
        }
        if(mindiff<1) return -1;
        return mindiff;
    }
};