class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int t) {
        int sum=0;
        int c=0;
        for(int i=0;i<k;i++){
            sum+=a[i];
        }
        if((sum/k)>=t) c++;
      
        for(int i=0,j=k;i<a.size(),j<a.size();i++,j++){
            sum+=a[j]-a[i];
            if((sum/k)>=t) c++;
        }
        return c;
    }
};