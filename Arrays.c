#include <stdio.h>
int main(){
  int number[5];
  int inputnum=0;
  int found = 0;
  for(int i=0; i<5;i++){
    printf("Enter number %d: ",i+1);
    scanf("%d",&number[i]);
  }
  printf("What is your number you want to find?: ");
  scanf("%d",&inputnum);
  for(int i=0;i<5;i++){
    if (number[i] == inputnum){
      printf("Number found at index %d\n", i);
      found = 1;
      break;
    }
  }
  if (found==0){
    printf("Number not found\n");
  }
  return 0;
}
