#include <stdio.h>
int main(){
	int num[10],i;
	for(i=1;i<=10;i++){
		printf("num[%d]=",i);
		scanf("%d",&num[i]);
	}
	printf("ket qua: ");
	for(i=10;i>0;i--){
		printf("%d,",num[i]);
	}
}
