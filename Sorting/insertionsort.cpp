#include <iostream>
using namespace std;
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp=arr[i];
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]= temp;
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main() {
    int arr[] = {3,5,4,2,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    insertionsort(arr,n);
    display(arr,n);
    return 0;
}
