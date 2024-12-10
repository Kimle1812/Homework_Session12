#include<stdio.h>
int factorial(int n){
	if(n == 0){
		return 1;
	}else{
		return n * factorial(n - 1);
	}
}
int main(){
	int result, number;
	printf("Nhap so nguyen bat ki: ");
	scanf("%d", &number);
	result = factorial(number);
	printf("Giai thua cua %d la %d", number, result);
	return 0;
}
