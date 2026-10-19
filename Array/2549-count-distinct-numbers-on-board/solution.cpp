class Solution {
public:
    int distinctIntegers(int n) {
       int count =0;

        if(n==1) return 1;
        
       for(int i=n; i>1; i--){
        count++;
       }
       return count;
    }
};
