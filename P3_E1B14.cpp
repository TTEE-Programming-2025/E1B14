#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<string.h>
void show(char arr[9][9])/*Show the seat of now*/{
	printf("\\123456789\n");
	for(int i=8;i>=0;i--){
		printf("%d",i+1);
		for(int j=0;j<9;j++){
			printf("%c",arr[i][j]);
		}
		printf("\n");
	} 
}
void change(char arr[9][9],int people){
	int x,y,z,count;
	if(people>=1&&people<=3)/*If the user wants one to three seats*/{
		switch(people){
			case 1:/*If the user wants one  seats*/
				while(1){
					x=rand()%(9-(people-1));/*random 0~8*/
					y=rand()%9;/*random 0~8*/
					if(arr[y][x]=='-'){
						arr[y][x]='@';
						break;
					}
				}
				break;
			case 2:/*If the user wants two seats*/
				while(1){
					x=rand()%(9-(people-1));/*random 0~7*/
					y=rand()%9;/*random 0~8*/
					if(arr[y][x]=='-'&&arr[y][x+1]=='-'){
						arr[y][x]='@';
						arr[y][x+1]='@';
						break;
					}
				}
				break;
			case 3:/*If the user wants three seats*/
				while(1){
					x=rand()%(9-(people-1));/*random 0~6*/
					y=rand()%9;/*random 0~8*/
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
	else/*Else the user wants four seats*/{
		while(1){
			z=rand()%2;
			if(z==0){
				x=rand()%(9-(people-1));/*random 0~5*/
				y=rand()%9;/*random 0~8*/
				if(arr[y][x]=='-'&&arr[y][x+1]=='-'&&arr[y][x+2]=='-'&&arr[y][x+3]=='-'){
					arr[y][x]='@';
					arr[y][x+1]='@';
					arr[y][x+2]='@';
					arr[y][x+3]='@';
					break;
				}
			}
			if(z==1){
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
void back(char arr[9][9])/*Change the seat selected by the user to the selected seat*/{
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(arr[i][j]=='@')
			arr[i][j]='-';
		}
	} 
}
void confirm(char arr[9][9])/*Change the seat selected by the user to an empty seat*/{
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(arr[i][j]=='@')
			arr[i][j]='*';
		}
	} 
}
void choose(char arr[9][9]){
	char seat[300]={0},*cut;
	int wrong=0,x,y;
	do{
		wrong=0;
		back(arr);/*Change the seat selected by the user to the selected seat*/
		printf("Please enter the seat you want(ex:1-2,2-9) : ");
		fflush(stdin); 
		gets(seat);/*Get seat selection string from user input*/
		if(seat[0]=='\0'){
			printf("No input detected. Please enter seat numbers.\n");
			wrong=1;
			continue;
		}
		cut=strtok(seat,",");/*split the string when encountering ' , '*/
		/*Continue splitting until it's finished*/
		while(cut!=NULL){
			/*Throw an error if two numbers aren't found, the format is invalid, or the seat is duplicated*/
			if(sscanf(cut,"%d-%d",&x,&y)!=2||x>9||x<1||y>9||y<1||arr[x-1][y-1]=='@'||arr[x-1][y-1]=='*'){
				wrong=1;
				break;
			}
			arr[x-1][y-1]='@';
			cut=strtok(NULL,",");/*keep splitting*/
		}
		if(wrong==1)/*If wrong ,tell the user*/{
			printf("Wrong enter type or seat already taken !\n");
		}
	}while(wrong!=0);
}
int main (){
	char password[5],right[5]="2025",seat[9][9],word;
    int a=3,times=0,x,y,people;
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||     _/                                     ||\n");
    printf("||    /______/￣￣￣\\         __________      ||\n");
    printf("||  《___/           \\-------/  _______/      ||\n");
    printf("||    \\______  Suzuki         _/ ___  \\       ||\n");
    printf("||      /￣\\ \\_         /   _/  /   \\  \\      ||\n");
    printf("||      \\__/   \\_______/___/    \\___/         ||\n");
    printf("||                                            ||\n");
    printf("||***********\"This is a GSX-R150\"*************||\n");
    printf("||                                            ||\n");
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||                E1B14江柏億                 ||\n");
    printf("||               程式設計作業三               ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("||                                            ||\n");
    printf("||     Please enter a four-digit password：   ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("================================================\n");
    printf("--------------->");
    do{
    	for(int i=0;i<4;i++)/*get password*/{
            password[i]=getche();
        }
        password[4]='\0';
        printf("\n");
        a--;/*Reduce the number of allowed inputs after each entry*/
        if(strcmp(password,right)!=0/*compair input and right password same or not*/&&a!=0){
            printf("Wrong password ! %d times left！\n",a);
		}
		}while(strcmp(password,right)!=0&&a>0)/*compair input and right password same or not*/;
    if(strcmp(password,right)!=0&&a==0)/*If no allowed input times are left, notify the user*/{
    	printf("You have entered the wrong password three times. Access is now locked.");
    	return 0;
	}
	system("cls");
	/*let every seat empty*/
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			seat[i][j]='-';
		}
	}
	/*Ensure different random numbers on each run*/
	srand(time(NULL));
	/*Randomly generate ten seats*/
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
         word=getch();/*Get the user's menu choice*/
        if(word=='a'){
        	system("cls");
        	show(seat);/*Show current seat status*/
        	system("pause");
		}
		if(word=='b'){
        	system("cls");
        	/*Ask user how many seats they want*/
        	do{
        		printf("How many seat do you want(1~4) ?\n");
        		scanf("%d",&people);
        		if(people<1||people>4)
        		printf("Wrong number of people !\n");
			}while(people<1||people>4); 
        	system("cls");
        	change(seat,people);/*Automatically assign seats*/
        	show(seat);/*Show the assigned seats*/
        	/*Ask if user is satisfied*/
        	do{
        		printf("Are you satisfied with your seat?(y/n)\n");
        	    word=getch();
        	    if(word!='y'&&word!='n')
        	    printf("Please enter 'y' or 'n' !\n");
			}while(word!='y'&&word!='n');
        	if(word=='y')
        	confirm(seat);/*Confirm the selected seats*/
        	if(word=='n')
        	back(seat);/*Cancel the selection*/
		}
		if(word=='c'){
        	system("cls");
        	show(seat);/*Show current seat layout*/
        	choose(seat);/*Let user select seats manually*/
        	system("cls");
        	show(seat);/*Show selected seats again*/
        	/*Ask for confirmation*/
        	do{
        		printf("Are you satisfied with your seat?(y/n)\n");
        	    word=getch();
        	    if(word!='y'&&word!='n')
        	    printf("Please enter 'y' or 'n' !\n");
			}while(word!='y'&&word!='n');
        	if(word=='y')
        	confirm(seat);/*Confirm the selected seats*/
        	if(word=='n')
        	back(seat);/*Cancel the selection*/
		}
		if(word=='d'){
			system("cls");
			/*Confirm whether to exit the system*/
			do{
				printf("\'Continue? (y/n)\'\n");
        	    word=getch();
        	    if(word!='y'&&word!='n')
        	    printf("Please enter 'y' or 'n' !\n");
			}while(word!='y'&&word!='n');
			if(word=='y')
			continue;/*Go back to menu*/
        	if(word=='n')
        	return 0;/*Exit the program*/
		}  
	}while(1);/*Loop the main menu until the user chooses to exit*/
}
/*Through this programming assignment, the first thing I learned was how to use a random seed to make the rand() function
give different numbers each time. It helped me understand how randomness works. 
I also practiced comparing strings when making the password part at the beginning.
One of the hardest parts was in the "choose" function. 
I had to figure out how to check if the user’s input was in the correct format and if there were any duplicate seats. 
To solve this, I practiced using strtok to split strings and sscanf to get numbers from the input.
This assignment also helped me get better at using arrays and writing helper functions. 
I also tried some new functions I didn’t use before, and now I understand arrays and functions more deeply.*/
