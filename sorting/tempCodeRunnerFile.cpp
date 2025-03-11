#include <iostream>
using namespace std;
#include <string.h>

int main()
{
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int start = 0;
    int end = sizeof(arr)-1;
    int mid;
    int target = 6;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            cout << arr[mid];
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
}