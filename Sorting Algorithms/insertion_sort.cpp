#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int temp;
    cout << "Enter number of array elements: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
    {
        temp = arr[i];
        // for (int j = i - 1; j >= 0; j--)
        // {
        //     if (arr[j] > temp)
        //     {
        //         arr[j + 1] = arr[j];
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            j--;
        }
        arr[j + 1] = temp;
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}