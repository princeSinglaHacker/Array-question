#include<stdio.h>
#include<conio.h>
main()
{
	int arr[5]={63,41,87,96,52};
	int arr1[5];
	int k=0;
	for(int i=0;i<5;i++){
		arr1[k]=arr[i];
		k++;
	}
	printf("After copied we will print another array: \n");
	for(int j=0;j<5;j++){
		printf("%d\n",arr1[j]);
	}
}
