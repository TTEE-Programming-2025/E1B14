#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
//�w�q�ǥ͸�Ƶ��c 
struct grades{
		char name[20];
		char id[7];
		int math;
		int phy;
		int eng;
		float avg;
	};
void input(struct grades arr[10],int n){
	int error=0; 
	system("cls");
	for(int i=0;i<n;i++){
		printf("��J��%d��ǥͩm�W�G",i+1); 
		fflush(stdin);
		scanf("%s",arr[i].name);
		system("cls");
		do{
			error=0;//�w�]���T
			printf("%s���Ǹ�(������)�G",arr[i].name); 
			fflush(stdin);
		    scanf("%6s",arr[i].id);
			//�P�_�C�Ӧr���O�_�O0~9�H�Ϊ��׬O���O��
		    for(int j=0;j<6;j++){
		    	if(arr[i].id[j]<'0'||arr[i].id[j]>'9'||strlen(arr[i].id)!=6){
		    		error=1;//�p���ŦX�h���~ 
		    	    break;
				} 
			}
			//�p�G���~�h�o�Xĵ�i�T�� 
			if(error==1)
			printf("��J���~�I�Э��s��J�I\n");
		}while(error==1);//�p�G���~�h���Ƹ߰�
		system("cls");
		do{
			printf("%s���ƾǦ��Z�G",arr[i].name); 
		    scanf("%d",&arr[i].math);
			if(arr[i].math<0||arr[i].math>100)
			printf("��J���~�I�Э��s��J�I\n");
		}while(arr[i].math<0||arr[i].math>100);
		//��J���Z�D0~100�h���Ƹ߰� 
		system("cls");
		do{
			printf("%s�����z���Z�G",arr[i].name); 
		    scanf("%d",&arr[i].phy);
			if(arr[i].phy<0||arr[i].phy>100)
			printf("��J���~�I�Э��s��J�I\n");
		}while(arr[i].phy<0||arr[i].phy>100);
		//��J���Z�D0~100�h���Ƹ߰�
		system("cls");
		do{
			printf("%s���^�妨�Z�G",arr[i].name); 
		    scanf("%d",&arr[i].eng);
			if(arr[i].eng<0||arr[i].eng>100)
			printf("��J���~�I�Э��s��J�I\n");
		}while(arr[i].eng<0||arr[i].eng>100);
		//��J���Z�D0~100�h���Ƹ߰�
		system("cls");
		//��X���� 
		arr[i].avg=(arr[i].math+arr[i].phy+arr[i].eng)/3.0;
	}
}
//�L�X�ǥ͸�� 
void show(struct grades arr[10],int n){
	for(int i=0;i<n;i++){
		printf("�ǥͩm�W�G%-8s  �Ǹ��G%6s  �ƾǡG%-3d  ���z�G%-3d  �^��G%-3d  �������G%.1f\n",arr[i].name,arr[i].id,arr[i].math,arr[i].phy,arr[i].eng,arr[i].avg);
	}
}
//�j�M�ǥ� 
void search(struct grades arr[10],char searchname[20],int a){
	int find=0;
	for(int i=0;i<a;i++){
		if(strcmp(arr[i].name,searchname)==0){
			printf("�ǥͩm�W�G%-8s  �Ǹ��G%6s  �ƾǡG%-3d  ���z�G%-3d  �^��G%-3d  �������G%.1f\n",arr[i].name,arr[i].id,arr[i].math,arr[i].phy,arr[i].eng,arr[i].avg);
			find++;//��ܦ���� 
		}
	}
	//�S���h�i�D�ϥΪ� 
	if(find==0)
	printf("�d�L���m�W�I\n");
}
//�̦��Z�����Ƨ� 
void change(struct grades oldarr[10],struct grades newarr[10],int a){
	struct grades empty;
	//�N�ϥΪ̿�J�����c�}�C��ƽƻs���N�n�ƦC�����c�}�C 
	for(int i=0;i<a;i++){
		newarr[i]=oldarr[i];
	}
	//�_�w�ƧǪk 
	for(int i=0;i<a-1;i++){//���ư��� 
		for(int j=0;j<a-i-1;j++){//�C�����檺�d�� 
			if(newarr[j].avg<newarr[j+1].avg){//�p�U�@�Ӫ������j��e�@�� 
			    //�洫��̶��� 
				empty=newarr[j];
				newarr[j]=newarr[j+1];
				newarr[j+1]=empty;
			}
		}
	}
}
//�T�{�O�_����J�ǥ͸�� 
int check(int n){
	//�ǥͤH�Ƥp�󵥩�0�hĵ�i�ϥΪ� 
	if(n<=0){
		system("cls");
		printf("�Х�����a�A��J�ǥ͸�ƫ�A�աI\n");
		//�H�Ƥ���^��1 
		return 1;
	}
	//�_�h�^��0 
	else
	return 0;
}
int main (){
	//�ŧi�ܼƤίx�}��l�� 
	struct grades student[10]={0},avgarr[10]={0};
	char password[5],right[5]="2025",word,who[20];
    int a=3,people=0;
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
    	for(int i=0;i<4;i++)/*�����K�X*/{
            password[i]=getche();
        }
        password[4]='\0';
        a--;/*�C��J�@���K�X���ƴ�@*/
        printf("\n");
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
         	system("cls");
         	do{
         		printf("��J�@���n(5~10)�G");
         	    scanf("%d",&people);
         	    if(people<5||people>10)
         	    printf("��J���~�I�Э��s��J�I\n");
			 }while(people<5||people>10);//�H�ƫD5~10�h���s��J 
         	input(student,people);//�I�s��J���ƨ禡 
		 }
		 if(word=='b'){
		 	//�T�{�O�_����J�ǥ͸�� 
		 	if(check(people)){
		 		system("pause");
		 		continue;
			 }
         	system("cls");
         	show(student,people);//�I�s�i�ܪ��ƨ禡 
         	system("pause");
		 }
		 if(word=='c'){
		 	//�T�{�O�_����J�ǥ͸�� 
		 	if(check(people)){
		 		system("pause");
		 		continue;
			 }
         	system("cls");
         	printf("��J�n�j�M���m�W�G");
         	scanf("%s",who);
         	search(student,who,people);//�I�s�j�M�ǥͪ��ƨ禡 
         	system("pause");
		 }
		 if(word=='d'){
		 	//�T�{�O�_����J�ǥ͸�� 
		 	if(check(people)){
		 		system("pause");
		 		continue;
			 }
         	system("cls");
         	change(student,avgarr,people);//�I�s�ƦC���Ǫ��ƨ禡 
         	show(avgarr,people);//�I�s�i�ܪ��ƨ禡 
         	system("pause");
		 }
		 if(word=='e'){
		 	system("cls");
	    	do{
	    		printf("'�T�w���}�H(y/n)'");
	    	    word=getch();
	    	    printf("\n");
	    	    if(word!='y'&&word!='n')
	    	   	printf("���~�I�п�J'y'��'n'�I\n");	
			}while(word!='y'&&word!='n');/*��J�Dy,n�Y���s��J*/
	    	if(word=='n')/*��Jn�^��j��_�I*/{
	    		system("cls");
	    		continue;
			}
			else/*��Jy�����{��*/{
				return 0;
			}
		 }
	}while(1);/*����j�骽��ϥΪ̿�����}*/
}
/*�z�L�o�����{���]�p�@�~�A�ھǷ|�F�����N���c���A�ŧi�b�����m�A�o�˰Ƶ{���~�බ�Q�s���P�ϥΡA�קK���ͽsĶ���~�C
���~�A�ڤ]��[���x�F���c�P�Ƶ{�������g�覡�A���O�N��J�B��ܡB�j�M���\����O�g���Ƶ{���A�Ͼ���{���X��M���B�ҲդơC
�b�o�����m�ߤ��A�ڤ]��@�F���c�}�C�P�_�w�ƧǪk�A���\�N�ǥ̥ͨ������Z�ƧǡA���ڧ�z�ѱƧǪ����Τ覡�P�޿�C
����ӻ��A�o���@�~���ɤF�ڹﵲ�c�B�}�C�P�Ƶ{�����z�ѡA�]�[�j�F�ڼ��g�j������{������O�C*/ 
