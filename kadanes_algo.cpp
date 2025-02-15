#include<iostream>
#include<vector>
using namespace std;

int kadanes_algo(vector<int>arr){
    int sum = 0;
    int maxi = arr[0];
    int n = arr.size();

    for(int i = 0; i<n; i++){
        sum = sum + arr[i];
        maxi = max(maxi,sum);
        if(sum<0) sum = 0;
    }

    return maxi;
}


int main(){
    vector<int> arr =  {-2,1,-3,4,-1,2,1,-5,4};

    int Maximum_sum = kadanes_algo(arr);

    cout<<"The required sum is :"<<Maximum_sum;

    return 0;
}