#include<stdio.h>
int main(){
 int a=6, b=7;
 //index(&a, &b);
 printf("%d", index(&a, &b));
}
int index(int *a, int *b){
	int c = *a+*b;
	return c;
}
