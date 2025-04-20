#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (){
    char password[4],letter;//宣告密碼字串跟變數   
    int a=3;
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||     _/                         ______      ||\n");
    printf("||    /______/￣￣￣\\       _____/  ___/      ||\n");
    printf("||  《  Kawasaki     \\-----/   ____/   \\      ||\n");
    printf("||    \\______                _/  ____   \\     ||\n");
    printf("||      /￣\\ \\_            _/   /    \\        ||\n");
    printf("||      \\__/   \\__________/     \\____/        ||\n");
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
        a--;
        if(password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5'){
            printf("密碼錯誤，還剩%d次機會！\n",a);
		}
    }while((password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5')&&a>0);
    if((password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5')&&a==0){
    	printf("密碼錯誤三次，沒機會了！");
    	return 0;
	}
	system("cls");
}
