#include <stdio.h>
int main(){
	int m, n;
	int arr[100][100];
	printf("Nhap kich co cua mang (m x n): ");
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Nhap phan tu arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
	for(int i=0; i<m; i++){
    	for(int j=0; j<n-1; j++){
       		for(int k=0; k<m-1-j; k++){
            	if(arr[k][i]>arr[k+1][i]){
                int temp=arr[k][i];
                arr[k][i]=arr[k+1][i];
                arr[k+1][i]=temp;
            	}
        	}
    	}
	}
	printf("\nmang sau khi sap xep tang dan theo tung dong:\n");
	for(int i=0; i<n; i++) {
    	for(int j=0; j<m; j++) {
    	    printf("%d ", arr[i][j]);
    	}
    printf("\n");
	}

return 0;
}
