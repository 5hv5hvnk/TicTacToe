//  main.cpp
//  TicTacToe
//
//  Created by RealFuhrer on 16/04/20.
//  Copyright © 2020 Shashank. All rights reserved.
#include<iostream>
using namespace std;
#define loop(i,n) for(int i=0;i<n;i++)
void Board(char grid[])

{
    cout << "=========================PLAY HERE=========================" << endl;
    cout << endl << "     |     |     " << endl;
    cout << "  " << grid[0] << "  |  " << grid[1] << "  |  " << grid[2] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << grid[3] << "  |  " << grid[4] << "  |  " << grid[5] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << grid[6] << "  |  " << grid[7] << "  |  " << grid[8] << endl;

    cout << "     |     |     " << endl << endl;
}
void NewBoard()

{
    cout << "===========================RULES===========================" << endl<<endl;
    cout<<"1. The game is played on a grid that's 3 squares by 3 squares."<<endl;

    cout<<"2. You are X, your friend (or the computer in this case) is O. Players take turns putting their marks in empty squares."<<endl;

    cout<<"3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner."<<endl;

    cout<<"4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie."<<endl<<endl;
    cout << "=========================THE BOARD=========================" << endl;
    cout << endl << "     |     |     " << endl;
    cout << "  " <<1 << "  |  " << 2<< "  |  " << 3<< endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << 4<< "  |  " << 5 << "  |  " << 6 << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << 7 << "  |  " << 8 << "  |  " << 9 << endl;

    cout << "     |     |     " << endl << endl; 
}
int push(int x,char grid[],int player)
{

    if(grid[x-1]==' ' && player%2==0)
    {   grid[x-1]='X';
        Board(grid);
        player++;
    }
    else if(grid[x-1]==' ' && player%2==1)
        {   grid[x-1]='O';
            Board(grid);
            player++;
        }
    else
    {cout<<" \n I N V A L I D     M O V E \n";
    }
    return player;
}
bool end(bool play,char grid[],int player){
    if(grid[0]==grid[2] && grid [0]==grid[1] && grid[0]!=' ')
    {
        play=false;
        if(grid[0]=='X')
            cout<<"\n P L A Y E R      "<<1<<"    W I N\n";
        else
            cout<<"\n P L A Y E R      "<<2<<"    W I N\n";
    }
    else if(grid[3]==grid[4] && grid [3]==grid[5] && grid[3]!=' ')
        {
            play=false;
            if(grid[3]=='X')
            cout<<"\n P L A Y E R      "<<1<<"    W I N\n";
        else
            cout<<"\n P L A Y E R      "<<2<<"    W I N\n";
        }
    else if(grid[6]==grid[7] && grid [6]==grid[8] && grid[6]!=' ')
    {
        play=false;
        if(grid[6]=='X')
            cout<<"\n P L A Y E R      "<<1<<"    W I N\n";
        else
            cout<<"\n P L A Y E R      "<<2<<"    W I N\n";
    }
    else if(grid[0]==grid[3] && grid [3]==grid[6] && grid[0]!=' ')
    {
        play=false;
        if(grid[0]=='X')
            cout<<"\n P L A Y E R      "<<1<<"    W I N\n";
        else
            cout<<"\n P L A Y E R      "<<2<<"    W I N\n";
    }
    else if(grid[1]==grid[4] && grid [1]==grid[7] && grid[1]!=' ')
    {
        play=false;
        if(grid[1]=='X')
            cout<<"\n P L A Y E R      "<<1<<"    W I N\n";
        else
            cout<<"\n P L A Y E R      "<<2<<"    W I N\n";
    }
    else if(grid[2]==grid[5] && grid [2]==grid[8] && grid[2]!=' ')
    {
        play=false;
        if(grid[2]=='X')
            cout<<"\n P L A Y E R      "<<1<<"    W I N\n";
        else
            cout<<"\n P L A Y E R      "<<2<<"    W I N\n";
    }
    else if(grid[0]==grid[4] && grid [4]==grid[8] && grid[0]!=' ')
    {
        play=false;
        if(grid[0]=='X')
            cout<<"\n P L A Y E R      "<<1<<"    W I N\n";
        else
            cout<<"\n P L A Y E R      "<<2<<"    W I N\n";
    }
    else if(grid[2]==grid[4] && grid [2]==grid[6] && grid[2]!=' ')
    {
        play=false;
        if(grid[2]=='X')
            cout<<"\n P L A Y E R      "<<1<<"    W I N\n";
        else
            cout<<"\n P L A Y E R      "<<2<<"    W I N\n";
    }
    else if (grid[0]!=' ' && grid[1]!=' ' && grid[2]!=' ' && grid[3]!=' ' && grid[4]!=' ' && grid[5]!=' ' && grid[6]!=' ' && grid[7]!=' ' && grid[8]!=' ' )
    {
        play=false;
        cout<<"\n G A M E  E N D E D   W I T H  A   D R A W \n";
    }
        return play;
}

int main()
{
    bool play=true;
    int player=0, input;
    char grid[9];
    NewBoard();
    loop(i,9)
        grid[i]=' ';
    Board(grid);
    
    while(play)
    {
        cin>>input;
        player=push (input,grid,player);
        play=end(play,grid,player);
    }
    return 0;
}
