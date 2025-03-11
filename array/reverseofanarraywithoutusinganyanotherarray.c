
//with help of while loop
// #include <stdio.h>
// int main()
// {
//     int arr[6] = {45, 50, 24, 34, 3, 89};

//     int i = 0, j = 5;
//     while (i < j)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;

//         i++;
//         j--;
//     }
//     printf("%d\n", i);
//     for (int k = 0; k < 6; k++)
//     {
//         printf("%d ", arr[k]);
//     }
//     return 0;
// }



//with help of for loop

// #include <stdio.h>
// int main()
// {
//     int arr[6] = {45, 50, 24, 34, 3, 89};

//     for(int i=0,j=5;i<j;i++,j--){
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }

//     for (int k = 0; k < 6; k++)
//     {
//         printf("%d ", arr[k]);
//     }
//     return 0;
// }

//with help of fn & for loop

#include <stdio.h>
void fun(int arr[]){
    for(int i=0,j=5;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
return;
}
int main()
{
    int arr[6] = {45, 50, 24, 34, 3, 89};

    fun(arr);
    for (int k = 0; k < 6; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}