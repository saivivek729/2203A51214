#include<stdio.h>
int main()
{
	int n;
	printf("Enter the no.of ID's: ");
	scanf("%d",&n);
	int a[n],i,j,temp,o;
		printf("\nEnter Products IDs:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
printf("\nEnter 0 for ascending order and 1 for descending order ");
scanf("%d",&o);
if(o==0)
{

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
			  temp=a[i];
			  a[i]=a[j];
			  a[j]=temp;				
			}
		}
	}
}
else if(o==1)
{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
			  temp=a[i];
			  a[i]=a[j];
			  a[j]=temp;				
			}
		}
	}	
}
else
{
	printf("\nInproper input");	
}
	printf("\nAfter Sorting Product IDs:\n");
	for(i=0;i<n;i++)
	  printf("%d\n",a[i]);
}
