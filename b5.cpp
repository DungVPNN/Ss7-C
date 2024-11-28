#include <stdio.h>

int main(){
	int arr[5];
	for(int i = 0; i<5 ; i++){
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	int min=arr[0];
	for(int i =1; i<5; i++){
		max = arr[i] > max? arr[i]:max;
		min = arr[i] < min?arr[i]:min;
	}
	printf("So lon nhat la: %d \n",max);
	printf("So nho nhat la: %d \n",min);

}
