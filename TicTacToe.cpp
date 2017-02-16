//Made By SHASHANK KUMAR DWIVEDY on Code::Blocks
//Roll Number : 06914803115
//Group : I2
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int checkwin(char a[3][3])
{
    if(a[0][0]==a[0][1] && a[0][0] == a[0][2]&& a[0][0]!='\0')
        return 1;
    else if(a[1][0]==a[1][1] && a[1][1]==a[1][2] && a[1][0]!='\0')
        return 1;
    else if(a[2][0]==a[2][1] && a[2][0]==a[2][2] && a[2][0]!='\0')
        return 1;
    else if(a[0][0]==a[1][1] && a[0][0]==a[2][2] && a[0][0]!='\0')
        return 1;
    else if(a[0][2]==a[1][1] && a[0][2]==a[2][0] && a[0][2]!='\0')
        return 1;
    else if(a[0][0]==a[1][0] && a[0][0]==a[2][0]&& a[0][0]!='\0')
        return 1;
    else if(a[0][1]==a[1][1] && a[0][1]==a[2][1] && a[0][1]!='\0')
        return 1;
    else if(a[0][2]==a[1][2] && a[0][2]==a[2][2] && a[0][2]!='\0')
        return 1;
    else
        return 0;

}

void display(char a[3][3])
{
            cout<<"\n\t     |     |     \n";
            cout<<"\t  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<"  \n";
            cout<<"\t_____|_____|_____\n";
            cout<<"\t     |     |     \n";
            cout<<"\t  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<"  \n";
            cout<<"\t_____|_____|_____\n";
            cout<<"\t     |     |     \n";
            cout<<"\t  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<"  \n";
            cout<<"\t     |     |     \n";

    getch();
}

int main()
{
    int i,r,c;
    char a[3][3],f,s;
    cout<<"------------TIC TAC TOE------------\n            Let's Play\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]='\0';
        }

    }
    cout<<"Whats the choice of first player(O or X)";
    cin>>f;
    if(f=='O'||f=='o' || f==0)
        {
            s='X';
            f='O';
        }
    else
        {
            s='O';
            f='X';
        }
    for(int i=0;i<9;i++)
    {
        int p=(i%2)+1;
        display(a);
        cout<<"\n\tPlayer "<<p<<" :";
        cin>>r>>c;
        while(a[r-1][c-1]!='\0')
           {
             cout<<"Incorrect Choice... Enter New Position!!!\n\tPlayer "<<p<<" :";
             cin>>r>>c;
           }
        if(i%2==0)
            a[r-1][c-1]=f;
        else
            a[r-1][c-1]=s;
        display(a);
        if(checkwin(a)==1)
        {
            cout<<"Player "<<p<<" won!!!!!";
            getch();
            break;
        }
        system("cls");
    }
}
