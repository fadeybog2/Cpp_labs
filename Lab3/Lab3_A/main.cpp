#include <iostream>

using namespace std;

int main()
{
    int sum=0, n;
    double sr;
    cin>>n;
    int* arr = new int[n];
    for(int i =0; i< n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sr=sum/n;
    for(int i =0; i< n; i++){
        if(arr[i]<=sr) sum-=arr[i];
    }
    cout << sum << endl;
    delete[] arr;
    return 0;
}
