#include <stdio.h>

int main()
{
    int arr[7] = {3, 25, 37, 13, 64, 76, 84};
    int sumofoddindices = 0, sumofevenindices = 0;

    for (int i = 0; i < 7; i++)
    {
        if (i % 2 != 0)
        {
            sumofoddindices += arr[i];
        }

        else
        {
            sumofevenindices += arr[i];
        }
    }
    // printf("%d\n", sumofevenindices);
    // printf("%d\n ", sumofoddindices);
    // int difference = sumofevenindices - sumofoddindices;
    // printf("%d \n", difference);
     printf("%d \n", sumofevenindices - sumofoddindices);
    return 0;
}