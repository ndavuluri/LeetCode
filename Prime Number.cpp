#include <math.h>
class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        bool A[n+1];
        A[0] = false;
        A[1] = false;
        for(int i=2;i++;i<=n){
            A[i] = true;
        }
        for(int i=2;;i<sqrt(n)){
            if(A[i] == false)
            i++;
            else{
                for(int j=i*i;j=j+i;j<n){
                    A[j] = false;
                
                }
                i++;
            }
        }
        for(int i=2;i++;i<=n+1){
            if(A[i])
            count++;
        }
        return count;
    }
};