// // C++ program to implement iterative Binary Search
// #include <bits/stdc++.h>
// using namespace std;


// int main(void)
// {
//     int arr[] = { 2, 3, 4, 10, 40 };
//     int x = 10;
//     int l = sizeof(arr[0])
//     int n   = sizeof(arr[0]);
//      while (l <= r) {
//         int m = l + (r - l) / 2;

  
//         if (arr[m] == x)
//             cout<< arr[m];

     
//         if (arr[m] < x)
//             l = m + 1;

       
//         else
//             r = m - 1;
//     }
  
 
      
// }



#include <iostream>
using namespace std;

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start = 0;
    int end = 8;
    
    int mid = (start + end) / 2;
    int target = 6;
    int a=1;
    while (start < end)
    {
       
        if (arr[mid] == target)
        {  
            a=0;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
         mid = (start + end) / 2;
    }
    if(a==0) cout<<"yes";
    else cout<<"no";
    return 0;
}