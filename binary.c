#include<stdio.h>
#include<stdlib.h>
void main()
{
  int a[50],n,data,i,found=0,l,r,mid;
  printf("\n Enter the size of array:");
  scanf("%d",&n);
  printf("Enter the array elements in sorted order\n");

  for (i= 0; i < n; i++)
    scanf("%d", &a[i]);
 printf("The array elements are.....\n");

  for (i= 0; i < n; i++)
    printf("%d\n", a[i]);
  printf("Enter the element to search\n");
  scanf("%d", &data);
  
  l=0;
  r=n-1;
 
  while (l<= r) {
    mid = (l+r) / 2;

    if (data==a[mid])
    {
      printf("\n The element is found at index %d",mid);
      found=1;
      break;
    }

    if (data>a[mid])
      l = mid + 1;

    else
      r = mid - 1;
  }
  if (found==0)
    printf("The element is not found !!!\n");
 }
