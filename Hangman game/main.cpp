#include <iostream>
#include<string>
#include<windows.h>

void demo(void);
int work(void);
using namespace std;

int main()
{
    system("Color B");
    cout<<"\n\n\n\t\t\t\t\tWelcome to Hangman Game"<<endl;
    Sleep(5000);
    system("cls");
    system("Color A");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
    cout<<"\n\n\t\t\t\t   Create a word with given letter"<<endl<<endl<<endl;
    demo();
    cout<<"\n\n\n\t\tWarning: If the man build completely, then you fail and game over";
    for(int i=1; i<=9; i++)
    {
        if(i<=5)
        {
            cout<<"!";
        }
        else
        {
            cout<<"";
        }
        Sleep(1000);
    }
    system("cls");
    cout<<"\n\t\tGame start Now!!"<<endl;
    cout<<"\n\t\tEnter 5 letters one by one to create a word, you can try 7 times."<<endl;
    cout<<"\n\n\t\tThe letters are given below"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout<<"\n\n\t\t q, e, p, r, t, n, z"<<endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout<<"\n\n\t\t==>>X X X X X"<<endl;
    work();
    return 0;
}

void demo(void)
{
    Sleep(500);
    cout<<"\t\t\t\t\t\t   O"<<endl<<endl;
    Sleep(500);
    cout<<" \t\t\t\t\t\t / ";
    Sleep(500);
    cout<<"| ";
    Sleep(500);
    cout<<"\\"<<endl<<endl;
    Sleep(500);
    cout<<" \t\t\t\t\t\t / ";
    Sleep(500);
    cout<<"| ";
    Sleep(500);
    cout<<"\\";
    Sleep(500);
}
int work(void)
{
    int coun=5;
    int i=3,j=2,k=2,l=2;
    string ex("X X X X X");
    string check("e n t e r");
again:

    if(ex==check)
    {
        goto extt;
    }
    char input;
    cout<<"Enter a character>> ";
    cin>>input;
    switch (input)
    {
    case 'e':
        if(i==3)
        {
            cout<<ex.replace(0,1,"e")<<endl;
            cout<<"Wow!!!, Letter match"<<endl;
        }
        if(i==2)
        {
            cout<<ex.replace(6,1,"e")<<endl;
            cout<<"Wow!!!, Letter match"<<endl;
        }
        if(i<2)
        {
            goto here;
        }
        i--;
        break;
    case 'n':
        if(j==2)
        {
            cout<<ex.replace(2,1,"n")<<endl;
            cout<<"Wow!!!, Letter match"<<endl;
            j--;
        }
        else
        {
            goto here;
        }
        break;
    case 't':
        if(k==2)
        {
            cout<<ex.replace(4,1,"t")<<endl;
            cout<<"Wow!!!, Letter match"<<endl;
            k--;
        }
        else
        {
            goto here;
        }
        break;
    case 'r':
        if(l==2)
        {
            cout<<ex.replace(8,1,"r")<<endl;
            cout<<"Wow!!!, Letter match"<<endl;
            l--;
        }
        else
        {
            goto here;
        }
        break;
    default:
        system("cls");
        cout<<ex<<endl;
here:
        if(coun==5)
        {
            cout<<"  O"<<endl;;
        }
        else if(coun==6)
        {
            cout<<"  O"<<endl<<endl;
            cout<<"/"<<endl;
        }
        else if(coun==7)
        {
            cout<<"  O"<<endl<<endl;
            cout<<"/ |"<<endl;
        }
        else if(coun==8)
        {
            cout<<"  O"<<endl<<endl;
            cout<<"/ | \\"<<endl<<endl;
        }
        else if(coun==9)
        {
            cout<<"  O"<<endl<<endl;
            cout<<"/ | \\"<<endl<<endl;
            cout<<"/"<<endl;
        }
        else if(coun==10)
        {
            cout<<"  O"<<endl<<endl;
            cout<<"/ | \\"<<endl<<endl;
            cout<<"/ |"<<endl;
            cout<<endl<<"One more time"<<endl;
        }
        else
        {
            cout<<"  O"<<endl<<endl;
            cout<<"/ | \\"<<endl<<endl;
            cout<<"/ | \\"<<endl;
            cout<<"You Are Finished!!";
            goto ext;
        }
        coun++;
        break;
    }
    //system("cls");
    //cout<<ex<<endl;
    cout<<endl;
    goto again;
extt:
    cout<<"Wow!!, You gain the success!!"<<endl<<"Thank you.";
ext:
    Sleep(5000);
    return 1;
}
