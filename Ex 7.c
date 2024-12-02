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
	for (int i=0; i<n; i++){
    	for (int j=0; j<m-1; j++){
       		for (int k=0; k<m-1-j; k++){
            	if (arr[i][k]>arr[i][k+1]){
                int temp=arr[i][k];
                arr[i][k]=arr[i][k+1];
                arr[i][k+1]=temp;
            	}
        	}
    	}
	}
	printf("\nmang sau khi sap xep tang dan theo tung dong:\n");
	for (int i=0; i<n; i++) {
    	for (int j=0; j<m; j++) {
    	    printf("%d ", arr[i][j]);
    	}
    printf("\n");
	}

return 0;
}
