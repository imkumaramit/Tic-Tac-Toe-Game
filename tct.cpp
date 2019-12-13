
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;
int main()
{
  io
  int p1,p2;
  int progress=1;
  while(progress==1){
  cout<<"\tTIC-TAC-TOE GAME"<<"\n";
  cout<<"\n";
  char game;
  cout<<"Press 'H' for Help | 'M' for Match | 'A' for About | 'E'to Exit"<<"\n";
  cin>>game;


  if(game=='M'||game=='m')
  {

  cout<<"\tTIC-TAC-TOE GAME"<<"\n";
  cout<<"\n";

  char board[3][3]={0};
  int loop=1;
  int count=1;
  int x,y=0;
  int win=0;
  std::vector<int> check;
  std::vector<int>::iterator it;

  while(loop==1)
  {
  for(int i=0;i<3;i++)
    {
      for(int j=0;j<3;j++)
      {
        if(board[i][j]==0)
        cout<<"_ ";
        if(board[i][j]=='X')
        cout<<"X ";
        if(board[i][j]=='O')
        cout<<"O ";
      }
      cout<<"\n";
    }

    //cout<<"\n"<<"Press 'E' to Goto Main Menu"<<"\n";

    if(count%2!=0)
    {
    cout<<"Enter the Postion Player 1:"<<"\n";
    cin>>p1;
    it=find(check.begin(),check.end(),p1);
    if(it!=check.end())
    {cout<<"\n"<<"\tDON'T CHEAT"<<"\n";
    continue;
    }
    check.push_back(p1);
    switch (p1)
    {
      case 1:board[0][0]='X';break;
      case 2:board[0][1]='X';break;
      case 3:board[0][2]='X';break;
      case 4:board[1][0]='X';break;
      case 5:board[1][1]='X';break;
      case 6:board[1][2]='X';break;
      case 7:board[2][0]='X';break;
      case 8:board[2][1]='X';break;
      case 9:board[2][2]='X';break;
    }

    }
    if(count%2==0)
    {
    cout<<"Enter the Postion Player 2:"<<"\n";
    cin>>p2;
    it=find(check.begin(),check.end(),p2);
    if(it!=check.end())
    {cout<<"\n"<<"\tDON'T CHEAT"<<"\n";
    continue;
    }
    check.push_back(p2);
    switch (p2)
    {
      case 1:board[0][0]='O';break;
      case 2:board[0][1]='O';break;
      case 3:board[0][2]='O';break;
      case 4:board[1][0]='O';break;
      case 5:board[1][1]='O';break;
      case 6:board[1][2]='O';break;
      case 7:board[2][0]='O';break;
      case 8:board[2][1]='O';break;
      case 9:board[2][2]='O';break;
    }
    }
    count++;
    cout<<"\n";

    if(board[0][0]=='X'&&board[0][1]=='X'&&board[0][2]=='X')
    win=1;
    if(board[1][0]=='X'&&board[1][1]=='X'&&board[1][2]=='X')
    win=1;
    if(board[2][0]=='X'&&board[2][1]=='X'&&board[2][2]=='X')
    win=1;

    if(board[0][0]=='X'&&board[1][0]=='X'&&board[2][0]=='X')
    win=1;
    if(board[0][1]=='X'&&board[1][1]=='X'&&board[2][1]=='X')
    win=1;
    if(board[0][2]=='X'&&board[1][2]=='X'&&board[2][2]=='X')
    win=1;

    if(board[0][0]=='X'&&board[1][1]=='X'&&board[2][2]=='X')
    win=1;
    if(board[0][2]=='X'&&board[1][1]=='X'&&board[2][0]=='X')
    win=1;

    //player 2

    if(board[0][0]=='O'&&board[0][1]=='O'&&board[0][2]=='O')
    win=2;
    if(board[1][0]=='O'&&board[1][1]=='O'&&board[1][2]=='O')
    win=2;
    if(board[2][0]=='O'&&board[2][1]=='O'&&board[2][2]=='O')
    win=2;

    if(board[0][0]=='O'&&board[1][0]=='O'&&board[2][0]=='O')
    win=2;
    if(board[0][1]=='O'&&board[1][1]=='O'&&board[2][1]=='O')
    win=2;
    if(board[0][2]=='O'&&board[1][2]=='O'&&board[2][2]=='O')
    win=2;

    if(board[0][0]=='O'&&board[1][1]=='O'&&board[2][2]=='O')
    win=2;
    if(board[0][2]=='O'&&board[1][1]=='O'&&board[2][0]=='O')
    win=2;

    if(board[0][0]!=0&&board[0][1]!=0&&board[0][2]!=0&&board[1][0]!=0&&board[1][1]!=0&&board[1][2]!=0&&board[2][0]!=0&&board[2][1]!=0&&board[2][2]!=0)
    win=3;

    if(win>0)
    loop++;






  }

  if(win==1)
  cout<<"\n\t"<<"PLAYER 1 WINS!!!";
  if(win==2)
  cout<<"\n\t"<<"PLAYER 2 WINS!!!";
  if(win==3)
  cout<<"\n\t"<<"MATCH DRAW!!!";
  cout<<"\n";
  cout<<"\n";
}

if(game=='E'||game=='e')
progress++;
if(game=='A'||game=='a')
{
  cout<<"\n";
  cout<<"______________________________________________\n";
  cout<<"\tTIC-TAC-TOE GAME"<<"\n";
  cout<<"\tCopywright 2019"<<"\n";
  cout<<"\tBY AMIT KUMAR"<<"\n";
  cout<<"______________________________________________\n";
  cout<<endl;


}
if(game=='H'||game=='h')
{
  cout<<"\n";
  cout<<"______________________________________________\n";
  cout<<"\n\tRULES OF GAME"<<"\n";
  cout<<"\n1. The game is played on a grid that's 3 squares by 3 squares."<<"\n";
  cout<<"2. You are X, your friend is O. Players take turns putting \ntheir marks in empty squares."<<"\n";
  cout<<"3. The first player to get 3 of her marks in a row (up, down,\n across, or diagonally) is the winner."<<"\n";
  cout<<"4. When all 9 squares are full, the game is over. If no player\n has 3 marks in a row, the game ends in a tie."<<"\n";
  cout<<"______________________________________________\n";
  cout<<endl;

}


}



}
