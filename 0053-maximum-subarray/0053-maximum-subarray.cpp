class Solution {
public:
    int maxSubArray(vector<int>& a) {
        //original kadane algo
        int localmax=0;
        int globalmax=INT_MIN;
        for(int i=0;i<a.size();i++){
            localmax = max(a[i],a[i]+localmax);
            globalmax = max(globalmax,localmax);
        }
        return globalmax;
    }
};