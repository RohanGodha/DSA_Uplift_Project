// Question 1: Given an integer array and another integer element. The task is to find if the given element is present in array or not.
// Example 1:
// Input:
// n = 4
// arr[] = {1,2,3,4}
// x = 3
// Output: 2
#include <iostream>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i] == x) {cout<<i; return 0;}
    }cout<<"Not Found";

    return 0;
}