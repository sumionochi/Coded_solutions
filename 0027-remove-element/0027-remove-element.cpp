class Solution {
public:
    int removeElement(vector<int>& a, int v) {
        int c=0;
        for(int i=0,j=0;i<a.size();i++){
            if(a[i]!=v) {a[j]=a[i]; j++; c++;}
        }
        return c;
    }
};