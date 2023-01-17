class Solution {
public:
    int findMin(vector<int>& a) {
         // 4 5 6 7 0 1 2
        int l=0;
        int h=a.size()-1;
        int min=INT_MIN;
        while(l<=h){
            int mid = (l+h)/2;
            if(l==h){min=a[mid];break;}
            if(a[mid]>a[h]){l=mid+1;continue;} 
            else if(a[mid]<a[h]){h=mid;continue;}
        }
        return min;
    }
};