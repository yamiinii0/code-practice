#include<iostream>
using namespace std;

int changeArr(int arr[], int size){
    cout<<"in function" << endl;

    for(int i=0; i<size; i++){
        arr[i]= 2*arr[i];
        cout<<arr[i]<<" ";
    }
    cout << endl;
}

int main(){
    int arr[]= {1,2,3};

    changeArr(arr, 3);

    cout << "in main" << endl;
    for(int i=0; i<3; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// pass by reference means we are passing the address of the variable to the function. So, if we change the value of the variable inside the function, it will also change the value of the variable in the main function.
