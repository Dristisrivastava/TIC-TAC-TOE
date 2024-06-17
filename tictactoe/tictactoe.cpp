#include<iostream>
#include<string>
using namespace std;

char board[10]={'0','1','2','3','4','5','6','7','8','9'};

void display(){
    cout<<endl<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" "<<board[1]<<" | "<<board[2]<<" | "<<board[3]<<"  "<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<" "<<board[4]<<" | "<<board[5]<<" | "<<board[6]<<"  "<<endl;
    cout<<"___|___|___"<<endl;
    cout<<"   |   |   "<<endl;
     cout<<" "<<board[7]<<" | "<<board[8]<<" | "<<board[9]<<"  "<<endl;
    cout<<"   |   |   "<<endl<<endl;
}

int main(){
    //system("cls");
    int choice;
    char px;
    int round=1;
    cout<<"TIC TAC TOE"<<endl<<endl;
    cout<<"Strating The Game.."<<endl<<endl;
    cout<<"Player 1 gets X Player 2 gets o"<<endl;
    for (int i = 1; i < 10; i++)
    {
        display();
        if (round%2)
        {
            cout<<"Player 1 "<<endl;
            px='X';
        }
        else
        {
            cout<<"Player 2 "<<endl;
            px='o';
        }
        round++;
        cout<<"Enter The Position "<<endl;
        cin>>choice;
        //filling the box
        if (choice==1 && board[1]=='1')
        {
            board[1]=px;
        }
        else if(choice==2 && board[2]=='2')
        {
            board[2]=px;
        }   
        else if(choice==3 && board[3]=='3')
        {
            board[3]=px;
        } 
        else if(choice==4 && board[4]=='4')
        {
            board[4]=px;
        } 
        else if(choice==5 && board[5]=='5')
        {
            board[5]=px;
        } 
        else if(choice==6 && board[6]=='6')
        {
            board[6]=px;
        }
        else if(choice==7 && board[7]=='7')
        {
            board[7]=px;
        } 
        else if(choice==8 && board[8]=='8')
        {
            board[8]=px;
        } 
        else if(choice==9 && board[9]=='9')
        {
            board[9]=px;
        } 
        else
        {
            cout<<"invalid choice "<<endl;
            i--;
            round--;
        }
        // checking  
        if (board[1]==board[2] && board[2]==board[3])
        {
            break;
        }
        else if (board[4]==board[5] && board[5]==board[6])
        {
            break;
        }
        else if (board[7]==board[8] && board[8]==board[9])
        {
            break;
        }
        else if (board[1]==board[5] && board[5]==board[9])
        {
            break;
        }
        else if (board[3]==board[5] && board[5]==board[7])
        {
            break;
        }
        else if (board[1]==board[4] && board[4]==board[7])
        {
            break;
        }
        else if (board[2]==board[5] && board[5]==board[8])
        {
            break;
        }
        else if (board[3]==board[6] && board[6]==board[9])
        {
            break;
        }
    }
    display();
    if (round==10)
    {
        cout<<"Its a Draw"<<endl;
    }
    else if(px=='X'){
        cout<<"Player 1 Win!!"<<endl;
    }
    else{
        cout<<"Player 2 Win!!"<<endl;
    }
    cout<<"Game Ended.";
    return 0;
}