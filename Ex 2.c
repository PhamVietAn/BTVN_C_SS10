#include <stdio.h>
int main(){
	int n, temp;
	int arr[10]={24,4,2,0,6,8,3,30,17,10};
	for(int i=0;i<10-1;i++){
		for(int j=0;j<10-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		} 
	} 
	printf("mang sau khi sap xep lai: ");
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
