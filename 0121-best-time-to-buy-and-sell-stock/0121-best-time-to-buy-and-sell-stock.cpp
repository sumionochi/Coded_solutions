class Solution {
public:
    int maxProfit(vector<int>& a) {
        int max=0,min=0,cur=0;
        while(max<a.size()){
            if(max==min){
                max++;
                continue;
            }
            if(a[max]<a[min]){
                min=max;
                max++;
                continue;
            }
            if(a[max]-a[min]>cur){
                cur=a[max]-a[min];
            }
            max++;
        }
        return cur;
    }
};