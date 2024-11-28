#include <stdio.h>

int main() {
    int arr[5]={};
    int flag =0;
    for(int i=0; i<5 ; i++){
    	scanf("%d",&arr[i]);
	};
	for (int i=0; i<5; i++){
		if(arr[i] % 2 == 0){
			printf("%d " , arr[i]);
			flag=1;
		}	
	};
		if(!flag){
		printf("khong co so chan");
	}
    return 0;
} 
