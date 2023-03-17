#include<stdio.h>
#include<conio.h>
main()
{
	int size;
	printf("Enter size of array: \n");
	scanf("%d",&size);
	printf("Enter %d numbers: \n",size);
	int arr[size];
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	} // 5,6,9
	printf("After swaping: \n");
	for(int j=size-1;j>=0;j--){
		printf("%d\n",arr[j]);
	}
}
