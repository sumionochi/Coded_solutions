class Solution {
public:
    int majorityElement(vector<int>& a) {
        int c=0,moj=a[0];
        for(int i=0;i<a.size();i++){
            if(moj==a[i]) c++;
            if(moj!=a[i])c--;
            if(c==0){
                moj=a[i];
                c=1;
            }
        }
        return moj;
    }
};