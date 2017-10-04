#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int comp_r,comp_c,r,c;
char b[3][3]={'_','_','_','_','_','_','_','_','_'};
void board()
{
for(int i =0;i<3;i++)
{
for(int j =0;j<3;j++)
{
cout<<b[i][j]<<"	 ";
}
cout<<endl;
}
}
void playc(int r,int c)
{
if(r==0&&c==0)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
playc(r,c);
}
else
{
b[0][0]='X';
}
}
else if(r==0&&c==1)
{
if((b[0][1]=='O')||(b[0][1]=='X'))
{
playc(r,c);
}
else
{
b[0][1]='X';
}
}
else if(r==0&&c==2)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
playc(r,c);
}
else
{
b[0][2]='X';
}
}
else if(r==1&&c==0)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
playc(r,c);
}
else
{
b[1][0]='X';
}
}
else if(r==1&&c==1)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
playc(r,c);
}
else
{
b[1][1]='X';
}
}
else if(r==1&&c==2)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
playc(r,c);
}
else
{
b[1][2]='X';
}
}
else if(r==2&&c==0)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
playc(r,c);
}
else
{
b[2][0]='X';
}
}
else if(r==2&&c==1)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
playc(r,c);
}
else
{
b[2][1]='X';
}
}
else if(r==2&&c==2)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
playc(r,c);
}
else
{
b[2][2]='X';
}
}
board();
}
void comp()
{
srand(time(NULL));
comp_r=rand()%3;
comp_c=rand()%3;
playc(comp_r,comp_c);
}
void play(int r,int c)
{
if(r==0&&c==0)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
play(r,c);
}
else
{
b[0][0]='O';
}
}
else if(r==0&&c==1)
{
if((b[0][1]=='O')||(b[0][1]=='X'))
{
play(r,c);
}
else
{
b[0][1]='O';
}
}
else if(r==0&&c==2)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
play(r,c);
}
else
{
b[0][2]='O';
}
}
else if(r==1&&c==0)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
play(r,c);
}
else
{
b[1][0]='O';
}
}
else if(r==1&&c==1)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
play(r,c);
}
else
{
b[1][1]='O';
}
}
else if(r==1&&c==2)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
play(r,c);
}
else
{
b[1][2]='O';
}
}
else if(r==2&&c==0)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
play(r,c);
}
else
{
b[2][0]='O';
}
}
else if(r==2&&c==1)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
play(r,c);
}
else
{
b[2][1]='O';
}
}
else if(r==2&&c==2)
{
if((b[0][0]=='O')||(b[0][0]=='X'))
{
play(r,c);
}
else
{
b[2][2]='O';
}
}
else
{
cout<<"enter row again"<<endl;
cin>>r;
cout<<"enter column again"<<endl;
cin>>c;
play(r,c);
}
board();
comp();
}
void win()
{
if((b[0][0]=='O'&&b[0][1]=='O'&&b[0][2]=='O')||(b[0][0]=='O'&&b[1][0]&&b[2][0]=='O')||(b[0][0]=='O'&&b[1][1]=='O'&&b[2][2]=='O')||(b[0][1]=='O'&&b[1][1]=='O'&&b[2][1]=='O')||(b[0][0]=='O'&&b[1][2]=='O'&&b[2][2]=='O')||(b[0][2]=='O'&&b[1][1]=='O'&&b[2][0]=='O')||(b[1][0]=='O'&&b[1][1]=='O'&&b[1][2]=='O')||(b[2][0]=='O'&&b[2][1]=='O'&&b[2][2]=='O'))
{
cout<<"player wins"<<endl;
//exit();
return;
}
else
{
cout<<"next chance"<<endl;
}
}
void ask()
{
cout<<"choose the row"<<endl;
cin>>r;
cout<<"choose the column"<<endl;
cin>>c;
play(r,c);
//comp();
win();
ask();
}

int main()
{
cout<<"			TIC TAC TOE"<<endl;
cout<<"Welcome to the game"<<endl;
cout<<"Choose the coordinates of the place where to want to circle"<<endl;
board();
ask();
return 0;
}

