#include <iostream>
using namespace std;


void printArray(int arr[],int n){
    cout<<"\n";
    cout<<"Array elements are: \n";
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<"\n";
    
}


void reverseArray(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int tmp;
        tmp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=tmp;
    }
}

int main(){

    int limit;
    cout<<"Enter the array size"<<endl;
    cin>>limit;
    int arr[limit];

    cout<<"Enter the array elements"<<endl;
    for (int i = 0; i < limit; i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }
    
    printArray(arr,limit);
    reverseArray(arr,limit);
    printArray(arr,limit);



    return 0;
}