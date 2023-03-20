#include<stdio.h>
#include<conio.h>
main()
{
	int size;
	printf("Enter size of array: \n");
	scanf("%d",&size);
	int arr[size];
	int arr1[size];
	int k=0;
	printf("Enter %d numbers: \n",size);
	for(int i=0;i<=size-1;i++){
		scanf("%d",&arr[i]);
		arr1[k]=arr[i];
		k++;
	}
	printf("After copied we will print another array: \n");
	for(int j=0;j<size;j++){
		printf("%d\n",arr1[j]);
	}
}
