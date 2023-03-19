#include<stdio.h>
#include <stdlib.h>
	
void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ShakeSort(int a[], int n) {
    int left = 0, right = n - 1, k = left;
    while (left < right) {
        for (int j = right; j > left; j--) {
            if (a[j] < a[j - 1]) {
                Swap(&a[j], &a[j - 1]);
                k = j;
            }
        }
        left = k;
        for (int j = left; j < right; j++) {
            if (a[j] > a[j + 1]) {
                Swap(&a[j], &a[j + 1]);
                k = j;
            }
        }
        right = k;
    }
}

int BinarySearch(int a[],int n,int x)
{	int left, right, mid; left=0; right=n-1;
	do{ 
			mid=(left+right)/2;
			if(a[mid]==x) return 1;
			else 	if(a[mid]<x)  left=mid+1;		
				else  right=mid-1;
	}while(left<=right);
	return 0;
}

int main(){
int j;
do {
    printf("----Menu----");
    printf("\n1.Mang tu chon");
    printf("\n2.Mang random");
    printf("\n3.Exit");	
    printf("\nLua chon cua ban la: ");
    scanf("%d", &j);
    
    switch(j) {
        case 1:
            printf("\nBan lua chon Mang tu chon!!!");
            goto M1;
            break;
        case 2:
            printf("\nBan lua chon Mang random!!!");
           	goto M2;
            break;
        case 3:
            printf("\nExit!!!");
            return 0;
            break;
        default:
            printf("\nVui long chon lai\n");
    }
} while(j != 3);
	
	M1:
	int x;
	int a[100];
		printf("\nNhap vao so luong phan tu cua mang: ");
		scanf("%d", &x);
		printf("Nhap cac phan tu cua mang:\n");
			for(int i=0; i<x; i++){
    			printf("\nNhap so thu [%d]: ", i+1);
   				 scanf("%d", &a[i]);
		}
		printf("\nMang truoc khi sap xep la: ");
			for(int i=0; i<x; i++){
   		printf("%4d", a[i]);	
		}
		printf("\nMang sau khi sap xep la: ");
		ShakeSort(a, x);
		for(int i = 0; i<x; i++){
			printf("%4d", a[i]);
		}
	int k;
	printf("\nNhap vao so can tim: ");
	scanf("%d", &j);
	if(BinarySearch(a,x,k)){
		printf("\nCo trong mang");
		}
	else{
		printf("\nKo co trong mang");
		return 0;
	
	M2:
	int n=10;
    int arr[n];

    printf("\nMang truoc khi sap xep la: ");

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
        printf("%d ", arr[i]);
    }

    ShakeSort(arr,n);

    printf("\nMang sau khi sap xep la: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
	int c;
	printf("\nNhap vao so can tim: ");
	scanf("%d", &j);
	if(BinarySearch(a,n,c)){
		printf("\nCo trong mang");
		}
	else{
		printf("\nKo co trong mang");
		}
    return 0;
	
}
}
