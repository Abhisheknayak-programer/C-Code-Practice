#include<iostream>
using namespace std;

int print_unique_element_in_array(int * arr,int size){
    int ans = 0;
    for(int i = 0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[7] = {2,2,1,123,1,4,4};
    cout << "The unique element in the array is : " << print_unique_element_in_array(arr,7) << endl;

    return 0;
}