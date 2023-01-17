class Solution {
public:
    int maxArea(vector<int>& a) {
        int i=0;
        int j=a.size()-1;
        int cur=1,max=0;
        while(i<j){
            cur=min(a[i],a[j])*(j-i);
            if(max<cur) max=cur;
            a[i]<a[j] ? ++i:--j;
        }
        return max;
    }
};