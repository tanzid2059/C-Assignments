#include<iostream>

using namespace std;

void KeyToEnd(int arr[], int const arrSize, int const key){

    int c = 0;
    for (int i=0; i<arrSize-c;){
        if (arr[i] == key){
            for(int j=i;j<arrSize-1;j++){
                arr[j] = arr[j+1];
            }
            arr[arrSize-1] = key;
            c++;
        }
        else i++;
    }
}

void showArray(int arr[],int const arrSize){
    for(int i=0;i<arrSize;i++) cout<<arr[i]<<" ";
        cout<<endl;
}

int main()
{
    int arr[12] = {1,9,3,3,5,5,1,6,3,1};
    int arrSize = 10;
    int key = 3;

    showArray(arr,arrSize);
    KeyToEnd(arr,arrSize,key);
    showArray(arr,arrSize);

    return 0;
}
