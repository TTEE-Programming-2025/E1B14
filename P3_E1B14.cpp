#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>
void show(char arr[9][9]){
	printf("\\123456789\n");
	for(int i=0;i<9;i++){
		printf("%d",i+1);
		for(int j=0;j<9;j++){
			printf("%c",arr[i][j]);
		}
		printf("\n");
	} 
}
void change(char arr[9][9],int people){
	int x,y,z,count;
	if(people>=1&&people<=3){
		switch(people){
			case 1:
				while(1){
					x=rand()%(9-(people-1));
					y=rand()%9;
					if(arr[y][x]=='-'){
						arr[y][x]='@';
						break;
					}
				}
				break;
			case 2:
				while(1){
					x=rand()%(9-(people-1));
					y=rand()%9;
					if(arr[y][x]=='-'&&arr[y][x+1]=='-'){
						arr[y][x]='@';
						arr[y][x+1]='@';
						break;
					}
				}
				break;
			case 3:
				while(1){
					x=rand()%(9-(people-1));
					y=rand()%9;
					if(arr[y][x]=='-'&&arr[y][x+1]=='-'&&arr[y][x+2]=='-'){
						arr[y][x]='@';
						arr[y][x+1]='@';
						arr[y][x+2]='@';
						break;
					}
				}
				break;	
		}
	}
	else{
		while(1){
			z=rand()%2;
			if(z==0){
				x=rand()%(9-(people-1));
				y=rand()%9;
				if(arr[y][x]=='-'&&arr[y][x+1]=='-'&&arr[y][x+2]=='-'&&arr[y][x+3]=='-'){
					arr[y][x]='@';
					arr[y][x+1]='@';
					arr[y][x+2]='@';
					arr[y][x+3]='@';
					break;
				}
			}
			if(z==1){
				x=rand()%(9-(people-3));
				y=rand()%(9-(people-3));
				if(arr[y][x]=='-'&&arr[y][x+1]=='-'&&arr[y+1][x]=='-'&&arr[y+1][x+1]=='-'){
					arr[y][x]='@';
					arr[y][x+1]='@';
					arr[y+1][x]='@';
					arr[y+1][x+1]='@';
					break;
				}
			}
		}
	}
}
void back(char arr[9][9]){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(arr[i][j]=='@')
			arr[i][j]='-';
		}
	} 
}
void confirm(char arr[9][9]){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(arr[i][j]=='@')
			arr[i][j]='*';
		}
	} 
}
void choose(char arr[9][9]){
	char seat[101]={0},*cut;
	int wrong=0,x,y;
	do{
		wrong=0;
		back(arr);
		printf("Please enter the seat you want(ex:1-2,2-9) : ");
		fgets(seat,sizeof(seat),stdin);
		for(int i=0;seat[i]!='\n';i++){
			if(seat[i]=='\n'){
				seat[i]='\0';
				break;
			}
		}
		cut=strtok(seat,",");
		while(cut!=NULL){
			if(sscanf(cut,"%d-%d",&x,&y)!=2||x>9||x<1||y>9||y<1||arr[x-1][y-1]=='@'||arr[x-1][y-1]=='*'){
				wrong=1;
				break;
			}
			arr[x-1][y-1]='@';
			cut=strtok(NULL,",");
		}
		if(wrong==1){
			printf("Wrong enter type or seat already taken !\n");
		}
	}while(wrong!=0);
}
int main (){
    char password[4],seat[9][9],word;//宣告密碼字串跟變數   
    int a=3,times=0,x,y,people;
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||     _/                                     ||\n");
    printf("||    /______/￣￣￣\\         __________      ||\n");
    printf("||  《___/           \\-------/  _______/      ||\n");
    printf("||    \\______  Kawasaki       _/ ___  \\       ||\n");
    printf("||      /￣\\ \\_         /   _/  /   \\  \\      ||\n");
    printf("||      \\__/   \\_______/___/    \\___/         ||\n");
    printf("||                                            ||\n");
    printf("||************\"這是一台仿賽檔車\"**************||\n");
    printf("||                                            ||\n");
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||                E1B14江柏億                 ||\n");
    printf("||               程式設計作業二               ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("||                                            ||\n");
    printf("||             請輸入四位數密碼：             ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("================================================\n");
    printf("--------------->");
    do{
    	for(int i=0;i<4;i++){
            password[i]=getche();
        }
        printf("\n");
        a--;/*每輸入一次密碼次數減一*/
        if((password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5')&&a!=0){
            printf("密碼錯誤，還剩%d次機會！\n",a);
		}
    }while((password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5')&&a>0)/*判斷每一個密碼是否正確*/;
    if((password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5')&&a==0){
    	printf("密碼錯誤三次，沒機會了！");
    	return 0;
	}
	system("cls");
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			seat[i][j]='-';
		}
	}
	srand(time(NULL));
	while(times<10){
		x=rand()%9;
		y=rand()%9;
		if(seat[x][y]=='-'){
		    seat[x][y]='*';
		    times++;
	    }
	}
	do{
		system("cls");
		printf("----------[Booking System]----------\n");
		printf("|   a. Available seats             |\n");
		printf("|   b. Arrange for you             |\n");
		printf("|   c. Choose by yourself          |\n");
		printf("|   d. Exit                        |\n");
        printf("------------------------------------\n");
        word=getch();
        if(word=='a'){
        	system("cls");
        	show(seat);
        	system("pause");
		}
		if(word=='b'){
        	system("cls");
        	printf("How many seat do you want?(1~4)\n");
        	scanf("%d",&people);
        	system("cls");
        	change(seat,people);
        	show(seat);
        	printf("Are you satisfied with your seat?(y/n)");
        	word=getch();
        	if(word=='y')
        	confirm(seat);
        	if(word=='n')
        	back(seat);
		}
		if(word=='c'){
        	system("cls");
        	show(seat);
        	choose(seat);
        	system("cls");
        	show(seat);
        	printf("Are you satisfied with your seat?(y/n)");
        	word=getch();
        	if(word=='y')
        	confirm(seat);
        	if(word=='n')
        	back(seat);
		}  
	}while(1);
}
