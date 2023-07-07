#include<stdio.h>
#include<conio.h>
char box[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkwin();
void board();
int main()
{
int i,choice,player=1;
char put;
do
{
board();
player=(player%2)?1:2;
printf("Player %d, enter a number: ",player);
scanf("%d",&choice);
put=(player==1)?'X':'O';
if(choice==1&&box[1]=='1')
box[1]=put;
else if(choice==2&&box[2]=='2')
box[2]=put;
else if(choice==3&&box[3]=='3')
box[3]=put;
else if(choice==4&&box[4]=='4')
box[4]=put;
else if(choice==5&&box[5]=='5')
box[5]=put;
else if(choice==6&&box[6]=='6')
box[6]=put;
else if(choice==7&&box[7]=='7')
box[7]=put;
else if(choice==8&&box[8]=='8')
box[8]=put;
else if(choice==9&&box[9]=='9')
box[9]=put;
else
{
printf("Wrong move!!!");
player--;
getch();
}
i=checkwin();
player++;
}
while(i== -1);
board();
if(i==1)
printf("       ----------\aPlayer %d wins the game. Congratulations!!!----------",--player);
else
printf("       ----------\aIts a draw game!----------");
getch();
return 0;
}
int checkwin()
{
if(box[1]==box[2]&&box[2]==box[3])
return 1;
else if(box[1]==box[4]&&box[4]==box[7])
return 1;
else if(box[1]==box[5]&&box[5]==box[9])
return 1;
else if(box[2]==box[5]&&box[5]==box[8])
return 1;
else if(box[3]==box[5]&&box[5]==box[7])
return 1;
else if(box[3]==box[6]&&box[6]==box[9])
return 1;
else if(box[4]==box[5]&&box[5]==box[6])
return 1;
else if(box[7]==box[8]&&box[8]==box[9])
return 1;
else if(box[1]!='1'&&box[2]!='2'&&box[3]!='3'&&box[4]!='4'&&box[5]!='5'&&box[6]!='6'&&box[7]!='7'&&box[8]!='8'&&box[9]!='9')
return 0;
else
return -1;
}
void board()
{
system("cls");
printf("\n\n\t                           TIC TAC TOE               \n\n");
printf("Player 1 (X) - Player 2 (O)\n\n\n");
printf("   |   |    \n");
printf("%c  | %c | %c\n",box[1],box[2],box[3]);
printf("___|___|___\n");
printf("   |   |   \n");
printf("%c  | %c | %c \n",box[4],box[5],box[6]);
printf("___|___|___\n");
printf("   |   |   \n");
printf("%c  | %c | %c \n",box[7],box[8],box[9]);
printf("   |   |  \n\n");
}








