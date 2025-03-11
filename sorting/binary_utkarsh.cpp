#include<iostream>
using namespace std;
#include<array>

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start = 0;
    // int x = end(arr)-begin(arr)-1;
     int x = sizeof(arr)/sizeof(arr[0]);
    int end = x;
    
    
    int mid = (start + end) / 2;
    int target = 6;
    
    while (start <= end)
    {
        mid = (start + end) / 2;
       
        if (arr[mid] == target)
        {
            cout << "The num is at "<< mid;
            return 0;
            
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
         
    }
    return -1;
    
    
 
}