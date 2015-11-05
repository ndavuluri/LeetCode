class Solution {
public:
    bool isHappy(int n) {
       
       int temp2=n,temp=0,sum=0;
       
       while (temp2 > 0){
      if (temp2 == 1)
       return true;
      else{
          n= temp2;
           while(n){
           temp = n%10;
           sum += temp * temp;
           n = n / 10;
       }
       if(sum == temp2)
       temp2 = 0;
       else
       temp2 = sum;   
      }
    }
    
    return false;
    }
};