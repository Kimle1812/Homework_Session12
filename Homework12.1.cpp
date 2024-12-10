#include<stdio.h>

int calculateSum(){
	int one, two;
	printf("Moi ban nhap so thu nhat: ");
	scanf("%d", &one);
	printf("Moi ban nhap so thu hai: ");
	scanf("%d", &two);
	int sum = one + two;
	return sum;
}
int main(){
	int sum = calculateSum();
	printf("Tong cua hai so la: %d\n", sum);
	return 0;
}
