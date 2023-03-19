#include <stdio.h>

int main()
{
    int num,i,flag=0;
    scanf("%d",&num);
    printf("Hello World\n");
    
    for(i=2;i<num/2;i++)
    {
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
       printf("%d this is prime",num); 
       
    else
    printf("%d this is not prime",num); 
    
    return 0;
}


