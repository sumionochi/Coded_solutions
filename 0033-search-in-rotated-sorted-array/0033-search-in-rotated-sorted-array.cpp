class Solution {
public:
    int search(vector<int>& a, int t) {
        // no duplicate elements
        int l=0;
        int h=a.size()-1;

        while(l<=h){ 
            /*l<=h where = used for conditon when out of 2 elements h is the target and mid comes to h*/
            int m=(l+h)/2;
            if(a[m]==t) return m;
            if(a[m]<a[h]){ 
                /*only one time condition used to find subarray out of 2 sorted array rest of time always used other one*/ 
                if(a[m]<t && a[h]>=t) l=m+1;
                else h=m-1; 
            }
            else {
                /*only one time condition used*/ 
                if(a[m]>t && a[l]<=t) h=m-1;
                else l=m+1;
            }
        }
        return -1;
    }
};