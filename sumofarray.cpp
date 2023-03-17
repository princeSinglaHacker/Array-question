#include<stdio.h>
#include<conio.h>
main()
{
	int arr[10];
	printf("Enter ten numbers for sum: \n");
	int sum=0;
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Ans is: %d\n",sum);
}
