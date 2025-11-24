#include<stdio.h>
int main(){
	int a[]={1,5,9,12,20};
	int n[6];
	int b=15;
	int p=5;
	int i;
	for(i=0;i<5;i++){
		if(b<a[i]){
			p=i;
			break;
		}
	}
	for(i=0;i<p;i++){
		n[i]=a[i];
	}
	n[p]=b;
	for(i=p;i<5;i++){
		n[i+1]=a[i];
	}
	for(i=0;i<6;i++){
		printf("%d ",n[i]);
	}
	return 0;
}