#include <bits/stdc++.h>
using namespace std;

/*
input  -> [50 30 90 40 10]
output -> [10 30 40 50 90]
*/

// void bubble_sort(int arr[], int n)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         for (int j = 0; j <= i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 int temp = arr[j + 1];
//                 arr[j + 1] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// for above and below method the logic is same but iteration is defferent means -> 1 to n / n to 1
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int didswap = 0;
        for (int j = 0; j <= n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didswap = 1;
            }
        }
        // condition to check how many times for loop runs and it make your code optimization
        if (didswap == 0)
        {
            break;
        }
        cout << "runs\n";
    }
}

int main()
{
    cout << "Enter n number" << endl;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}