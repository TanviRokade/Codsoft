#include<iostream>
using namespace std;
char board[9]={' ',' ',' ',' ' , ' ' ,' ' ,' ', ' ',' '};

void drawb(){
    cout<<">->->->->- TIC TAC TOE GAME -<-<-<-<-<-<\n\n";
    cout<<"-------------------------------------------------------------\n";
    cout<< " " << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout<<"----------\n";
    cout<< " " << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout<<"----------\n";
    cout<< " " << board[6] << " | " << board[7] << " | " << board[8] << endl;
    cout<<"------------------------------------------------------------\n";
}
void get_x_player()
{
    while(true){
       
        cout<< "Select the position for 'X':";
        int choice;
        cin>>choice;
        choice--;
        if(choice < 0 && choice > 8)
        {
            cout<<"Choose Properly";
        }
        else if(board[choice] != ' ')
        {
            cout<<" Choose Empty Once "<<endl;
        }
        else
        {
            board[choice]='x';
            break;
        }
    }
}
void get_o_player()
{
     while(true){
        
        cout<< "Select the position for 'O':";
        int choice;
        cin>>choice;
        choice--;
        if(choice < 0 || choice > 8)
        {
            cout<<"Choose Properly";
        }
        else if(board[choice] != ' ')
        {
            cout<<" Choose Empty Once "<<endl;
        }
        else
        {
            board[choice]='o';
            break;
        }
    }
}
int c_board(char symbol)
{
    int total =0;
    for(int i=0; i<9; i++)
    {
        if(board[i] == symbol)
        total += 1;
    }
    return total;
}
char c_winner()
{    
    //for Horizontal
    if(board[0]==board[1] && board[1] ==board[2] && board[0] != ' ')
    return board[0];
    if(board[3]==board[4] && board[4] ==board[5] && board[3] != ' ')
    return board[3];
    if(board[6]==board[7] && board[7] ==board[8] && board[6] != ' ')
    return board[6];
    
    //for vertical
    if(board[0] == board[3] && board[3] == board[6] && board[3] != ' ')
    return board[0];
    if(board[1] == board[4] && board[4] == board[7] && board[1] != ' ')
    return board[1];
    if(board[2] == board[5] && board[5] == board[8] && board[2] != ' ')
    return board[2];
    
    //for diagonal
    if(board[0]==board[4] && board[4]==board[8] && board[0] != ' ')
    return board[0];
    if(board[2]==board[4] && board[4]==board[6] && board[2] != ' ')
    return board[2];

    return ' ';

}
void player1_player2()
{
   string x_player_n, o_player_n;
   cout<<"Enter X player_n :";
   cin>>x_player_n;
   cout<<"Enter O player_n :";
   cin>>o_player_n;
   int moves = 0;
   while(true)
   {
    drawb();
    if(c_board('x') == c_board('o'))
    {
        cout<<x_player_n<<endl;
        get_x_player ();
    }
    else 
    {
         cout<<o_player_n<<endl;
        get_o_player ();
    }
    char winner = c_winner();
    if(winner == 'x')
    {
        drawb();
        cout<<x_player_n<<"\t-Won the Game !!!!!\n\n"<<endl;
        break;
    }
    else if (winner =='o'){
        drawb();
        cout<<o_player_n<<"\t-Won the Game !!!!!\n\n"<<endl;
        break;
     }
    else if (moves == 8) // All positions filled, it's a draw
        {
            drawb();
            cout << "It's a draw!!!!" << endl;
            break;
        }
        moves++;
}
}
int main()
{
    while (true)
    {
        player1_player2();
        drawb();

        char p_again;
        cout << "Do you want to play again???  ";
        cin >> p_again;

        if (p_again != 'Y' && p_again != 'y')
            break;

        // Reset  board for new game
        for (int i = 0; i < 9; i++)
        {
            board[i] = ' ';
        }
    }

    return 0;
}
