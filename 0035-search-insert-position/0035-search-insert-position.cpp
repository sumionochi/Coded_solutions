class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        int l=0;
        int h=a.size()-1;
        int mid=0;
        int c=0;
        while(l<=h){
            mid = (l+h)/2;
            if(a[mid]==t) return mid;
            if(a[mid]<t){ l=mid+1;}
            if(a[mid]>t){ h=mid-1;}
        }
        return l;
    }
};