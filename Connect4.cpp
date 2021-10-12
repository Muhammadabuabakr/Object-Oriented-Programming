#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void player_turn();
bool win();
void display_board();
bool end = false;
char board[6][7];
int choice;
int cpu = 2;
//bool end = false;
//int choice;
void check(int x)
{
	int a = 0;
	int player;
    if(board[x-1][a]!= 0 && a<6) //here the user check on what position 1 is placed
    {
        a++;
        check(x);
    }   
	else if (player==1 && a<6) //print 1 on that index where user want to put value
    {
        board[x-1][a]=1;
        a=0;
    }
//  else if (cpu==2 && a<6)
//    {
//        board[x-1][a]=2;
//        a=0;
//    }
    else
    {
        cout << "WRONG!" <<endl;
        a=0;
        player++;
    }
}

void display_board()
{	
	
	for(int i = 0; i<9; i++)
    {
        if(i<2)
        {
        cout<<"-";
        } else if(i>7)
        {
        cout<<i-1<<"--"<<endl;
        } else {
        cout<<i-1<<"----";
        }
    }
	for(int i = 0; i<6; i++)
    {
        for(int j = 0; j<7; j++)
        {
            if(board[j][i]!=0)
            {
                if(board[j][i]==1)
                {
                	
                	cout<<"| R |";
                }
				else 
					cout<<"| B |";
            }
            else 
				cout<<"|   |";
        } 
		cout<<endl;
    }
    for(int i = 0; i<35; i++)
    {
        cout<<"=";
    } 
	cout<<endl;
}

bool win()
{
	for(int i= 5;i<0;i++){
		for(int j= 0;j< 7;i++){
			if(board[j][i]=='R' && board[j+1][i+1]=='R' && board[j+2][i+2]=='R' && board[j+3][i+3]=='R')
            {
            	end = true;
            	cout << "PLAYER 1 WIN:)" <<endl;
            }
        	if(board[j][i]=='R' && board[j+1][i-1]=='R' && board[j+2][i-2]=='R' && board[j+3][i-3]=='R')
            {
				cout << "PLAYER 1 WIN:)" <<endl;
            	end = true;
            }
        	if(board[j][i]=='B' && board[j+1][i-1]=='B' && board[j+2][i-2]=='B' && board[j+3][i-3]=='B')
            {
            	cout << "pc WIN!" <<endl;
            	end=true;
            }
        	else if(board[j][i]=='R' && board[j][i-1]=='R' && board[j][i-2]=='R' && board[j][i-3]=='R')
            {
            	cout << "PLAYER 1 WIN:)" <<endl;
            	end = true;
            }
        	else if(board[j][i]=='R' && board[j-1][i]=='R' && board[j-2][i]=='R' && board[j-3][i]=='R')
            {
            	cout << "PLAYER 1 WIN:)" <<endl;
            	end = true;
            }
 		
        	else if(board[j][i]=='B' && board[j-1][i-1]=='B' && board[j-2][i-2]=='B' && board[j-3][i-3]=='B')
            {
            	end = true;
            	cout << "pc WIN!" <<endl;
            }


			
		}
	}
}
void player_turn()
{
	 int player = 1;
	 
    while(end==false)
    {
    cout << "PLAYER " << player << ": ";
    cin >> choice;
        if (choice>0 && choice<8)
        {
            
            check(choice);
            //cpu_turn(board);
            display_board();
            if (player == 1)
            {
            	//cpu_turn(board);
                
            }
            else
            {
                player--;
            }
        }
    else
        {
    cout << "WRONG CHOICE!" <<endl;
        }
        win();
	
}
}
int main(){
	cout << "welcome to connect 4!"<<endl;
	display_board();
	player_turn();
	
	
}


