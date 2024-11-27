//Find smallest number in an array of size N.
#include<stdio.h>
int find_smallest(int arr[] , int n)
{
int smallest = arr[0];
for (int i = 1; i < n ; i++)
{
if  (arr[i] < smallest)
smallest = arr[i] ;
}
return smallest ;
}
 
 int main()
 {
    int arr[5] = { 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int smallest = find_smallest(arr , n) ;
    printf("The smallest number in the array is : %d\n " , smallest);
    return 0;

 }

