#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i =0 ; i<n; i++){
		do{
		scanf("%d",&arr[i]);	
	}while(arr[i]%2==0);
	}
}
