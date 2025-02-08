#include<iostream>
using namespace std;

void selection_sort(int* arr,int n){
    for(int i = 0; i<n-1; i++){
        int min_index = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[min_index])
                min_index = j;
        }
        swap(arr[i],arr[min_index]);
    }
}

int main(){
    
    int n;
    cout<<"please enter the size of array:";
    cin>>n;
    cout<<endl;
    int* arr = new int[n];

    cout<<"Enter the numbers in array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    selection_sort(arr,n);

    cout<<"This is the sorted array :";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}