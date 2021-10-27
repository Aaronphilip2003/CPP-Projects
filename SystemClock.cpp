// System Clock starting from a specified time

#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
    int h,s,m,a,err;
    err=a=0;
    while(err==0)
    {
        cout<<"Enter the hour:"<<endl;
        cin>>h;
        cout<<"Enter the minute:"<<endl;
        cin>>m;
        cout<<"Enter the seconds:"<<endl;
        cin>>s;
        if(h<24&&m<60&&s<60)
        err++;
        else
        {
            system("cls");
        }
    }
    while(a==0)
    {
        system("cls");
        cout<<h<<":"<<m<<":"<<s<<endl;
        Sleep(1000);
        s++;
        if(s>59)
        {
            s=0;
            m++;
        }
        if(m>59)
        {
            m=0;
            h++;
        }
        if(h>24)
        {
            h=0;
        }
    }
    return 0;
}
