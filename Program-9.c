/*Program to check whether the entered number is odd using function
	input:5
	output:
	*/
	#include<stdio.h>
	 //if the least significant bit is 1 the number is odd and 0 the number is even 
	int checkOdd(int n1)
	{   if(n1%2==0){
    return 0;
  }
  else{
    return 1;
  }
	    return (n1 & 1);//The & operator does a bitwise and,
	}
	int main()
	{
	    int n1;
		printf("Input any number:");
	    scanf("%d",&n1);
	    // If checkOddEven() function returns 1 then the number is odd 
	    if(checkOdd(n1)==1)
	    {
        printf("The entered number is odd");
	    }
	    return 0;
	}
