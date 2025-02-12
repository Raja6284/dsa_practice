#include<iostream>
#include<vector>
using namespace std;

//(arr[i] > arr[j]) && i < j ---> inversion count

int merge(vector<int>&arr,int s, int mid,int e){

    int i = s;
    int j = mid + 1;
    vector<int> temp;
    int count = 0;

    while(i <= mid && j <= e){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            count = count + mid - i + 1;
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
    
    return count;
}

int merge_sort(vector<int>& arr, int s, int e){
    int count = 0;

    if(s<e){

        int mid = s + (e-s)/2;
        count += merge_sort(arr,s,mid);
        count += merge_sort(arr,mid+1,e);

        count +=merge(arr,s,mid,e);
    }

    return count;
    
}

int main(){
    vector<int> arr = {4,3,2,1};

    int count = merge_sort(arr,0,arr.size()-1);

    cout<<"The sorted array is ";
    for(int num: arr){
        cout<<num<<" ";
    }
    cout<<endl;
    cout<<"the total inversion count is : "<<count;
}