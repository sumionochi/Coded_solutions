class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        int f=INT_MIN,e=0;
        int l=0,h=a.size()-1;
        vector<int> ans;

        //find first position
        while(l<=h){
            int m=l+(h-l)/2;
            if(a[m]==t){
                f=m;
                h=m-1;
            }
            if(a[m]<t) l=m+1;
            if(a[m]>t)h=m-1;
        }
        
        //when target is not present
        if(f==INT_MIN){
            ans.emplace_back(-1);
            ans.emplace_back(-1);
            return ans;
        }
        ans.emplace_back(f);

        //find end position
        l=0,h=a.size()-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(a[m]==t){
                e=m;
                l=m+1;
            }
            if(a[m]<t) l=m+1;
            if (a[m]>t)h=m-1;
        }
        ans.emplace_back(e);
        return ans;    
    }
};