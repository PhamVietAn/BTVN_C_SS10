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
	for(int i=0; i<n-1; i++){
    	for(int j=i+1; j<n; j++){
       		if(arr[i][i]>arr[j][j]){
       			int temp=arr[i][i];
       			arr[i][i]=arr[j][j];
       			arr[j][j]=temp;
			}
    	}
	}
	printf("\nmang sau khi sap xep tang dan theo duong cheo chinh:\n");
	for(int i=0; i<n; i++) {
    	for(int j=0; j<m; j++) {
    	    printf("%d ", arr[i][j]);
    	}
    printf("\n");
	}

return 0;
}
