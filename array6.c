// c program to insert an element in an array at a given position
#include <stdio.h>
int main()
{
	int i,n,pos,arr[100],val;
	printf("Enter the value for n : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("Enter the value for arr[%d] : ",i);
		scanf("%d", &arr[i]);
	}
	printf("Enter the value to be insert : ");
	scanf("%d",&val);
	printf("Enter the position to be insert : ");
	scanf("%d",&pos);
	for(i=n-1; i>=pos; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[pos] = val;
	n = n+1;
	printf("\nThe array after inserted is\n");
	for(i=0; i<n; i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
}
