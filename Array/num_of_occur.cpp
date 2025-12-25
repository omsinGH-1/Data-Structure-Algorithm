#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of arr: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elem in arr: \n";
    for(int i=0;i<n;i++)
        {
            cin>>arr[i]; 
        }
    int find_elem;
    cout<<"Enter elem of total occur find: ";
    cin>>find_elem;
    for( int i=0;i<n;i++ )
    {
        if(arr[i]==find_elem)
        {
            int count=0;
            count++;
        }
    }
    cout<<"Total occur : "<<endl;
    return 0;
}