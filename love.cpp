#include<iostream.h>
#include<windows.h>
#include<stdio.h>
#define stoptimeshort  40
#define stoptimelong   100
int main()
{
    //////////////////////
    int cycle;
    int cycle2;
    int cycle3;
    int cycle4;
    char ch[10];
    int f[9][36]={  0,1,1,1,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
                    0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,
                    0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,
                    0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,
                    0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,1,
                    0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
                    0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,
                    0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,
                    0,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0
                 };
    int s[9][21]={  0,0,0,1,1,0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,0,
                    0,1,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,1,0,
                    1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,1,
                    1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,
                    0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,
                    0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,
                    0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,
                    0,0,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0,
                    0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,
                 };
    int t[9][22]={  0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,
                    0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,
                    1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,
                    1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,
                    0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,
                    0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,
                    0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,
                    0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0,
                    0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
                 };
    system ( "title I Love You" );
    //////////////////////////////////
    system("color fc");
    printf("\1","%s","�Ҽ�¥��׳��Ŀ��\n\n\n");
	Sleep ( stoptimelong );
	printf("\1","%s","����Ѱ˼�޵�·��\n\n\n");
	Sleep ( stoptimelong );
	printf("\1","%s","�仨��ˮ�ණ����\n\n\n");
	Sleep ( stoptimelong );
	printf("\1","%s","�³���������롣\n\n\n");
	Sleep ( stoptimelong );  
    printf("\1","%s","��ɽ������ѩ�࣬\n\n\n");
    Sleep ( stoptimelong );
    printf("\1","%s","�����������ʱ��\n\n\n");
    Sleep ( stoptimelong );
    printf("\1","%s","ǧ��ɢ����������\n\n\n");
    Sleep ( stoptimelong );
	printf("\1","%s","\n"); 
    printf ( "\1","%s","��" );
    Sleep ( stoptimeshort );
    printf ( "\1","%s","ʵ\n" );
    ////////////////////////////////
    printf ( "%s","        " );
    system ( "color 72" );
    Sleep ( stoptimelong );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","һ" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��\n" );
    ///////////////////////////
    printf ( "%s","        " );
    system ( "color 79" );
    Sleep ( stoptimelong );
    printf ( "%s","һ" );
    Sleep ( stoptimeshort );
    printf ( "%s","ֱ" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��\n" );
    /////////////////////////////
    printf ( "%s","        " );
    system ( "color 7c" );
    Sleep ( stoptimelong );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��\n" );
    ///////////////////////////////
    printf ( "%s","        " );
    system ( "color 7d" );
    Sleep ( stoptimelong );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","û" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","˵\n" );
    ///////////////////////////////
    printf ( "%s","        " );
    system ( "color 7e" );
    Sleep ( stoptimelong );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��\n" );
    //////////////////////////////
    printf ( "%s","        " );
    system ( "color 7a" );
    Sleep ( stoptimelong );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��\n" );
    ///////////////////////////////
    printf ( "%s","        " );
    system ( "color 7b" );
    Sleep ( stoptimelong );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","Ҫ" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","˵:\n" );
    ///////////////////////////////
    printf ( "%s","        " );
    system ( "color 79" );
    Sleep ( stoptimelong );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��\n" );
    /////////////////////////////////
    printf ( "%s","        " );
    system ( "color 72" );
    Sleep ( stoptimelong );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��\n" );
    //////////////////////////////////
    Sleep ( stoptimelong );
    system ( "color fc" );
    for ( int i=0; i<9; i++ )
    {
        cout<<"        ";
        for ( int j=0; j<36; j++ )
        {
            if ( f[i][j]==0 )
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
        Sleep ( 100 );
    }
    /////////////////////////////////////
line:
    printf ( "%s","        " );
    Sleep ( stoptimelong );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","Ը" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","��" );
    Sleep ( stoptimeshort );
    printf ( "%s","?(Y/N)" );
    ////////////////////////////////////
    cin>>ch;
    Sleep ( stoptimelong );
    if ( ch[0]=='y'||ch[0]=='Y' )
    {
        system ( "color fc" );
        for ( int i=0; i<9; i++ )
        {
            cout<<"        ";
            for ( int j=0; j<21; j++ )
            {
                if ( s[i][j]==0 )
                    cout<<" ";
                else
                    cout<<"*";
            }
            cout<<endl;
            Sleep ( 100 );
        }
        Sleep ( 3000 );
    }
    else
    {
        if ( ch[0]=='n'||ch[0]=='N' )
        {
            system ( "color 0f" );
            for ( int i=0; i<9; i++ )
            {
                cout<<"        ";
                for ( int j=0; j<22; j++ )
                {
                    if ( t[i][j]==0 )
                        cout<<" ";
                    else
                        cout<<"*";
                }
                cout<<endl;
                Sleep ( 100 );
            }
            printf ( "%s","        " );
            Sleep ( stoptimelong );
            printf ( "%s","��" );
            Sleep ( stoptimeshort );
            printf ( "%s","��" );
            Sleep ( stoptimeshort );
            printf ( "%s","��" );
		 

    system ( "color 0f" );
    system ( "pause" );
    return 0;
}
}











 
