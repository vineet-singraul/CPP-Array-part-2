
#include <iostream>
using namespace std;
int main()
{
    int n;
   cout<<"Enter the size of array";
   cin>>n;
   int b[n];

   for(int i=0;i<=n;++i)
   {
    cin>>b[i];
   }
   
   for(int i=0;i<=n;++i)
   {
    cout<<b[i]<<endl;
   }
   
   
}