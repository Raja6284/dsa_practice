#include<iostream>
#include<vector>
using namespace std;


int partition(vector<int>& arr, int s, int e){

    int idx = s-1;
    for(int j = s; j<e; j++){
        if(arr[j] <= arr[e]){
            idx++;
            swap(arr[idx],arr[j]);
        }
    }

    idx++;
    swap(arr[idx],arr[e]);

    return idx;

}

void quick_sort(vector<int>& arr, int s, int e){

    if(s<e){
        int pivot = partition(arr,s,e);

    quick_sort(arr,s,pivot-1);
    quick_sort(arr,pivot+1,e);

    }
    
}

int main(){
    vector<int> arr = {38,27,3,9,82,10};
    cout<<"Original given array is: ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    quick_sort(arr,0,arr.size()-1);

    cout<<"Sorted array is: ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;


}