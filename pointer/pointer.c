#include<stdio.h>
int main() {   
  int i=10;  
  int *p=&i;    
  printf("value=%d\n",i);  
  printf("Address=%d\n",&i); 
  printf("Value =%d\n",*p); 
  printf("Adress =%d\n",p);  }
