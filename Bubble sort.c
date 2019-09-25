#include <stdio.h>
#include <string.h>
int main ()
{
	int data[1000],i,j,n,temp,k,pass=0;
	printf ("eneter array size:\n");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
    	scanf ("%d",&data[i]);
	}
	for (i=1;i<=n;i++)
	{
    	for (j=1;j<=n-i;j++)
    	{
        	if (data[j]>data[j+1])
        	{
            	temp=data[j];
            	data[j]=data[j+1];
            	data[j+1]=temp;
            	++pass;

            	printf("pass %d:",pass);

            	for (k=1;k<=n;k++)
            	{
                	printf ("%d ",data[k]);
            	}
             	printf("\n");
        	}
    	}
	}
	printf ("sort ascending order\n");
	for (i=1;i<=n;i++)
	{
    	printf ("%d ",data[i]);
	}
}
