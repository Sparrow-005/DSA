#include<stdio.h>
#include<stdlib.h>
void main()
{
  int a[50],n,data,i,found=0;
  printf("\n Enter the size of array:");
  scanf("%d",&n);
  printf("Enter the array elements\n");

  for (i= 0; i < n; i++)
    scanf("%d", &a[i]);
 printf("The array elements are.....\n");

  for (i= 0; i < n; i++)
    printf("%d\n", a[i]);
    
  printf("Enter the element to search\n");
  scanf("%d", &data);

  for (i = 0; i < n; i++)
  {
    if (a[i]== data)   
    {
      printf("The element is found at index %d",i);
      found=1;
      break;
    }
  }
  if (found==0)
    printf("The element is not found !!!\n");


}

