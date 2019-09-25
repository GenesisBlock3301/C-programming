#include<stdio.h>
int main()
{
	int a[100],i,n;
	printf("Enter Your Array Size:\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
    	scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("Show your Sorted array: ");
	for (i=0;i<n;i++)
	{
    	printf("%d ",a[i]);
	}

}
void mergesort(int *a,int start,int ends)
{
	int mid ;
	if (start<ends)
	{
    	mid = (start+ends)/2;
    	mergesort(a,start,mid);
    	mergesort(a,mid+1,ends);
    	merge(a,start,mid,mid+1,ends);

	}
}
void merge(int *a,int start, int mid , int midin,int ends)
{
	int temp[50],i,j,k;
	i=start;
	j=midin;
	k=0;
	while (i<=mid && j<=ends)
	{
    	if (a[i]<a[j])
    	{
        	temp[k++]=a[i++];
    	}
    	else
    	{
        	temp[k++]=a[j++];
    	}
	}
	while(i<=mid)
	{
    	temp[k++]=a[i++];
	}
	while(j<=ends)
	{
    	temp[k++]=a[j++];
	}
	for (i=start,j=0;i<=ends;i++,
	j++)
	{
    	a[i]=temp[j];
	}
}



