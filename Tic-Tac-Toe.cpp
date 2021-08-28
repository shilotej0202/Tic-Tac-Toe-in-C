#include<stdio.h>  
char board[3][3]; //declaring the board 
void init(){//displaying the format
	char ar[9] = {'1','2','3','4','5','6','7','8','9'};
	int a = 0;
	for(int i = 0; i < 3;i++){	
		for(int j = 0;j < 3;j++){
			board[i][j] = ar[a];
			a++;
		}
	}
}
void Display(){ //diplay of board
for(int i=0; i<3; i++){  
printf("\n"); 
printf("\t-------------------");
printf("\n");
for(int j=0; j<3; j++) 
{
 printf("\t|%c|",board[i][j]); 		
} 
} 
printf("\n\t-------------------");
}  
void instructions()//rules of the game
{printf("\n\t Tic-Tac-Toe"); 
printf("\n\tWelcome"); 
 printf("\nChoose a cell numbered from 1 to 9 as below"" and play"); 
	int b; 
	for(int i=10; i>0; i--){
		b=i;
	}
printf("%d",b);
printf("\n"); 
for(int i=0; i<3; i++){  
printf("\n"); 
printf("\t-------------------");
printf("\n");
for(int j=0; j<3; j++) 
{
 printf("\t|%d|",b,board[i][j]); 
 b++;		
} 
} 
printf("\n\t-------------------");
}  
//conditions of winning
bool row_crossed(){ 
for (int i=0; i<3; i++) 
{ 
        if (board[i][0] == board[i][1] && 
            board[i][0] == board[i][2] &&board[i][0]!=' ') { 
            return (true);
			}
			
			}
        return (false);
}  
bool column_crossed(){
	 for (int i=0; i<3; i++) 
    { 
        if (board[0][i] == board[1][i] && 
            board[0][i] == board[2][i] &&board[0][i]!=' ' ) {
            return (true); 	
			}
            
    } 
    return(false); 

}
int diagonally_crossed(){ 
 if (board[0][0] == board[1][1] && 
        board[0][0] == board[2][2] &&board[0][0]!=' ') 
         return(true); 
          
		
else if (board[0][2] == board[1][1] && 
        board[0][2] == board[2][0] &&board[0][2]!=' ') 
       {
		 return(true); 
	   }
 
else {return(false); }
	
} 
//end of the game
bool gameover(){ 
return(row_crossed()||column_crossed()||diagonally_crossed());  
printf("Game over");

}
//input of the players 
void player_1(){ 
int pos;
printf("\n player_1 enter the position:"); 
scanf("%d", &pos); 
if(pos==1 && board[0][0] == '1'){ 
board[0][0]='x';
Display(); 
}
else if(pos==2&& board[0][1]=='2'){ 
board[0][1]='x';
Display(); 
}
else if(pos==3&& board[0][2]=='3'){ 
board[0][2]='x';
Display(); 
}
else if(pos==4&& board[1][0]=='4'){ 
board[1][0]='x';
Display();
}
else if(pos==5&& board[1][1]=='5'){ 
board[1][1]='x';
Display(); 
}
else if(pos==6&& board[1][2]=='6'){ 
board[1][2]='x'; 
Display(); 
}
else if(pos==7&& board[2][0]=='7'){ 
board[2][0]='x'; 
Display(); 
}
else if(pos==8&& board[2][1]=='8'){ 
board[2][1]='x'; 
Display(); 
}
else if(pos==9&& board[2][2]=='9'){ 
board[2][2]='x'; 
Display();
}
}
void player_2(){ 
int pos;
printf("\nplayer_2 enter the position:"); 
scanf("%d", &pos); 
if(pos==1&&board[0][0]=='1'){ 
board[0][0]='o'; 
Display(); 
}
else if(pos==2&& board[0][1]=='2'){ 
board[0][1]='o';
Display();
}
else if(pos==3&& board[0][2]=='3'){ 
board[0][2]='o';
Display();
}
else if(pos==4&& board[1][0]=='4'){ 
board[1][0]='o';
Display();
} 
else if(pos==5&& board[1][1]=='5'){ 
board[1][1]='o';
Display();
}
else if(pos==6&& board[1][2]=='6'){ 
board[1][2]='o';
Display();
}
else if(pos==7&& board[2][0]=='7'){ 
board[2][0]='o';
Display();
}
else if(pos==8&& board[2][1]=='8'){ 
board[2][1]='o';
Display(); 
}
else if(pos==9&& board[2][2]=='9'){ 
board[2][2]='o'; 
Display();
}
} 

void Turn(){  
int c=0;
while(c<4 && gameover()==false){
c++;
player_1();
if(gameover() == true){
    break;
}
player_2();
} 
}
bool check(){
if(board[0][0] == board[1][1] && 
        board[0][0] == board[2][2] &&board[0][0]=='x') { 
        return (true);
		}
else if (board[0][2] == board[1][1] && 
        board[1][1] == board[2][0] && board[0][2]=='x') 
       {
		 return(true); 
	   } 
else{ 
return (false);
}
} 
bool player_1rowcondition(){ 
for (int i=0; i<3; i++) 
{ 
        if (board[i][0] == board[i][1] && 
            board[i][0] == board[i][2] &&board[i][0]=='x') { 
            return (true);
			}
			
			}
			return false;

      
}
bool player_1coloumncondition(){ 
	 for (int i=0; i<3; i++) 
    { 
        if (board[0][i] == board[1][i] && 
            board[0][i] == board[2][i] &&board[0][i]=='x' ) {
            return (true); 	
			}
            
    }  
    return false;
} 



void declarewinner(){ //declaration of winner
if(row_crossed()==true||column_crossed()==true||diagonally_crossed()==true){ 
if(player_1rowcondition()==true||player_1coloumncondition()==true||check()==true){ 
printf("\n Congratulations !player_1 won");
}
else if(player_1rowcondition()!=true||player_1coloumncondition()!=true||check()!=true){ 
printf("\nCongratulations !player_2 won");
} 
} 
else{ 
printf("\n Match drawn"); 
} 

}


void playTicTacToe(){  
instructions();    
Turn();
declarewinner(); 
} 
int main(){
	init();
playTicTacToe(); 
printf("\n Game over");
}
