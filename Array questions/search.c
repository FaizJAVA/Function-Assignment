#include <stdio.h>
 void search(int []);
  void search (int x[])
   {
    int size,i,element,flag;

    
    printf("Enter size of array: ");
    scanf("%d",&size);

   
    printf("Enter elements in array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\nEnter element to search: ");
    scanf("%d",&element);

   
    flag=0; 
    
    for(i=0;i<size;i++)
    {
        
        if(x[i]==element)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("\n%d is found at position %d", element, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", element);
    }
   }
int main()
{
    int arr[100];
    search(arr);

    return 0;
}
