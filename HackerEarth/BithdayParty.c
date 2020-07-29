//https://www.hackerearth.com/practice/basic-programming/operators/basics-of-operators/practice-problems/algorithm/birthday-party-12/
#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	while(num --)
	{
	    int x , y ;
	    scanf("%d", &x);
	    scanf("%d", &y);
	    if(y%x == 0)
	    {
	        printf("Yes\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	}


}
