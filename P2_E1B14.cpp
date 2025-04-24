#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//印出字母三角形副函式 
void triangle(char a){
	int ch=a;
	for(int i='a';i<=ch;i++)/*要印出幾行*/{
		for(int j=(ch-'a');j>(i-'a');j--)/*每行的空格*/{
			printf(" ");
		}
		for(int k='a'+(ch-i);k<=ch;k++)/*每行的字母*/{
		   printf("%c",k);
	    }
		   printf("\n");
	}
} 
//印出九九乘法表副函式
void chenfa(int a){
	for(int i=1;i<=a;i++)/*印出幾個橫行*/{
		for(int j=1;j<=a;j++)/*印出一個橫行的乘法*/{
			printf("%d*%d=%d  ",j,i,i*j);
			if(i*j<10)/*如果乘積為個位數則補空格*/
			printf(" ");
		}
		printf("\n");
	}
}
int main (){
    char password[4],letter,letter2,end;//宣告密碼字串跟變數   
    int a=3;
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
	do{
	    printf(" /\\=============================/\\\n");
		printf("(                                 )\n");
		printf("(   \\\\\\    ●     3    ●   \\\\\\     )\n");	
		printf("(                                 )\n");
	    printf("( 輸入'A'or'a'   畫出直角三角形 ~ )\n");
	    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");	
	    printf("( 輸入'B'or'b'   顯示乘法表 ~     )\n");
	    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	    printf("( 輸入'C'or'c'   結束 ~           )\n");
	    printf(" \\/===========\\/===\\/===========\\/ \n");
	    letter=getch();
	    system("cls");
	    if(letter=='A'||letter=='a')/*輸入'A'or'a'*/{
	    	do{
	    		printf("輸入a~n的英文字母：");
	    		letter2=getche();
	    		printf("\n");
	    		if(letter2<'a'||letter2>'n')
	    		printf("輸入的不是a~n的英文字母！\n請重新");
			}while(letter2<'a'||letter2>'n');
	        triangle(letter2);/*印出對應三角形*/
	        getch();
	        system("cls");
        }
        if(letter=='B'||letter=='b')/*輸入'B'or'b'*/{
        	int n;
	    	do{
	    		printf("輸入1~9的整數n：");
	    		fflush(stdin);
	    		scanf("%d",&n);
	    		printf("\n");
	    		if(n<1||n>9)
	    		printf("輸入的不是輸入1~9的整數n：！\n請重新");
			}while(n<1||n>9);
		    chenfa(n);/*印出對應九九乘法表*/
		    getch();
	        system("cls");
		}
		if(letter=='C'||letter=='c')/*輸入'C'or'c'*/{
	    	printf("'Continue? (y/n)'");
	    	end=getch();
	    	printf("\n");
	    	while(end!='Y'&&end!='y'&&end!='N'&&end!='n')/*輸入非y,n即重新輸入*/{
	    		printf("WRONG ! \n'Please Answer (y/n)'\n");
	    	    printf("'Continue? (y/n)'");
	    	    end=getch();
				printf("\n");	
			}
	    	if(end=='Y'||end=='y')/*輸入y回到迴圈起點*/{
	    		system("cls");
	    		continue;
			}
			else/*輸入n結束程式*/{
				return 0;
			}
		}
	}while(1); 
}
/*透過這次的作業練習，我更加熟悉了 for 迴圈、while 迴圈與 do-while 迴圈的應用方式，
也實際操作了字元陣列的使用，藉由將密碼存放於字元陣列中，並加以判斷輸入是否正確。
除此之外，我也新學習並熟悉了副程式的概念，了解如何宣告、定義以及呼叫副程式，
進而讓整體程式更加有條理，並有效達成我所預期的功能與效果。*/ 
