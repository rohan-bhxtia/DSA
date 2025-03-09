// sum of array elements
#include <iostream>
using namespace std;
int main()
{
  //for taking array size input  
  int n,i,sum=0;
  cout<<"enter number of elements u want in an array:";
  cin>>n;
  //for taking input of what elements should be there
  int a[n];
  cout<<"enter elements of array:"<<endl;
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  //for adding array elements
  for(i=0;i<n;i++){
    sum=sum+a[i];
  }
  cout<<"sum of array elements is:"<<sum<<endl;
  return 0;
}