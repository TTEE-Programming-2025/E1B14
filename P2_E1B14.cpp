#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void triangle(char a){
	int n=a;
	for(int i='a';i<=n;i++){
		for(int j=(n-'a');j>(i-'a');j--){
			printf(" ");
		}
		for(int k='a';k<=i;k++){
		   printf("%c",k);
	    }
		   printf("\n");
	}
}
void chenfa(int a){
	for(int i=1;i<=a;i++){
		for(int j=1;j<=a;j++){
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
}
759336e (forth commit?™æ¬¡?‘å?æ­¥å?äº?9ä¹˜æ?è¡¨ç??¨å?ï¼Œä¸¦?¼ç¾äº†ç©º?¼è??´æ©«è¡Œé?åºå?é¡?
int main (){
    char password[4],letter;//«Å§i±K½X¦r¦ê¸òÅÜ¼Æ   
    int a=3;
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||     _/                         ______      ||\n");
    printf("||    /______/¡Ã¡Ã¡Ã\\       _____/  ___/      ||\n");
    printf("||  ¡m  Kawasaki     \\-----/   ____/   \\      ||\n");
    printf("||    \\______                _/  ____   \\     ||\n");
    printf("||      /¡Ã\\ \\_            _/   /    \\        ||\n");
    printf("||      \\__/   \\__________/     \\____/        ||\n");
    printf("||                                            ||\n");
    printf("||************\"³o¬O¤@¥x¥éÁÉÀÉ¨®\"**************||\n");
    printf("||                                            ||\n");
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||                E1B14¦¿¬f»õ                 ||\n");
    printf("||               µ{¦¡³]­p§@·~¤G               ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("||                                            ||\n");
    printf("||             ½Ğ¿é¤J¥|¦ì¼Æ±K½X¡G             ||\n");
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
            printf("±K½X¿ù»~¡AÁÙ³Ñ%d¦¸¾÷·|¡I\n",a);
		}
    }while((password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5')&&a>0);
    if((password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5')&&a==0){
    	printf("±K½X¿ù»~¤T¦¸¡A¨S¾÷·|¤F¡I");
    	return 0;
	}
	system("cls");
	do{
	    printf("--------------------------\n");	
	    printf("| a. µe¥Xª½¨¤¤T¨¤§Î      |\n");
	    printf("| b. Åã¥Ü­¼ªkªí          |\n");
	    printf("| c. µ²§ô                |\n");
	    printf("--------------------------\n");
	    letter=getch();
	    system("cls");
	    if(letter=='a'||letter=='A'){
	    	do{
	    		printf("¿é¤Ja~nªº­^¤å¦r¥À¡G");
	    		letter2=getche();
	    		printf("\n");
	    		if(letter2<'a'||letter2>'n')
	    		printf("¿é¤Jªº¤£¬Oa~nªº­^¤å¦r¥À¡I\n½Ğ­«·s");
			}while(letter2<'a'||letter2>'n');
	        triangle(letter2);
	        getch();
	        system("cls");
        }
        if(letter=='b'||letter=='B'){
        	int n;
	    	do{
	    		printf("¿é¤J1~9ªº¾ã¼Æn¡G");
	    		fflush(stdin);
	    		scanf("%d",&n);
	    		printf("\n");
	    		if(n<1||n>9)
	    		printf("¿é¤Jªº¤£¬O¿é¤J1~9ªº¾ã¼Æn¡G¡I\n½Ğ­«·s");
			}while(n<1||n>9);
		    chenfa(n);
		    getch();
	        system("cls");
		}
	}while(1); 
 a92e42b (second commit?™æ¬¡?æ­¥?šä??±æ?å­—æ?ä¸‰è?å½¢ï?ä¸¦ç™¼?¾ç©º?¼ç??¸é??‰éŒ¯èª?
}
