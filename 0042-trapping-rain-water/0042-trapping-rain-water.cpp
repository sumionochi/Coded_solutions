class Solution {
public:
    int trap(vector<int>& a) {
        vector<int> l(a.size());
        int maxi=0;
        for(int i=0;i<a.size();i++){
            maxi=max(maxi,a[i]);
            l[i]=maxi;
        }
       
        vector<int> r(a.size());
        maxi=0;
        for(int i=a.size()-1;i>=0;i--){
            maxi=max(a[i],maxi);
            r[i]=maxi;
        }
        int tot=0;
        for(int i=0;i<a.size();i++){
            tot+=min(r[i],l[i])-a[i];
        }
        return tot;
    }
};