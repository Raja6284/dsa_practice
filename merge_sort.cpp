#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr,int s, int mid, int e){

    vector<int> temp;
    int i = s;
    int j = mid+1;
    
    while(i<=mid && j<=e){
        if(arr[i]<= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=e){
        temp.push_back(arr[j]);
        j++;
    }

    for(int index = 0; index<temp.size(); index++){
        arr[index+s] = temp[index];
    }
}

void merge_sort(vector<int>& arr, int s, int e){

    if(s<e){
        int mid = s + (e-s)/2;

        merge_sort(arr,s,mid);
        merge_sort(arr,mid+1,e);

        merge(arr,s,mid,e);
    }
}

int main(){
    vector<int> arr = {38,27,3,3,9,82,10};
    cout<<"Original given array is: ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    merge_sort(arr,0,arr.size()-1);

    cout<<"Sorted array is: ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;


}