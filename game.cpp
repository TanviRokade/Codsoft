#include <iostream>
#include<ctime>
using namespace std;
int main()
{ 
    int comp_n;
    int guess;

    srand(time(0));
    comp_n= 1+ rand()%100;
    cout<<" The  Computer has generated the Random Number now guess it and win the game "<<endl;
    cout<<"Enter the Number between 1 to 100 to play the Game"<<endl;
    cin>>guess;
    while(guess != comp_n)
    {
        if(guess >comp_n)
        {
            cout<<"Your Guess is Too High,try for a smaller number"<<endl;
        }
        else
        {
            cout<<"Your number is Too low ,try  for a larger number"<<endl;
        }
        cin>>guess;
    }
    cout<<"Congratulations!!! You got the correct number"<<endl;
    return 0;
    
}