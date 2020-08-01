#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
int P1a[5];
int P1o[5];
int P2a[5];
int P2o[5];
char matrix[3][3];
int P1choice[5];
int P2choice[5];
char player1NAME[20];
char player2NAME[20];
int Player1DATA(int,char);
int Player2DATA(int,char);
void display();
int random();
int main()
{
     FILE *fptr;
     int q;

     int i,j,k=1,l,toss,choice,f;
     int  n;
     time_t t;
     char ch;
     char ch1;
     char ch2;

     fptr = fopen("emp.rec", "r");

    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
   while(1)
   {
       ch=fgetc(fptr);
       if(ch==EOF)
        break;
       printf("%c",ch);


   }
   fclose(fptr);


     puts("enter name of player");
     gets(player1NAME);
     printf("is our first man\n");
     puts("enter the  challenger");
     gets(player2NAME);
     printf(" is the challenger");
     fptr = fopen("emp.rec", "a");
      if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
    fprintf(fptr, "Name of first player    = %s\n",player1NAME);
    fprintf(fptr, "Name of second player   = %s\n",player2NAME);
    fclose(fptr);


    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {

               matrix[i][j]=k++;


        }
    }
     printf("Lets play something mate in Season of lockdown \"CHALIYE SHURU KARTE HAIN\" %0.2c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c \n",2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1);
     printf("Now we will have a toss and lets see which symbols who gets \"Lets tye fun begin\" press 1 for the toss");
     scanf("%d",&toss);
     if(toss==1)
     {


     l=random();
     if(l==1)
     {
         printf(" \"Toss done sir\"  %c %c %s gets O and %s  gets X\n",1,1,player1NAME,player2NAME);
         ch2='X';
         ch1='O';
     }
     else
     {
         printf("toss done sir\" %c %c %s gets O and %s gets X\n",1,1,player2NAME,player2NAME);
         ch2='O';
         ch1='X';
     }
    }
    while(1)
    {

        printf("player 1 please enter the number u wanna mark \n");
        display();
        scanf("%d",choice);
        f=Player1DATA(choice,ch1);
        if(f==1)
            printf("winner is player1");

            break;

       printf("player 2 please enter the number u wanna mark ");
        scanf("%d",choice);
        f=Player2DATA(choice,ch2);
        if(f==2)
            printf("winner is player2");
            break;


    }
    if(f==1)
    {
    fptr = fopen("emp.rec", "a");
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
     fprintf(fptr, "winner is = %s\n", player1NAME);
     fprintf(fptr, "loser is = %s\n", player2NAME);
     fclose(fptr);
    }
    else if(f==2)
    {

    fptr = fopen("emp.rec", "a");
    if (fptr == NULL)
    {
        printf("File does not exists \n");
        return;
    }
     fprintf(fptr, "winner is = %s\n", player2NAME);
     fprintf(fptr, "loser is = %s\n", player1NAME);
     fclose(fptr);

    }
    else
    {
        fprintf(fptr,"its a draw GO HOME    GAME OVER");
    }
    display();
    return 0;
}
void display()
{   printf("please enter a number which you have not entered before OR I WILL END THE GAME BUDDIES");
    printf("\t     |     |   \n");
     printf("\t   %d |   %d |   %d \n" ,matrix[0][0],matrix[0][1],matrix[0][2]);


    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");

    printf("\t     |     |   \n");
    printf("\t   %d |  %d  |   %d \n",matrix[1][0],matrix[1][1],matrix[1][2]);

    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t   %d |  %d  |   %d \n",matrix[2][0],matrix[2][1],matrix[2][2]);

    printf("\t     |     |   \n");

    printf("\t     |     |     \n\n");
}
int random()
{

   int i, n,b;
   time_t t;

   n = 2;

   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 5 random numbers from 0 to 49 */
   for( i = 0 ; i < 2 ; i++ )
   {
      b=rand() % 2;
      return b;
   }
}
int Player1DATA(int choice,char ch1)
{
    int a,o,d;
    static int i=0;
    int j;
    int x=0,p=0,z=0,v=0,y=0;
    if(i==0)
    {
        P1choice[i]=choice;


    }
    for(j=0;j<i;j++)
    {
        if(P1choice[j]!=choice)
            P1choice[i]=choice;
        else
        {
            printf("u cheated so punished program terminated");
            d=50;
            assert(d<10);
        }
    }

    switch(choice)
    {
    case 1:
        a=0;
        o=0;
        P1a[i]=a;
        P1o[i]=o;
        if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch1;
        }

        display();
        break;


    case 2:
        a=0;
        o=1;
        P1a[i]=a;
        P1o[i]=o;
        if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch1;
        }
        display();
        break;
    case 3:
        a=0;
        o=2;
        P1a[i]=a;
        P1o[i]=o;
         if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch1;
        }
                display();
        break;

    case 4:
         a=1;
        o=0;
        P1a[i]=a;
        P1o[i]=o;
         if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch1;
        }
        display();
        break;

    case 5:
         a=1;
        o=1;
        P1a[i]=a;
        P1o[i]=o;
         if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch1;
        }
        display();
        break;

    case 6:
         a=1;
        o=2;
        P1a[i]=a;
        P1o[i]=o;
         if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch1;
        }
        display();
        break;
    case 7:
         a=2;
        o=0;
        P1a[i]=a;
        P1o[i]=o;
        if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
        matrix[a][o]=ch1;
        }
        display();
        break;
    case 8:
         a=2;
        o=1;
        P1a[i]=a;
        P1o[i]=o;
         if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch1;
        }
        display();
        break;

    case 9:
         a=2;
        o=2;
        P1a[i]=a;
        P1o[i]=o;
         if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch1;
        }
        display();
        break;
    default:
        printf("none please enter correct digit");

      }
    i++;

     for(int p=i;p>=0;p--)
     {

         if(P1a[p]==a)
            x++;
         if(P1o[p]==o)
            z++;
         if(P1a[p]==P1o[p])
            v++;
         if((abs(P1a[p]-P1o[p])==2))
         {
             if(matrix[a][o]==ch1)
                y++;
         }
     }
     if(x==3||z==3||v==3||y==1)
     {
     printf("Player 1 wins");
            return 1;
     }
    else
        return 0;

    }
    int Player2DATA(int choice,char ch2)
    {
    int a,o,d;
    static int i1=0;
    int j;
    int x=0,p=0,z=0,v=0,y=0;
    if(i1==0)
    {
        P2choice[i1]=choice;


    }
    for(j=0;j<i1;j++)
    {
       if(P2choice[j]!=choice)
         P2choice[i1]=choice;
        else
        {
            printf("u cheated so punished program terminated");
            d=10;
            assert(d<10);
        }


    }

    switch(choice)
    {
    case 1:
        a=0;
        o=0;
        P2a[i1]=a;
        P2o[i1]=o;
        if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch2;
        }

        display();
        break;


    case 2:
         a=0;
        o=1;
        P2a[i1]=a;
        P2o[i1]=o;
        if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch2;
        }
        display();
        break;
    case 3:
         a=0;
        o=2;
        P2a[i1]=a;
        P2o[i1]=o;
         if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch2;
        }
                display();
        break;

    case 4:
         a=1;
        o=0;
        P2a[i1]=a;
        P2o[i1]=o;
         if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch2;
        }
        display();
        break;

    case 5:
         a=1;
        o=1;
        P2a[i1]=a;
        P2o[i1]=o;
         if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch2;
        }
        display();
        break;

    case 6:
         a=1;
        o=2;
        P2a[i1]=a;
        P2o[i1]=o;
         if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch2;
        }
        display();
        break;
    case 7:
         a=2;
        o=0;
        P2a[i1]=a;
        P2o[i1]=o;
        if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
        matrix[a][o]=ch2;
        }
        display();
        break;
    case 8:
         a=2;
        o=1;
        P2a[i1]=a;
        P2o[i1]=o;
         if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch2;
        }
        display();
        break;

    case 9:
         a=2;
        o=2;
        P2a[i1]=a;
        P2o[i1]=o;
         if(matrix[a][o]!='X'||matrix[a][o]!='O')
        {
           matrix[a][o]=ch2;
        }
        display();
        break;
    default:
        printf("none please enter correct digit");

      }
    i1++;

     for( p=i1;p>=0;p--)
     {

         if(P2a[p]==a)
            x++;
         if(P2o[p]==o)
            z++;
         if(P2a[p]==P2o[p])
            v++;
         if((abs(P2a[p]-P2o[p])==2))
         {
             if(matrix[a][o]==ch2)
                y++;
         }
     }
       if(x==3||z==3||v==3||y==1)
     {
     printf("Player 2 wins");
            return 2;
     }
    else
        return 0;
    }














