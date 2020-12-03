#include<stdio.h>
#include<string.h>
#include"lianzhan.h"

int main(){
	LinkStack *s=InitStack();
	Push(s,80);
	Push(s,90);
	Pop(s);
	Push(s,70);
	printf("实验的数值为:%d",GetTop(s));
	printf("\n");
	linkstack();
}
