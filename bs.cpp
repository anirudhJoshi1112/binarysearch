#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    
    while(s<=e)
    {
       if(arr[mid]==key)
       {
          return mid;
       }
      if(key>arr[mid])
       {
          s=mid+1;
       }
       else
       {
           e=mid-1;
       }
       mid=((s+e)/2);
    }
    return -1;
}
int main()
{
    int even[]={3,45,56,67,89};
    int evenindex=binarysearch(even,5,56);
    cout<<"index of your no:" << evenindex << endl;
    return 0;
}
