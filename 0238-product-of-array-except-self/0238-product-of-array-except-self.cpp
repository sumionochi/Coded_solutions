class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        vector<int> ans;
        int ansit=1;
        for(int i=0;i<a.size();i++){
            ansit*=a[i];
            ans.emplace_back(ansit);
        }
        int prod=1;
        for(int i=a.size()-1;i>=0;i--){
            if(i==a.size()-1){ans[i]=ans[i-1];prod*=a[i];continue;}
            if(i==0){ans[i]=prod;continue;}
            ans[i]=ans[i-1]*prod;
            prod*=a[i];
        }
        return ans;
    }
};