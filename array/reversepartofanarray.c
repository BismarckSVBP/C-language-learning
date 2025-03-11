// #include<stdio.h>

// int main(){
//     int arr[7] ={1,2,3,4,5,6,7};
//     for(int i=2,j=5;i<j;i++,j--){
//         int temp =arr[i];
//         arr[i] =arr[j];
//         arr[j]=temp;
//     }
//     for(int k=0;k<7;k++){
//         printf("%d ",arr[k]);
//     }
//     return 0;
// }

#include <stdio.h>

void reverse(int arr[], int a, int b)
{
    for (int i = a, j = b; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        return;
    }
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 2, 5);
    for (int k = 0; k < 7; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}
