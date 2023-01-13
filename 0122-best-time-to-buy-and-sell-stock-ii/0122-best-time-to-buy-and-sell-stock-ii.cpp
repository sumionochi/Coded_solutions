class Solution {
public:
    int maxProfit(vector<int>& p) {
        int cur=-1;
        int max=0;
        for(int i=0;i<p.size();i++){
            if(i==p.size()-1){
               if(cur>-1) max+=p[i]-cur;
                continue;
            }
            if(p[i]<p[i+1]){
                if(cur==-1){cur=p[i];continue;}
            }
            if(p[i]>p[i+1] && cur>-1){
                max+=p[i]-cur;
                cur=-1;
            }
        }
        return max;
    }
};