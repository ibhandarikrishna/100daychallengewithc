 #include<iostream>
using namespace std;
int main(){
    int n,d;
    cin>>n;
    int arr[n];
    
    cout<<"enter the array :";
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to be searched : ";
    cin>>d;
    cout<<"entered array is :";
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
        if(arr[i] == d){
            cout<<"element found at "<<i<<"th position"; 
        }
    }
    
    

}
