#include<iostream>

using namespace std;

void showArray(int arr[],int const arrSize){
    for(int i=0;i<arrSize;i++) cout<<arr[i]<<" ";
        cout<<endl;
}

int KthMin(int arr[],int const arrSize, int const k){

    int mini = arr[0];
    int index = 0;

    for(int i=0;i<k;i++){
        mini = arr[0];
        index = 0;
        for(int j=1;j<arrSize-i;j++){
            if(mini>arr[j]){
                mini = arr[j];
                index = j;
            }
        }
        for(int p=index;p<arrSize-i;p++){
            arr[p] = arr[p+1];
        }
        arr[arrSize-i-1] = mini;
    }
    return mini;
}

int main()
{
    int arr[] = {1,9,8,4,5,5,1,6,3,1};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    int k;

    try{
        cout<<"Enter The Value of K: ";
        cin>>k;

        if(k > arrSize) { throw -1;}

        cout<<endl<<"Initial Values: ";
        showArray(arr,arrSize);
        int kthmin = KthMin(arr,arrSize,k);

        cout<<"K-th Sorted Values: ";
        showArray(arr,arrSize);
        cout<<endl<<"K-th Minimum Value: ";
        cout<<kthmin<<endl;
    }
    catch(int){
        cout<<"Invalid!! K value cant be more than array size"<<endl;
    }
    return 0;
}
