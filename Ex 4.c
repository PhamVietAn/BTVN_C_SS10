#include <stdio.h>
int main(){
	int n, temp;
	int arr[10]={24,4,2,0,6,8,3,30,17,10};
	for(int i=0;i<10-1;i++){
		int minIndex=i; 
		for(int j=i+1; j<10; j++){
			if(arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
		int temp=arr[minIndex];
		arr[minIndex]=arr[i];
		arr[i]=temp;
	} 
	printf("mang sau khi sap xep lai: ");
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
