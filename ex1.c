#include <stdio.h>
float thuong(int num1,int num2);
main(){
	int num1,num2,ms;
	printf("nhap hai so nguyen can tinh : ");
	printf("\nso thu nhat : ");
	scanf("%d",&num1);
	printf("so thu hai : ");
	scanf("%d",&num2);
	printf(" \nchon phep tinh can tinh : \n1.phep tinh tong\n2.phep tinh tru\n3.phep tinh nhan\n4.phep tinh chia /n chon :  ");
	scanf("%d",&ms);
	switch(ms){
		case 1: tong(num1,num2);
		break;
		case 2: hieu(num1,num2);
		break;
		case 3: nhan(num1,num2);
		break;
		case 4: thuong(num1,num2);
		break;
	}
	
	
}
int tong(int num1,int num2){
	int tong;
	tong=num1+num2;
	printf("tong hai so la : %d+%d=%d",num1,num2,tong);
}
int hieu(int num1,int num2){
	int hieu;
	hieu=num1-num2;
	printf("hieu hai so la : %d-%d=%d",num1,num2,tong);
}
int nhan(int num1,int num2){
	int tich;
	tich=num1*num2;
	printf("tich hai so nguyen la : %d*%d=%d",num1,num2,tich);
	
}
float thuong(int num1,int num2){
	float thuong;
	thuong=num1/num2;
	printf("thuong cua hai so nguyen la : %d/%d=%f",num1,num2,thuong);
}


