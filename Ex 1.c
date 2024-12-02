#include <stdio.h>
int main(){
	int n, found=0;
	int arr[10]={24,4,2,0,6,8,3,30,17,10};
	printf("nhap phan tu tim kiem: ");
	scanf("%d",&n);
	
	for(int i=0; i<10; i++){
		if(arr[i]==n){
			printf("phan tu %d ton tai o vi tri thu %d trong mang\n",n,i+1);
			found=1;
			break;
		}
	}
	if(found=0){
		printf("khong ton tai phan tu %d trong mang",n);
	}
} 
