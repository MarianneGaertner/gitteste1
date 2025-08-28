#include<stdio.h>

int main(){
	int ret;
	ret = soma(2,3);	
	ret = ret +soma(5,6);
	printf("O resultado é: %d", ret);
	return 0;
}
