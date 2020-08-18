#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
  srand((unsigned int)time(NULL));
  int n=0;
  int h=0;
  int t=0;
  char str[8];
  printf("Who are you?\n");
  scanf("%s",str);
  printf("Hello,%s!\n",str);
  printf("Tossing a coin...\n");
  for(int i=1;i<=3;i++){
    n=rand()%2;
    if(n==0){
      printf("Round %d: Heads\n",i);
      h++;
    }else if(n==1){
      printf("Round %d: Tails\n",i);
      t++;
    }
  }
  printf("Heads:%d,Tails:%d\n",h,t);
  if(t<h){
      printf("%s won!",str);
  }else{
      printf("%s lose!",str);
  }
  return 0;
}