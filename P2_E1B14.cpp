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
759336e (forth commit?�次?��?步�?�?9乘�?表�??��?，並?�現了空?��??�橫行�?序�?�?
int main (){
    char password[4],letter;//�ŧi�K�X�r����ܼ�   
    int a=3;
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||     _/                         ______      ||\n");
    printf("||    /______/�áá�\\       _____/  ___/      ||\n");
    printf("||  �m  Kawasaki     \\-----/   ____/   \\      ||\n");
    printf("||    \\______                _/  ____   \\     ||\n");
    printf("||      /��\\ \\_            _/   /    \\        ||\n");
    printf("||      \\__/   \\__________/     \\____/        ||\n");
    printf("||                                            ||\n");
    printf("||************\"�o�O�@�x�����ɨ�\"**************||\n");
    printf("||                                            ||\n");
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||                E1B14���f��                 ||\n");
    printf("||               �{���]�p�@�~�G               ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("||                                            ||\n");
    printf("||             �п�J�|��ƱK�X�G             ||\n");
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
            printf("�K�X���~�A�ٳ�%d�����|�I\n",a);
		}
    }while((password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5')&&a>0);
    if((password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5')&&a==0){
    	printf("�K�X���~�T���A�S���|�F�I");
    	return 0;
	}
	system("cls");
	do{
	    printf("--------------------------\n");	
	    printf("| a. �e�X�����T����      |\n");
	    printf("| b. ��ܭ��k��          |\n");
	    printf("| c. ����                |\n");
	    printf("--------------------------\n");
	    letter=getch();
	    system("cls");
	    if(letter=='a'||letter=='A'){
	    	do{
	    		printf("��Ja~n���^��r���G");
	    		letter2=getche();
	    		printf("\n");
	    		if(letter2<'a'||letter2>'n')
	    		printf("��J�����Oa~n���^��r���I\n�Э��s");
			}while(letter2<'a'||letter2>'n');
	        triangle(letter2);
	        getch();
	        system("cls");
        }
        if(letter=='b'||letter=='B'){
        	int n;
	    	do{
	    		printf("��J1~9�����n�G");
	    		fflush(stdin);
	    		scanf("%d",&n);
	    		printf("\n");
	    		if(n<1||n>9)
	    		printf("��J�����O��J1~9�����n�G�I\n�Э��s");
			}while(n<1||n>9);
		    chenfa(n);
		    getch();
	        system("cls");
		}
	}while(1); 
 a92e42b (second commit?�次?�步?��??��?字�?三�?形�?並發?�空?��??��??�錯�?
}
