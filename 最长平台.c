#include<stdio.h>
int main(){
	int n;
	int i=0;
	int longest=1;
	int c=1;
	
	printf("请输入数组长度:");
	
	scanf("%d",&n);
	int a[n];
	printf("请输入数组:");
	for(i;i<n;i++){
		
	scanf("%d",&a[i]);
    }
    i=0;
	for(i;i<n-1;i++){
		if(a[i]==a[i+1]){
			c++;
			if(c>longest){
				longest=c;
			}
		    else{
			c=1;
		    }
	    }
	}
	printf("最长平台的长度为:%d",longest);
	return 0;
}