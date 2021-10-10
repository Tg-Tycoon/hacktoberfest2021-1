// C program to implement iterative Binary Search 
#include <stdio.h> 
  
// A recursive binary search function. It returns 
// location of x in given array arr[l..r] if present, 
// otherwise -1 
int binary_search(int arr[], int l, int r, int x) 
{
    if(l>r){
        return -1;
    }
    int m = l + (r-l)/2;
    if(arr[m] == x){
        return m;
    }
    if(arr[m] < x){
        return binary_search(arr, m+1, r, x);
    }
    return binary_search(arr, l, m-1, x);
}
  
int main() 
{ 
    int n;
    printf("Enter the size of dataset: ");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    int arr[100]; //Array in acsending order
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    int x; //Value to search in array
    scanf("%d", &x);
    printf("Element found at position: ");
    printf("%d", binary_search(arr, 0, n-1, x));
    return 0; 
} 
