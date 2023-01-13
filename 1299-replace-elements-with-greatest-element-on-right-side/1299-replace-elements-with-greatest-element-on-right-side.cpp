class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        int max=INT_MIN; int max2;
        for(int i=a.size()-1;i>=0;i--){
            if(i==a.size()-1) {max=a[i];a[i]=-1;continue;}
            max2=a[i];
            a[i]=max;
            if(a[i]<max2) max = max2; 
        }
        return a;
    }
};