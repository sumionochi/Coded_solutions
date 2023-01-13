class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
        int max=0,high=0;
        for(int i=0;i<a.size();i++){
            if(a[i]==1) max++;
            if(a[i]==0){
                if(high<max) high=max;
                max=0;
            }
        }
        if(high<max) high=max;
        return high;
    }
};