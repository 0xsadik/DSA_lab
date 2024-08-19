// bubble sort and linear search 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void printArray(int arr[],int n)
{
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
void searchElement(int a[],int n, int num)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            printf("\nFound Number");
            break;
        }
        else if(i==n-1)
        {
            printf("\nNumber not Found");
        }
    }

}
int main()
{
    srand(time(0));
    clock_t start_time,end_time;
    start_time = clock();
    double time_passed;

    int n=10;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100+1;
    }
    printArray(arr,n);
    bubble_sort(arr,n);
    printArray(arr,n);
    end_time = clock();
    time_passed = (double)(end_time-start_time)/CLOCKS_PER_SEC;
    printf("\nTime: %lf seconds\n",time_passed);

    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    searchElement(arr,n,number);
    return 0;
}
