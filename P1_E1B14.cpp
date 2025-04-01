#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (){
    char password[4],letter,ch='"';//宣告密碼字串跟變數   
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||     _/                         _______     ||\n");
    printf("||    /______/￣￣￣\\       _____/  ___/      ||\n");
    printf("||  《  Ducati       \\-----/   ____/   \\      ||\n");
    printf("||    \\______                _/  ____   \\     ||\n");
    printf("||      /￣\\ \\_            _/   /    \\        ||\n");
    printf("||      \\__/   \\__________/     \\____/        ||\n");
    printf("||                                            ||\n");
    printf("||************%c這是一台仿賽檔車%c**************||\n",ch,ch);
    printf("||                                            ||\n");
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||                E1B14江柏億                 ||\n");
    printf("||               程式設計作業一               ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("||                                            ||\n");
    printf("||            [按任意鍵繼續程式 ]             ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("================================================\n");
    getch();//抓取一個字元=等使用者按任意鍵 
    system("cls");//清除螢幕 
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||             請輸入四位數密碼：             ||\n");
    printf("||                                            ||\n");
    printf("================================================\n");
    printf("--------------->");
    //密碼輸入字串並顯示米字號 
    for(int i=0;i<4;i++){
        password[i]=getch();
        printf("*");
    }
    printf("\n");
    //逐項判斷密碼是否正確 
    if(password[0]=='2'&&password[1]=='0'&&password[2]=='2'&&password[3]=='5'){
        printf("歡迎！按任意鍵進入主選單~");
        getch();
    }
    //密碼錯誤即發出警示聲並顯示錯誤 
    else{
        printf("\a輸入錯誤！\n");
        system("pause");
        return 0;
    }
    system("cls");//清除螢幕
    printf("===========================================\n");
    printf("|             請輸入任意字元~             |\n");
    printf("|=========================================|\n");
    printf("|      輸入'A'...'Z'顯示 : Uppercase      |\n");
    printf("|-----------------------------------------|\n");
    printf("|      輸入'a'...'z'顯示 : Lowercase      |\n");
    printf("|-----------------------------------------|\n");
    printf("|      輸入'0'...'9'顯示 : Digit          |\n");
    printf("|-----------------------------------------|\n");
    printf("|      輸入其他字元顯示 : my name         |\n");
    printf("===========================================\n");
    printf("----------->請輸入一個字元 : ");
    letter=getche();
    printf("\n");
    //判斷使用者輸入的字元 
    if(letter>='A'&&letter<='Z'){
    	printf("Uppercase\n");
    	printf("按任意鍵結束程式~");
    	getch();
    	return 0;
		}
		else if(letter>='a'&&letter<='z'){
    		printf("Lowercase\n");
    		printf("按任意鍵結束程式~");
    		getch();
    		return 0;
	    }
	    else if(letter>='0'&&letter<='9'){
	    	printf("Digit\n");
    	    printf("按任意鍵結束程式~");
    	    getch();
    	    return 0;
	    }
	    else{
	    	printf("E1B14江柏億\n");
    	    printf("按任意鍵結束程式~");
    	    getch();
    	    return 0;
		} 
}
/*透過這次的程式練習，我更深入了解了 getch 和 getche 的用法，
發現 getch 不僅能夠用來讀取單一字元，還可以作為等待使用者按鍵的方式，取代 system("pause")。
此外，我也練習了 for 迴圈與矩陣的運用，以及 if-else 條件判斷的應用，讓我對這些概念有了更扎實的理解。*/ 
