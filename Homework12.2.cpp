#include<stdio.h>
void printArr(int arr[], int length){
	for(int i = 0; i < length; i++){
		printf("Arr[%d]: %d\n", i + 1, arr[i]);
	}
}
int main(){
	int arr[50], length;
	printf("Moi ban nhap so luong phan tu trong mang: ");
	scanf("%d", &length);
	for(int i = 0; i < length; i++){
		printf("Nhap arr[%d]: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printArr(arr, length);
	return 0;
}

