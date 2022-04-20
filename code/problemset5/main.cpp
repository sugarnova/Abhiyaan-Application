#include <bits/stdc++.h>

using namespace std;

int main() 
{
    /*int m{0};
    int n{0};
    cin >>m;
    cin >> n;
    
    if (m>=n)
    {
        if (n%2==0)
        {
            cout << "Malvika";
            
        }
        else
        {
            cout << "Akshat";
        }
    }
    else
    {
        if (m%2==0)
        {
            cout << "Malvika";
            
        }
        else
        {
            cout << "Akshat";
        }
    }
    int x{0};
    cin >> x;
    
    if (x%2==0)
    {
        cout << 4 << " " << x-4 ;
    }
    
    else
    {
        cout << 9 << " " << x-9 ;
    }
    int x{0};
    int y(4,7,47,74,77,44,477,747,774,744,474,447,777,444);
    cin >> x;
    if (x%y==0)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }*/
    /*int n;
    cin >> n;
    for (int i=1;i<=n;i=i+1)
    {
        if (n%i!=0)
        {
            cout <<+1;
        }
        else 
        {
            cout << +0 ;
        }
    }*/
    /*int n{0};
    cin >> n;
    
    int c{0};
    int i=1;
    while(n>0)
    {
        c++;
        n=n/10;
    }
    cout << c;
     */
     /*int mark [100];
     for (int i=1; i<=50; i=i+1)
     {
         mark[i]= i*i;
     }
     
     for (int i=1; i<=50; i=i+1)
     {
         cout << mark[i] << endl;
     }*/
     /*int mark[5];
     
     
     for (int i=0 ; i<=4; i=i+1)
     {
         cin>>mark[i];
     }
     
     int max_mark{0};
     for (int i=0 ; i<=4 ; i=i+1)
     {
         if (mark[i]>max_mark)
         {
             max_mark=mark[i];
         }
     }
     cout<<"Maximum Marks = "<<max_mark<< endl;*/
     
     float Rt{0};
     float Ro=0.593;
    
     
     cout << "Rt" << endl;
     cin >> Rt;
     
     
     float M=48200/(2*6.67);
     float K= 1+ ((4*6.67*0.1)/(4.82*4.82))*((Rt/Ro)-1);
     
     float T=273+M*((K^0.5)-1);
     cout<< T << endl;
     
     
}