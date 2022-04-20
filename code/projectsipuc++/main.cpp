#include <bits/stdc++.h>

using namespace std;

int main() 
{
    /*int x;
    cout << "Enter your favourite number." << endl;
    cin >> x ;
    cout << "What a stupid you are, how can " << x << " be your favourite number. Damn bloody fool." << endl;
    return 0;
     */
     
     /*int x,y ;
     cout << "Enter your favourite interger" << endl ;
     cin >> x ;
     cout << "Maja nahi aya, type once more your favourite integer" << endl;
     cin>>y ;
     cout << "Tauba Tauba ye " << y << " dekh ke saara mood kharab ho gya. Dafa ho jao yaha se" << endl; */
     
     /*int x,y ;
     cout << "Enter length of the room" << endl;
     cin >> x ;
     cout << "Enter breadth of the room" << endl;
     cin >> y ;
     cout << "Damn bloody fool, with dimensions " << x*y << " how can you have a feasable house." << endl;
     */
     
     /*char middle_initial {'M'} ;
     cout << "My middle initial is " << middle_initial << endl;
     unsigned short int exam_score {55};
     cout << "My exam score was " << exam_score << endl;
     int cars = 75;
     cout << "I have " << cars << " cars in my garage." << endl;
     long people_in_alaska {215639};
     cout << "More than " << people_in_alaska << " people live in alaska." << endl;
     
     float temperature {23.76};
     cout << "Today the temperature in Madras is " << temperature << endl;
     
     double length {32.456891};
     cout << "The length of my table is exactly " << length << endl;
     return 0;*/
    /* 
     cout << "Welcome to Subham's Carpet Cleaning Service." << endl;
     cout << endl;
     
     int small_rooms {0};
     cout << "How many small rooms would you like to be cleaned?" ;
     cin >> small_rooms;
     int large_rooms {0};
     cout << "How many large rooms would you like to be cleaned?" ;
     cin >> large_rooms ;
     
     cout << "No of small rooms: " << small_rooms << "\nNo of large rooms: " << large_rooms<< endl;
     
     const double price_small_room {25};
     const double price_large_room {35};
     
     cout<< "Price of small room: Rs." << price_small_room << endl ;
     cout << "Price of large room: Rs."<< price_large_room << endl ;
     
     cout<< "Estimate for carpet cleaning service." << endl;
     cout << "Cost: Rs." << (small_rooms*price_small_room)+(large_rooms*price_large_room) << endl;
     cout << "Tax: Rs." << (small_rooms*price_small_room*0.06)+(large_rooms*price_large_room*0.06) << endl;
     
     cout << "=================================================================================" << endl;
     
     cout << "Total estimate: Rs"<< (small_rooms*price_small_room)+(large_rooms*price_large_room)+(small_rooms*price_small_room*0.06)+(large_rooms*price_large_room*0.06) << endl;
     cout << "This estimate is valid for 30 days." << endl;
     return 0;
 
     
     */
     
     /*char vowels []  {'a','e','i','o','u'};
     cout << "The first vowel is " << vowels [0] << endl;
     cout << "The last vowel is " << vowels [4] << endl;
     */
     
     /*double hi_temps [] {99.1,92.5,96.7,101.2,98.4} ;
     cout << "The first high temperature is " << hi_temps [0] << en dl;
     
     hi_temps [0] = 99.6;
     
     cout << "Now the high temperature is " << hi_temps [0] << endl;
      */
      
      /*int x,y ;
      cin >> x >> y ;
      
      if ( x*y >= 0 )
      {
          cout << x/y;
      }
      
      else
      {
          if ( x%y!=0)
          {
              cout << (x/y)-1;
          }
          else 
          {
              cout << x/y;
          }
      }*/

    /*int x,y ;
    
    cin >> x >> y;
    if (x*y >= 0)
    {
        cout << x/y;
    }
    else
    {
        if (x%y!= 0)
        {
            cout << (x/y)-1 ;
        }
        else 
        {
            cout << (x/y);
        }
    }*/
    

    /*int k{0};
    int n{0};
    int w{0};
    cin >> k;
    cin >> n;
    cin >> w;
    
    if ( ((w*(w+1))/2)*k <= n)
    {
        cout << 0;
    }
    else 
    {
        cout << (((w*(w+1))/2)*k)-n ;
    }*/
    
    /*int x{0};
    int y{0};
    cin >> x;
    cin >> y;
    if (x%2==0)
    {
        cout << (x*y)/2;
    }
    else 
    {
        if (y%2==0)
        {
            cout << (x*y)/2;
        }
        else
        {
            cout << ((x*y)-1)/2;
        }
        
    }*/
    int a{0};
    int b{0};
    int c{0};
    int d{0};
    
    cin >> a;
    cin>> b;
    cin >> c;
    cin >> d;
    
    if (a> (b,c,d))
    {
        cout << (b+c)-a <<" "<< (b+d)-a <<" "<< (d+c)-a;
    }
    else
    {
        if (b> (a,c,d))
        {
            cout << (a+c)-b <<" "<< (a+d)-b <<" "<< (d+c)-b;
        }
        else
        {
            if (c> (a,b,d))
            {
                cout << (a+b)-c <<" "<< (a+d)-c <<" "<< (d+b)-c;
            }
            else
            {
                cout << (a+b)-d <<" "<< (a+c)-d <<" "<< (c+b)-d;
            }
        }
    }
    return 0;
       
    
}      
          
          
          
          
          
      
      
    
      
      
    
     

     

