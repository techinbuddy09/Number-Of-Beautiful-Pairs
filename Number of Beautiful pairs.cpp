//ON^(2)-COMPLEXITY
class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int len=nums.size();//from here we are getting the lebgth of the vector
        int count =0;//setting the counter of beautiful pairs to 0
        int first_digit;//first digit 
        for(int i=0;i<len;i++)//loop for iterating
        {     
            int n=nums[i];//here we are getting the current number in the  vectoe
            while(n>0)
            {
                 first_digit=n%10;//current num%10 to get first digit
                n=n/10;
            }
            for(int j=i+1;j<len;j++)//  according to problem if i=0 then j=1..means i+1
            {
                if(gcd(first_digit,nums[j]%10)==1)//checking the condintion as stated in problem
                    // TO GET THE LAST DIGIT IF TWO DIGITS LIKE 21 SO 21%10
                   count++;//if true condition increase the counter
            }
        }
        return count;// and return the counter
        
        
    }
};
//firstly  count set to 0
//according to first example
// then inthe outer loop  i=0 the index =2(elemnet present)
// now n=2 holds the current number after modulo operation
//now we move in the inner loop where j=5(since i+1)
// we do gcd(2,5)==1 so BF..COUNT++
// NOW IN INNER LOOP J=1..SO GCD(2,1)==1 YES BF AGAIN C++
// NOW IN INNER LOOP J=4 SO GCD(2,4)==2... NO BF ..COUNTER TERMINATES AND GOES BACK TO outer loop
//  now nums[1]..dso here n=5..after operations
// now again in inner loop j=1(i+1) 
// gcd(5,1)==1 so yaa BF SO C++6
// NOW  J=4 SO GCD(5,4)==1 SO YES BF
// NOW I=1 AND J=4 SO GCD(1,4)==1 SO YAA BF
 // SO IN TOTAL  BF=5(COUNT OF THEM)
