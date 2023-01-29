class Solution {
public:
    void nextPermutation(vector<int>& a) {
        // 1 3 5 4 2
        //find a[i]>a[i+1]
        int toswap=INT_MIN,withswap=INT_MIN;
        for(int i=a.size()-1;i>0;i--){
            if(a[i]>a[i-1]){
                toswap=i-1;
                break;
            }
        }
        if(toswap==INT_MIN) return reverse(a.begin(),a.end());
        else{
            for(int i=a.size()-1;i>toswap;i--){
                if(a[i]>a[toswap]){
                    withswap=i;
                    break;
                }
            }
            swap(a[toswap],a[withswap]);
            return reverse(a.begin()+toswap+1,a.end()); 
        }
    }
};