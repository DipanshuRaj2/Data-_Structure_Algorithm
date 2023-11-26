#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j <= n - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {

                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main()
{
    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleSort(arr, n);
    cout << "Array Elements Are sorting: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
