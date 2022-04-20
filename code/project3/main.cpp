#include <bits/stdc++.h>

using namespace std;

int main() {
    
   /*int x = 38 ;
   if (x%2==0) 
   {
       if (x%4==0)
       {
           cout << "2 and 4 are 0 and 0" << endl;
       }
       else 
       {
           cout << "only 2 gives 0" << endl;
       }
   }
   else 
   {
       if (x%4==0)
       {
           cout << "Not 2 only 4 gives 0" << endl;
       }
       else
       {
           cout << "Neither 2 nor 4 gives 0" << endl;
       }
   }*/
   
   int x = 45, y = 3;
   float z=6;
   
   if (x/z == 6) cout << "First" << endl;
   else 
   {
       if (x/z==5)
       {
           cout<< "Second" << endl;
       }
       else
       {
           if (x/z==7) cout<<"Third" << endl;
           else cout <<"Fourth"<< endl;
       }
   }

   
    return 0;
    
}
    
        
    
    



