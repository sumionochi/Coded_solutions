class Solution {
public:
    int maxProduct(vector<int>& a) {
        int cur=1,maxi=INT_MIN;
        for(int i=0;i<a.size();i++){
            cur*=a[i];
            if(maxi<cur) maxi=cur;
            if(cur==0) cur=1;
        }
        int cur2=1;
        for(int i=a.size()-1;i>=0;i--){
            cur2*=a[i];
            if(maxi<cur2) maxi=cur2;
            if(cur2==0) cur2=1;
        }
        return maxi;
    }
};