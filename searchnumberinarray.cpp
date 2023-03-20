#include<stdio.h>
#include<conio.h>
main()
{
	int size;
	printf("Enter the size of array: \n",&size);
	scanf("%d",&size);
	int arr[size];
	printf("Enter %d numbers: \n",size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	} // 6,9,5,8,4,3,9     search= 9
	int item;
	printf("Enter those number which you want to search from array: \n");
	scanf("%d",&item);
	int num=0;
	for(int i=0;i<size;i++){
		if(arr[i]==item){
			num=1;
		}
	}
	if(num){
		printf("Yes, %d is present in array: \n",item);
	}
	else{
		printf("No, it's not in array");
	}
}
