#include <iostream>

using namespace std;
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
void binarysearch(int arr[] ,int low ,int high, int num)
 {
         if(low>high){
         cout<<"Element not found";
         }
         else{
        int mid = (low+high) /2;
         if(arr[mid] == num) {
             cout<<"element found at index :"<<mid;
             exit(0);
         }
         else if(arr[mid]>num){
             binarysearch(arr,low,mid-1,num);
         }
         else{
          binarysearch(arr,mid+1,high,num);
         }
     }
 }

int main()
{
    int n,num,low = 0;
    cout<<"enter the size of array :";
    cin>>n;
    if(n<1){
        cout<<"Enter the valid size";
    }else{
    int arr[n];
    int high = n;
    cout<<"enter the "<<n<<" elements :"<<endl;
     for(int i = 0;i<n;i++){
         cin>>arr[i];
     }
     selectionSort(arr,n);
     cout<<"sorted array is :";
      for(int i = 0;i<n;i++){
         cout<<arr[i]<<" ";
     }
    
     cout<<endl<<"enter the desired elemen t to search for :";
     cin>>num;
       binarysearch( arr, low,high,num);
    
}
}
