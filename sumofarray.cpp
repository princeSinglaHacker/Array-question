#include<stdio.h>
#include<conio.h>
main()
{
	int size;
	printf("Enter size of array: \n");
	scanf("%d",&size);
	printf("Enter %d numbers: \n",size);
	int arr[size];
	int sum=0;
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Ans is: %d\n",sum);
}

