#include<stdio.h>
#include<conio.h>
main()
{
	int size;
	printf("Enter size of array: \n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter %d numbers: \n",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	} // 3,6,9,5,5,6
	int arr1[size];
	int k=0;
	for(int i=0;i<size;i++){
		arr1[k]=arr[i];
		k++;
	}
	printf("After copied we will print another array: \n");
	for(int j=0;j<size;j++){
		printf("%d\n",arr1[j]);
	}
}
