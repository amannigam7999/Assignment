#include <stdio.h>

int main()
{
    int m;
    scanf("%d",&m);

  if(m%3==0 && m%5==0){
    printf("good numbar");
  }else if (m%3==0 && m%5!=0){
     printf("bad numbar");  
  }else if (m%3!=0 && m%5==0){
     printf("poor numbar");  
  }else{
      printf("-1");
  }
  
    return 0;
}