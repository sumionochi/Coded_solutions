class Solution {
public:
    vector<int> getAverages(vector<int>& a, int k) {
        vector<int> b(a.size(),-1);
        if(a.size()-1<2*k) return b;
        if(k==0) return a; // if(!k)

        long long sum=0,j=0,center=k;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
            if(i-j==2*k){
                b[center]=sum/(2*k+1);
                center++;
                sum-=a[j];
                j++;
            }
        }
        return b;
    }
};