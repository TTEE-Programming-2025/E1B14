#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main (){
    char password[4],letter,ch='"';//�ŧi�K�X�r����ܼ�   
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||     _/                         _______     ||\n");
    printf("||    /______/�áá�\\       _____/  ___/      ||\n");
    printf("||  �m  Ducati       \\-----/   ____/   \\      ||\n");
    printf("||    \\______                _/  ____   \\     ||\n");
    printf("||      /��\\ \\_            _/   /    \\        ||\n");
    printf("||      \\__/   \\__________/     \\____/        ||\n");
    printf("||                                            ||\n");
    printf("||************%c�o�O�@�x�����ɨ�%c**************||\n",ch,ch);
    printf("||                                            ||\n");
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||                E1B14���f��                 ||\n");
    printf("||               �{���]�p�@�~�@               ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("||                                            ||\n");
    printf("||            [�����N���~��{�� ]             ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("================================================\n");
    getch();//����@�Ӧr��=���ϥΪ̫����N�� 
    system("cls");//�M���ù� 
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||             �п�J�|��ƱK�X�G             ||\n");
    printf("||                                            ||\n");
    printf("================================================\n");
    printf("--------------->");
    //�K�X��J�r�����ܦ̦r�� 
    for(int i=0;i<4;i++){
        password[i]=getch();
        printf("*");
    }
    printf("\n");
    //�v���P�_�K�X�O�_���T 
    if(password[0]=='2'&&password[1]=='0'&&password[2]=='2'&&password[3]=='5'){
        printf("�w��I�����N��i�J�D���~");
        getch();
    }
    //�K�X���~�Y�o�Xĵ���n����ܿ��~ 
    else{
        printf("\a��J���~�I\n");
        system("pause");
        return 0;
    }
    system("cls");//�M���ù�
    printf("===========================================\n");
    printf("|             �п�J���N�r��~             |\n");
    printf("|=========================================|\n");
    printf("|      ��J'A'...'Z'��� : Uppercase      |\n");
    printf("|-----------------------------------------|\n");
    printf("|      ��J'a'...'z'��� : Lowercase      |\n");
    printf("|-----------------------------------------|\n");
    printf("|      ��J'0'...'9'��� : Digit          |\n");
    printf("|-----------------------------------------|\n");
    printf("|      ��J��L�r����� : my name         |\n");
    printf("===========================================\n");
    printf("----------->�п�J�@�Ӧr�� : ");
    letter=getche();
    printf("\n");
    //�P�_�ϥΪ̿�J���r�� 
    if(letter>='A'&&letter<='Z'){
    	printf("Uppercase\n");
    	printf("�����N�䵲���{��~");
    	getch();
    	return 0;
		}
		else if(letter>='a'&&letter<='z'){
    		printf("Lowercase\n");
    		printf("�����N�䵲���{��~");
    		getch();
    		return 0;
	    }
	    else if(letter>='0'&&letter<='9'){
	    	printf("Digit\n");
    	    printf("�����N�䵲���{��~");
    	    getch();
    	    return 0;
	    }
	    else{
	    	printf("E1B14���f��\n");
    	    printf("�����N�䵲���{��~");
    	    getch();
    	    return 0;
		} 
}
/*�z�L�o�����{���m�ߡA�ڧ�`�J�F�ѤF getch �M getche ���Ϊk�A
�o�{ getch ���ȯ���Ψ�Ū����@�r���A�٥i�H�@�����ݨϥΪ̫��䪺�覡�A���N system("pause")�C
���~�A�ڤ]�m�ߤF for �j��P�x�}���B�ΡA�H�� if-else ����P�_�����ΡA���ڹ�o�Ƿ������F���ꪺ�z�ѡC*/ 
