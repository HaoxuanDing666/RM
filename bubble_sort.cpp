//
// Created by aline on 2026/10/1.
//
#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        cin>>arr[i];
    }
    for (int i = 7; i > 0; i--)
    {
        for (int j = 0; j < i; j ++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}