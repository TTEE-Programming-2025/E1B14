#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
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
}
