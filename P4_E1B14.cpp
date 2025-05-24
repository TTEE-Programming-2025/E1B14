#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct grades{
		char name[20];
		char id[7];
		int math;
		int phy;
		int eng;
		float avg;
	};
void input(struct grades arr[10],int n){
	char low[7]={"000000"},high[7]={"999999"};
	int error=0;
	system("cls");
	for(int i=0;i<n;i++){
		printf("輸入第%d位學生姓名：",i+1); 
		fflush(stdin);
		scanf("%s",arr[i].name);
		system("cls");
		do{
			error=0;
			printf("%s的學號(六位整數)：",arr[i].name); 
			fflush(stdin);
		    scanf("%s",arr[i].id);
		    for(int j=0;j<6;j++){
		    	if(arr[i].id[j]<'0'||arr[i].id[j]>'9'||strlen(arr[i].id)!=6)
		    	error=1;
		    	break;
			}
			if(error==1)
			printf("輸入錯誤！請重新輸入！\n");
		}while(error==1);
		system("cls");
		do{
			printf("%s的數學成績：",arr[i].name); 
		    scanf("%d",&arr[i].math);
			if(arr[i].math<0||arr[i].math>100)
			printf("輸入錯誤！請重新輸入！\n");
		}while(arr[i].math<0||arr[i].math>100);
		system("cls");
		do{
			printf("%s的物理成績：",arr[i].name); 
		    scanf("%d",&arr[i].phy);
			if(arr[i].phy<0||arr[i].phy>100)
			printf("輸入錯誤！請重新輸入！\n");
		}while(arr[i].phy<0||arr[i].phy>100);
		system("cls");
		do{
			printf("%s的英文成績：",arr[i].name); 
		    scanf("%d",&arr[i].eng);
			if(arr[i].eng<0||arr[i].eng>100)
			printf("輸入錯誤！請重新輸入！\n");
		}while(arr[i].eng<0||arr[i].eng>100);
		system("cls");
	}
}
int main (){
	struct grades student[10];
	char password[5],right[5]="2025",word;
    int a=3,people;
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
    printf("||               程式設計作業四               ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("||                                            ||\n");
    printf("||               輸入四位數密碼：             ||\n");
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
        a--;/*每輸入一次密碼次數減一*/
        if(strcmp(password,right)!=0/*比較密碼是否正確*/&&a!=0){
            printf("密碼錯誤，還剩%d次機會！\n",a);
		}
		}while(strcmp(password,right)!=0&&a>0);/*比較密碼是否正確*/
    if(strcmp(password,right)!=0&&a==0)/*沒有輸入機會且密碼錯誤*/{
    	printf("密碼錯誤三次，沒機會了！");
    	return 0;
	}
	do{
		system("cls");
		printf("-----------[Grade System]-----------\n");
		printf("|   a. Enter student grades        |\n");
		printf("|   b. Display student grades      |\n");
		printf("|   c. Search for student grades   |\n");
		printf("|   d. Grade ranking               |\n");
		printf("|   e. Exit system                 |\n");
        printf("------------------------------------\n");
         word=getch();
         if(word=='a'){
         	printf("輸入一整數n：");
         	scanf("%d",&people);
         	input(student,people);
		 }
	}while(1);/*Loop the main menu until the user chooses to exit*/
}
