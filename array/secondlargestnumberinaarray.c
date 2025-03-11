

// // for finding 2nd largest value of an array

// #include <stdio.h>

// int main()
// {
//     int arr[7] = {-45, 500, -500, 400, -600, -1, -78};
//     int max = arr[0];
//     int smax = arr[0];

//     for (int i = 0; i < 7; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d\n", max);

//     // for (int i = 0; i < 7; i++)
//     // {
//     //     if (smax < arr[i])
//     //     {
//     //         if (arr[i] != max)
//     //         {
//     //             smax = arr[i];
//     //         }
//     //     }
//     // }
//     // printf("%d\n", smax);

//     for (int i = 0; i < 7; i++)
//     {
//         if (smax < arr[i] && arr[i] != max)
//         {

//             smax = arr[i];
//         }
//     }
//     printf("%d\n", smax);

//     return 0;
// }

// wrong code for finding 2nd largest number of array-1

// #include <stdio.h>

// int main()
// {
//     //   int arr[7] = {1,2,3,4,5,6,7};//rigth in case of number are given in assending order

//     int arr[7] = {-45, 500, -500, 400, -600, -1, -78};//wrong in case of number are given in desending order or in given way
//     int max = arr[0];
//     int smax = arr[0];

//     for (int i = 0; i < 7; i++)
//     {
//         if (max < arr[i])
//         {
//             smax = max;
//             max = arr[i];
//         }
//     }
//     printf("%d\n", smax);
//     printf("%d\n", max);

//     return 0;
// }




// // wrong code for finding 2nd largest number of array-2
// #include <stdio.h>

// int main()
// {
//     int arr[7] = {1, 2, 3, 4,4, 3, 2}; // rigth in case of same numbers are given

    
//     int max = arr[0];
//     int smax = arr[0];

//     for (int i = 0; i < 7; i++)
//     {
//         if (max < arr[i])
//         {
//             smax = max;
//             max = arr[i];
//         }
     
    
//     else if (smax < arr[i])
//         {
//             smax = arr[i];
//         }
    
//     }
//     printf("%d\n", smax);
//     printf("%d\n", max);

//     return 0;
// }


//right code for finding 2nd largest number of array
#include <stdio.h>

int main()
{
    int arr[7] = {1, 4, 3, 4,4, 3, 2}; // rigth in case of number are given in assending order

    // int arr[7] = {-45, 500, -500, 400, -600, -1, -78}; // wrong in case of number are given in desending order or in given way
    int max = arr[0];
    int smax = arr[0];

    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        if (smax < arr[i] && arr[i] != max)
        {
            smax = arr[i];
        }
    
    // else if (smax < arr[i])
    //     {
    //         smax = arr[i];
    //     }
    
    }
    printf("%d\n", smax);
    printf("%d\n", max);

    return 0;
}