#include <bits/stdc++.h>

using namespace std;

int main() 
{ 
     int n{0};
     int m{0};
     int k{0};
     
     cin>>m;
     cin>>n;
     cin>>k;
     
     int arr[n][m];
     
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             cin>> arr[i][j];
         }
     }
     
     
     bool flag=false;
     for(int i=0;i<n;i++)
     {
         for (int j=0; j<m; j++)
         {
             if(arr[i][j]==k)
             {
                 cout<<i <<" "<< j<< endl;
             }
         }
     }
     
     if(flag)
     {
         cout<<"True"<< endl;
     }
     else
     {
         cout<<"False"<< endl;
     }
     
     
     
     
     
     
     
     
     
     
}