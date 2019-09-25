 #include<stdio.h>
#include <stdlib.h>
int main()
{
	int data[100],n,i,j,start,end,mid,item;’
	printf ("Enter array size:\n");
	scanf ("%d",&n);
	for (i=1;i<=n;i++)
	{
    	scanf ("%d",&data[i]);
	}
	printf ("enter item:\n");
	scanf ("%d",&item);
	start=1;
	end=n;
	mid=(start+end)/2;
	while(start<=end)
	{
    	if (data[mid]<item)
    	{ 
        	start=mid+1;
    	}
    	else if (data[mid]>item)
    	{
        	end=mid-1;
    	}
    	else
    	{
            	for(i=1;i<=n;i++)
            	{
                	if (data[i]==item)
                	{
                    	printf ("item %d and loc %d\n",item,i);
                	}
            	}
        	break;
    	}
    	mid=(start+end)/2;
	}
}
