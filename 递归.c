#include <stdio.h>
int dec(int n){
	if(n==0||n==1){
		return 1;
	}
	int num=n*dec(n-1);
	return num;
}

int main(int argc, char** argv) {
	int n;
	printf("请输入数字:\n");
	scanf("%d",&n);
	int num=dec(n);
	printf("%d",num);
	return 0;
}