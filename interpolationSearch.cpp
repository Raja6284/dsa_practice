#include<iostream>
#include<vector>
using namespace std;

int interPolation_search(vector<int>& arr, int key){
    int s = 0;
    int e = arr.size()-1;

    while(s<=e && key >= arr[s] && key <= arr[e]){
        
        int pos = s + ((e-s)/(arr[e] - arr[s])) * (key - arr[s]);
        
        if(key == arr[pos]){
            return pos;
        }else if(key < pos){
            e = pos - 1;
        }else{
            s = pos + 1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {10,20,30,40,50,60,70,80};

    int index = interPolation_search(arr,70);

    cout<<"The element 70 is found at index : "<<index;

    return 0;
}