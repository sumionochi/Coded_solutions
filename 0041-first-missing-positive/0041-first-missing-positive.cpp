class Solution {
public:
    int firstMissingPositive(vector<int>& a) {
        int exist=0, found=a.size()+1;
        for(int i=0;i<a.size();i++){
            if(a[i]==1) exist++;
            if(a[i]<1 || a[i]>a.size()) a[i]=1;
        }
        if(!exist) return 1; 

        for(int i=0;i<a.size();i++){
            if(a[abs(a[i])-1]<0) continue;
            a[abs(a[i])-1]*=-1; 
        }
        for(int i=0;i<a.size();i++){
            if(a[i]>0){found=i+1; break;}
        }
        return found;
    }
};