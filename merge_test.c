#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void plus_1(int *pa);
void plus_2(int *pa);

int main(){
  int a = 0;
  int *pa = &a;
  plus_2(pa);
  printf("a:%d\n",a);
}

void plus_1(int *pa){
  ;
}

void plus_2(int *pa){
  *pa += 2;
}