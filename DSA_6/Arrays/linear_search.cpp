// linear search is an algorithm that finds the position of a target value within an array. It sequentially checks each element of the array until a match is found or the whole array has been searched.


#include<iostream>
using namespace std;

int linearsearch(int arr[], int sz, int target){
    for (int i=0; i<sz; i++){
        if (arr[i] == target){  //FOUND
            return i;
        }
    }
    return -1;  //NOT FOUND
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = 10;
    int target = 7;

    cout << linearsearch(arr,sz,target);
    return 0;

}