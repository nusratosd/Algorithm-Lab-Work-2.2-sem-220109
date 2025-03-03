#include<bits/stdc++.h>
using namespace std;


void bubble(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
int main(){

int n;
    cout<<"Enter the number elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bubble(arr,n);

    cout<<"sorted array"<<endl;
    for(int i=0;i<n;++i)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
