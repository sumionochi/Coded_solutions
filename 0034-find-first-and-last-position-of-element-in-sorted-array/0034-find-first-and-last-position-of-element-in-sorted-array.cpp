class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        int f=INT_MIN,e=0;
        int l=0,h=a.size()-1;
        vector<int> ans;

        while(l<=h){
            int m=l+(h-l)/2;
            if(l==h){
                if(a[l]==t) f=m;
                break;
            }
            if(a[m]==t){
                f=m;
                h=m-1;
            }
            if(a[m]<t) l=m+1;
            if(a[m]>t)h=m-1;
        }
        if(f==INT_MIN){
            ans.emplace_back(-1);
            ans.emplace_back(-1);
            return ans;
        }
        ans.emplace_back(f);
        l=0,h=a.size()-1;
        while(l<=h){
            int m=l+(h-l)/2;
            if(l==h){
                if(a[l]==t) e=m;
                break;
            }
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