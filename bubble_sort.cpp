#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> &arr){
    int n = arr.size();
    bool swapped;
    int count = 0;

    for(int i = 0; i<n-1; i++){
        swapped = false;
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
                swapped = true;
            }
        }
        if(!swapped)
        break;
    }
    cout<<"Total number of swapping is : "<<count<<endl;
}


void printArray(const vector<int> &arr){
    for(int i: arr){
        cout<<i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;

    vector<int> arr;
    cout<<"Enter the elements of the array :";
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"This is the entered array:";
    printArray(arr);
    cout<<endl;

    bubble_sort(arr);
    cout<<"This is the sorted array: ";
    printArray(arr);
    cout<<endl;

   
}


