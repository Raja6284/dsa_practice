#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int>& arr,int key){
    int start = 0;
    int end = arr.size()-1;

    while(start<=end){

        int mid = start + (end - start)/2;

        if(key == arr[mid]){
            return mid;
        }else if(key<arr[mid]){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {22,33,44,55,66,77,88,99,999,1018};
    int index = binary_search(arr,1018);

    cout<<"Index of 33 in the given array is :"<<index;
    
    return 0;
}

