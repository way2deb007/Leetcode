bool isPalindrome(int x) {
        if(x>=0){
            int temp=x;
            long long c;
            while(x>0){
                int n=x%10;
                c=c*10+n;
                x=x/10;
            }
            if(temp==c){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            return false;
        }
    }
#Input: x = 121
#Output: true
#Explanation: 121 reads as 121 from left to right and from right to left.
