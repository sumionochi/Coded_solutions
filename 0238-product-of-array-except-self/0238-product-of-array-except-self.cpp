class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        vector<int> l;
        int save=1;
        for(int i=0;i<a.size();i++){
            save*=a[i];
            l.push_back(save);
        }

        vector<int> r;
        save=1;
        for(int i=a.size()-1;i>=0;i--){
            save*=a[i];
            r.push_back(save);
        }
        reverse(r.begin(),r.end());

        vector<int> ans;
        for(int i=0;i<a.size();i++){
            if(i==0) {ans.emplace_back(r[i+1]);continue;}
            if(i==a.size()-1) {ans.emplace_back(l[i-1]);continue;}
            ans.emplace_back(l[i-1]*r[i+1]);
        }
        return ans;
    }   
};