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
		printf("��J��%d��ǥͩm�W�G",i+1); 
		fflush(stdin);
		scanf("%s",arr[i].name);
		system("cls");
		do{
			error=0;
			printf("%s���Ǹ�(������)�G",arr[i].name); 
			fflush(stdin);
		    scanf("%s",arr[i].id);
		    for(int j=0;j<6;j++){
		    	if(arr[i].id[j]<'0'||arr[i].id[j]>'9'||strlen(arr[i].id)!=6)
		    	error=1;
		    	break;
			}
			if(error==1)
			printf("��J���~�I�Э��s��J�I\n");
		}while(error==1);
		system("cls");
		do{
			printf("%s���ƾǦ��Z�G",arr[i].name); 
		    scanf("%d",&arr[i].math);
			if(arr[i].math<0||arr[i].math>100)
			printf("��J���~�I�Э��s��J�I\n");
		}while(arr[i].math<0||arr[i].math>100);
		system("cls");
		do{
			printf("%s�����z���Z�G",arr[i].name); 
		    scanf("%d",&arr[i].phy);
			if(arr[i].phy<0||arr[i].phy>100)
			printf("��J���~�I�Э��s��J�I\n");
		}while(arr[i].phy<0||arr[i].phy>100);
		system("cls");
		do{
			printf("%s���^�妨�Z�G",arr[i].name); 
		    scanf("%d",&arr[i].eng);
			if(arr[i].eng<0||arr[i].eng>100)
			printf("��J���~�I�Э��s��J�I\n");
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
    printf("||    /______/�áá�\\         __________      ||\n");
    printf("||  �m___/           \\-------/  _______/      ||\n");
    printf("||    \\______  Suzuki         _/ ___  \\       ||\n");
    printf("||      /��\\ \\_         /   _/  /   \\  \\      ||\n");
    printf("||      \\__/   \\_______/___/    \\___/         ||\n");
    printf("||                                            ||\n");
    printf("||***********\"This is a GSX-R150\"*************||\n");
    printf("||                                            ||\n");
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||                E1B14���f��                 ||\n");
    printf("||               �{���]�p�@�~�|               ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("||                                            ||\n");
    printf("||               ��J�|��ƱK�X�G             ||\n");
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
        a--;/*�C��J�@���K�X���ƴ�@*/
        if(strcmp(password,right)!=0/*����K�X�O�_���T*/&&a!=0){
            printf("�K�X���~�A�ٳ�%d�����|�I\n",a);
		}
		}while(strcmp(password,right)!=0&&a>0);/*����K�X�O�_���T*/
    if(strcmp(password,right)!=0&&a==0)/*�S����J���|�B�K�X���~*/{
    	printf("�K�X���~�T���A�S���|�F�I");
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
         	printf("��J�@���n�G");
         	scanf("%d",&people);
         	input(student,people);
		 }
	}while(1);/*Loop the main menu until the user chooses to exit*/
}
