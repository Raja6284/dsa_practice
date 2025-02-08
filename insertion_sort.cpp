#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int>& arr){
    int n = arr.size();
    int comparison = 0;

    for(int i = 1; i<n; i++){
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
            comparison++;
        }
        arr[j+1] = temp;
    }
    cout<<"Total number of comparison is :"<<comparison<<endl;
}

void printArray(vector<int> &arr){
    for(int i: arr){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;

    vector<int> arr;
    cout<<"Enter the elements of the array:";
    for(int i= 0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    cout<<"entered array is ";
    printArray(arr);
    cout<<endl;

    insertion_sort(arr);
    cout<<"The sorted array is ";
    printArray(arr);


}