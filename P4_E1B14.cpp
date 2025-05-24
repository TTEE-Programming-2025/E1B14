#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
//定義學生資料結構 
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
		printf("輸入第%d位學生姓名：",i+1); 
		fflush(stdin);
		scanf("%s",arr[i].name);
		system("cls");
		do{
			error=0;//預設正確
			printf("%s的學號(六位整數)：",arr[i].name); 
			fflush(stdin);
		    scanf("%6s",arr[i].id);
			//判斷每個字元是否是0~9以及長度是不是六
		    for(int j=0;j<6;j++){
		    	if(arr[i].id[j]<'0'||arr[i].id[j]>'9'||strlen(arr[i].id)!=6){
		    		error=1;//如不符合則錯誤 
		    	    break;
				} 
			}
			//如果錯誤則發出警告訊息 
			if(error==1)
			printf("輸入錯誤！請重新輸入！\n");
		}while(error==1);//如果錯誤則重複詢問
		system("cls");
		do{
			printf("%s的數學成績：",arr[i].name); 
		    scanf("%d",&arr[i].math);
			if(arr[i].math<0||arr[i].math>100)
			printf("輸入錯誤！請重新輸入！\n");
		}while(arr[i].math<0||arr[i].math>100);
		//輸入成績非0~100則重複詢問 
		system("cls");
		do{
			printf("%s的物理成績：",arr[i].name); 
		    scanf("%d",&arr[i].phy);
			if(arr[i].phy<0||arr[i].phy>100)
			printf("輸入錯誤！請重新輸入！\n");
		}while(arr[i].phy<0||arr[i].phy>100);
		//輸入成績非0~100則重複詢問
		system("cls");
		do{
			printf("%s的英文成績：",arr[i].name); 
		    scanf("%d",&arr[i].eng);
			if(arr[i].eng<0||arr[i].eng>100)
			printf("輸入錯誤！請重新輸入！\n");
		}while(arr[i].eng<0||arr[i].eng>100);
		//輸入成績非0~100則重複詢問
		system("cls");
		//算出平均 
		arr[i].avg=(arr[i].math+arr[i].phy+arr[i].eng)/3.0;
	}
}
//印出學生資料 
void show(struct grades arr[10],int n){
	for(int i=0;i<n;i++){
		printf("學生姓名：%-8s  學號：%6s  數學：%-3d  物理：%-3d  英文：%-3d  平均分：%.1f\n",arr[i].name,arr[i].id,arr[i].math,arr[i].phy,arr[i].eng,arr[i].avg);
	}
}
//搜尋學生 
void search(struct grades arr[10],char searchname[20],int a){
	int find=0;
	for(int i=0;i<a;i++){
		if(strcmp(arr[i].name,searchname)==0){
			printf("學生姓名：%-8s  學號：%6s  數學：%-3d  物理：%-3d  英文：%-3d  平均分：%.1f\n",arr[i].name,arr[i].id,arr[i].math,arr[i].phy,arr[i].eng,arr[i].avg);
			find++;//表示有找到 
		}
	}
	//沒找到則告訴使用者 
	if(find==0)
	printf("查無此姓名！\n");
}
//依成績平均排序 
void change(struct grades oldarr[10],struct grades newarr[10],int a){
	struct grades empty;
	//將使用者輸入的結構陣列資料複製給將要排列的結構陣列 
	for(int i=0;i<a;i++){
		newarr[i]=oldarr[i];
	}
	//冒泡排序法 
	for(int i=0;i<a-1;i++){//重複執行 
		for(int j=0;j<a-i-1;j++){//每次執行的範圍 
			if(newarr[j].avg<newarr[j+1].avg){//如下一個的平均大於前一個 
			    //交換兩者順序 
				empty=newarr[j];
				newarr[j]=newarr[j+1];
				newarr[j+1]=empty;
			}
		}
	}
}
//確認是否先輸入學生資料 
int check(int n){
	//學生人數小於等於0則警告使用者 
	if(n<=0){
		system("cls");
		printf("請先執行a，輸入學生資料後再試！\n");
		//人數不對回傳1 
		return 1;
	}
	//否則回傳0 
	else
	return 0;
}
int main (){
	//宣告變數及矩陣初始化 
	struct grades student[10]={0},avgarr[10]={0};
	char password[5],right[5]="2025",word,who[20];
    int a=3,people=0;
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||     _/                                     ||\n");
    printf("||    /______/￣￣￣\\         __________      ||\n");
    printf("||  《___/           \\-------/  _______/      ||\n");
    printf("||    \\______  Suzuki         _/ ___  \\       ||\n");
    printf("||      /￣\\ \\_         /   _/  /   \\  \\      ||\n");
    printf("||      \\__/   \\_______/___/    \\___/         ||\n");
    printf("||                                            ||\n");
    printf("||***********\"This is a GSX-R150\"*************||\n");
    printf("||                                            ||\n");
    printf("================================================\n");
    printf("||                                            ||\n");
    printf("||                E1B14江柏億                 ||\n");
    printf("||               程式設計作業四               ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("||                                            ||\n");
    printf("||               輸入四位數密碼：             ||\n");
    printf("||                                            ||\n");
    printf("||********************************************||\n");
    printf("================================================\n");
    printf("--------------->");
    do{
    	for(int i=0;i<4;i++)/*接收密碼*/{
            password[i]=getche();
        }
        password[4]='\0';
        a--;/*每輸入一次密碼次數減一*/
        printf("\n");
        if(strcmp(password,right)!=0/*比較密碼是否正確*/&&a!=0){
            printf("密碼錯誤，還剩%d次機會！\n",a);
		}
	}while(strcmp(password,right)!=0&&a>0);/*比較密碼是否正確*/
    if(strcmp(password,right)!=0&&a==0)/*沒有輸入機會且密碼錯誤*/{
    	printf("密碼錯誤三次，沒機會了！");
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
         		printf("輸入一整數n(5~10)：");
         	    scanf("%d",&people);
         	    if(people<5||people>10)
         	    printf("輸入錯誤！請重新輸入！\n");
			 }while(people<5||people>10);//人數非5~10則重新輸入 
         	input(student,people);//呼叫輸入的副函式 
		 }
		 if(word=='b'){
		 	//確認是否先輸入學生資料 
		 	if(check(people)){
		 		system("pause");
		 		continue;
			 }
         	system("cls");
         	show(student,people);//呼叫展示的副函式 
         	system("pause");
		 }
		 if(word=='c'){
		 	//確認是否先輸入學生資料 
		 	if(check(people)){
		 		system("pause");
		 		continue;
			 }
         	system("cls");
         	printf("輸入要搜尋的姓名：");
         	scanf("%s",who);
         	search(student,who,people);//呼叫搜尋學生的副函式 
         	system("pause");
		 }
		 if(word=='d'){
		 	//確認是否先輸入學生資料 
		 	if(check(people)){
		 		system("pause");
		 		continue;
			 }
         	system("cls");
         	change(student,avgarr,people);//呼叫排列順序的副函式 
         	show(avgarr,people);//呼叫展示的副函式 
         	system("pause");
		 }
		 if(word=='e'){
		 	system("cls");
	    	do{
	    		printf("'確定離開？(y/n)'");
	    	    word=getch();
	    	    printf("\n");
	    	    if(word!='y'&&word!='n')
	    	   	printf("錯誤！請輸入'y'或'n'！\n");	
			}while(word!='y'&&word!='n');/*輸入非y,n即重新輸入*/
	    	if(word=='n')/*輸入n回到迴圈起點*/{
	    		system("cls");
	    		continue;
			}
			else/*輸入y結束程式*/{
				return 0;
			}
		 }
	}while(1);/*執行迴圈直到使用者選擇離開*/
}
/*透過這次的程式設計作業，我學會了必須將結構型態宣告在全域位置，這樣副程式才能順利存取與使用，避免產生編譯錯誤。
此外，我也更加熟悉了結構與副程式的撰寫方式，像是將輸入、顯示、搜尋等功能分別寫成副程式，使整體程式碼更清晰、模組化。
在這次的練習中，我也實作了結構陣列與冒泡排序法，成功將學生依平均成績排序，讓我更理解排序的應用方式與邏輯。
整體來說，這次作業提升了我對結構、陣列與副程式的理解，也加強了我撰寫大型完整程式的能力。*/ 
