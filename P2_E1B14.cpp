#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//�L�X�r���T���ΰƨ禡 
void triangle(char a){
	int ch=a;
	for(int i='a';i<=ch;i++)/*�n�L�X�X��*/{
		for(int j=(ch-'a');j>(i-'a');j--)/*�C�檺�Ů�*/{
			printf(" ");
		}
		for(int k='a'+(ch-i);k<=ch;k++)/*�C�檺�r��*/{
		   printf("%c",k);
	    }
		   printf("\n");
	}
} 
//�L�X�E�E���k��ƨ禡
void chenfa(int a){
	for(int i=1;i<=a;i++)/*�L�X�X�Ӿ��*/{
		for(int j=1;j<=a;j++)/*�L�X�@�Ӿ�檺���k*/{
			printf("%d*%d=%d  ",j,i,i*j);
			if(i*j<10)/*�p�G���n���Ӧ�ƫh�ɪŮ�*/
			printf(" ");
		}
		printf("\n");
	}
}
int main (){
    char password[4],letter,letter2,end;//�ŧi�K�X�r����ܼ�   
    int a=3;
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||     _/                                     ||\n");
    printf("||    /______/�áá�\\         __________      ||\n");
    printf("||  �m___/           \\-------/  _______/      ||\n");
    printf("||    \\______  Kawasaki       _/ ___  \\       ||\n");
    printf("||      /��\\ \\_         /   _/  /   \\  \\      ||\n");
    printf("||      \\__/   \\_______/___/    \\___/         ||\n");
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
        a--;/*�C��J�@���K�X���ƴ�@*/
        if((password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5')&&a!=0){
            printf("�K�X���~�A�ٳ�%d�����|�I\n",a);
		}
    }while((password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5')&&a>0)/*�P�_�C�@�ӱK�X�O�_���T*/;
    if((password[0]!='2'||password[1]!='0'||password[2]!='2'||password[3]!='5')&&a==0){
    	printf("�K�X���~�T���A�S���|�F�I");
    	return 0;
	}
	system("cls");
	do{
	    printf(" /\\=============================/\\\n");
		printf("(                                 )\n");
		printf("(   \\\\\\    ��     3    ��   \\\\\\     )\n");	
		printf("(                                 )\n");
	    printf("( ��J'A'or'a'   �e�X�����T���� ~ )\n");
	    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");	
	    printf("( ��J'B'or'b'   ��ܭ��k�� ~     )\n");
	    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	    printf("( ��J'C'or'c'   ���� ~           )\n");
	    printf(" \\/===========\\/===\\/===========\\/ \n");
	    letter=getch();
	    system("cls");
	    if(letter=='A'||letter=='a')/*��J'A'or'a'*/{
	    	do{
	    		printf("��Ja~n���^��r���G");
	    		letter2=getche();
	    		printf("\n");
	    		if(letter2<'a'||letter2>'n')
	    		printf("��J�����Oa~n���^��r���I\n�Э��s");
			}while(letter2<'a'||letter2>'n');
	        triangle(letter2);/*�L�X�����T����*/
	        getch();
	        system("cls");
        }
        if(letter=='B'||letter=='b')/*��J'B'or'b'*/{
        	int n;
	    	do{
	    		printf("��J1~9�����n�G");
	    		fflush(stdin);
	    		scanf("%d",&n);
	    		printf("\n");
	    		if(n<1||n>9)
	    		printf("��J�����O��J1~9�����n�G�I\n�Э��s");
			}while(n<1||n>9);
		    chenfa(n);/*�L�X�����E�E���k��*/
		    getch();
	        system("cls");
		}
		if(letter=='C'||letter=='c')/*��J'C'or'c'*/{
	    	printf("'Continue? (y/n)'");
	    	end=getch();
	    	printf("\n");
	    	while(end!='Y'&&end!='y'&&end!='N'&&end!='n')/*��J�Dy,n�Y���s��J*/{
	    		printf("WRONG ! \n'Please Answer (y/n)'\n");
	    	    printf("'Continue? (y/n)'");
	    	    end=getch();
				printf("\n");	
			}
	    	if(end=='Y'||end=='y')/*��Jy�^��j��_�I*/{
	    		system("cls");
	    		continue;
			}
			else/*��Jn�����{��*/{
				return 0;
			}
		}
	}while(1); 
}
/*�z�L�o�����@�~�m�ߡA�ڧ�[���x�F for �j��Bwhile �j��P do-while �j�骺���Τ覡�A
�]��ھާ@�F�r���}�C���ϥΡA�ǥѱN�K�X�s���r���}�C���A�å[�H�P�_��J�O�_���T�C
�������~�A�ڤ]�s�ǲߨü��x�F�Ƶ{���������A�F�Ѧp��ŧi�B�w�q�H�ΩI�s�Ƶ{���A
�i��������{����[�����z�A�æ��ĹF���کҹw�����\��P�ĪG�C*/ 
