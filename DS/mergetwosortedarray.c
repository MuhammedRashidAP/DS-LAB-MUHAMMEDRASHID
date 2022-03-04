#include<stdio.h>
void main()
{
	int a[20],b[20],c[20],i=0,j=0,k=0,n1,n2,h;
	printf("enter the size of element in a");
	scanf("%d",&n1);
	printf("enter the array a element (sorted order)");
	for(i=0;i<n1;i++)
	{
	  scanf("%d",&a[i]);
	}
	printf("enter the size of element in b");
	scanf("%d",&n2);
	printf("enter the array b element (sorted order)");
	for(i=0;i<n2;i++)
	{
	  scanf("%d",&b[i]);
	}
	i=0;
	while(i<n1 && j<n2)
	{
	  if(a[i]<b[j])
	  {
	    c[k]=a[i];
	    k++;
            i++;
	  }
	  else if(a[i]>b[j])
	  {
	            c[k]=b[j];
	             k++;
                     j++;
	  }
	  else
	  {
	          c[k]=a[i];
	           k++;
		   i++;
                   j++;
	  }
	}
	while(i<n1)
	{
	  c[k]=a[i];
	  k++;
          i++;
	}
	while(j<n2)
	{
	  c[k]=b[j];
	  k++;
          j++;
	}
         
	for(i=0;i<k;i++)
	{
	  printf("%d ",c[i]);
	}
}

