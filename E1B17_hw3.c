#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h> 
void one (int x);
int  two (int x);
void three(int x);
void four (int x);
void five (int x);
void six (int x);
void seven(int x);
int ten(int x);
# define SIZE 10
#include<time.h>
char seat[SIZE][SIZE];

int main(void){
	char a;
	
	int num,result;
	one(1);
	if (!two(1)) {
		return 0;
	}
	system("CLS");
	four(1);
	while(1){
		fflush(stdin);
		three(1);
		scanf("%c",&a);
		if(a=='a'){
			five(1);
			system("pause");
			system("CLS");
			fflush(stdin);
			continue;
		}
		if(a=='b'){
			printf("請輸入訂位人數（1~4）：");
			fflush(stdin);
			scanf("%d",&num);
			if(num>=1&&num<=3){
			six(num);
			system("cls");
			continue;
			}
			if(num==4){
				seven(1);
				system("cls");
				continue;
			}
		
		}
		if(a=='d'){
			result=ten(1);
			if(result){
				printf("程式結束");
				return 0;
			}
			system("cls");
				continue;
		}
		
			}
}
void one (int x){
	//具有各人風格的畫面 
	printf("╔════════════════════════════════════════════════════╗\n");
	printf("║                                                    ║\n");
	printf("║    █████ █████ █████ █████                         ║\n");
    printf("║        █ █   █     █ █                             ║\n");
    printf("║    █████ █   █ █████ █████                         ║\n");
    printf("║    █     █   █ █         █                         ║\n");
    printf("║    █████ █████ █████ █████                         ║\n");
	printf("║                                                    ║\n");
	printf("║                                                    ║\n");
	printf("║       歡迎來到E1B17的程式設計                      ║\n");
	printf("║                               -程式作業3           ║\n");
	printf("║                                                    ║\n");
	printf("║^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^║\n");
	printf("║<             編寫者:邱冠凱                        >║\n");
	printf("║vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv║\n");
	printf("║                                                    ║\n");
	printf("║                                                    ║\n");
	printf("║                                                    ║\n");
	printf("║                             按下任意鍵開始使用 ....║\n");
	printf("║                                                    ║\n");
	printf("╚════════════════════════════════════════════════════╝\n");
	system("pause");
	system("cls");
}
int two (int x){
	int i,a,b=0,B=0,ok;
	char P[]="2025";
	char pass[4];

	while(1){
	printf("請輸入密碼(4位):");
	for(i=0;i<4;i++){
		fflush(stdin);
		pass[i]=getch();
		if(pass[i]=='\r') break;
		printf("*");
	}
	pass[i]='\0';
	ok=strcmp(pass,P);
	if(ok==0) {
			printf("\nwelcome\n");
		break;
	}
	
	else {
		printf("密碼不正確\n");
		B++;
		}
	if(B==3)
		return 0;
	
	}
	return 1;
	}
void three (int x){
	printf("----------[Booking System]----------\n"
"| a. Available seats |\n"
"| b. Arrange for you |\n"
"| c. Choose by yourself |\n"
"| d. Exit |\n"
"------------------------------------\n");
}
void four (int x){
	int count = 0, row, col;
	srand(time(NULL));
	int i,j;
	for (i = 0; i <SIZE; i++)
        for (j = 0; j < SIZE; j++){
        	 seat[i][j] = '-';
		}
           
    
	while (count < 10) {
        row = rand() % (SIZE-1)+1;
        col = rand() % (SIZE-1)+1;
        if (seat[row][col] != '*') { // 避免重複位置
            seat[row][col] = '*';
            count++;
        }
    }       
            
}
void five(int x){
	 int i,j;
	 printf("\\123456789\n"); // 顯示欄號
    for ( i = 1; i < SIZE; i++) {
        printf("%d", SIZE - i); // 反向列號（9到1）
        for ( j = 1; j < SIZE; j++) {
            printf("%c", seat[i][j]);
        }
        printf("\n");
    }
}
void six (int num){
	
	int i,j,k,r,c,ok,found=0;
	char temp[SIZE][SIZE];
	char ch;
	for (i = 0; i < SIZE; i++){
		for (j = 0; j < SIZE; j++)
            temp[i][j] = seat[i][j];
	}
        
    for(;;){
    	r = rand() % (SIZE - 1) + 1;
    	c = rand() % (SIZE - num) + 1;
		ok=1;
		for(k=0;k<num;k++){
			if(seat[r][c+k]!='-'){
				ok=0;
			}
		}
		if(ok){
			for (k = 0; k < num; k++)
                temp[r][c + k] = '@'; 
            found = 1;
            break;
		}
	}
	printf("建議座位如下：\n");
    printf("\\123456789\n");
    for (i = 1; i < SIZE; i++) {
        printf("%d", SIZE - i);
        for (j = 1; j < SIZE; j++) {
            printf("%c", temp[i][j]);
        }
        printf("\n");
    }
    printf("你是否滿意這次的座位選擇:\n是:y\n不:n\n");
    fflush(stdin);
	scanf("%c",&ch);
    if(ch=='y'){
     	for (i = 0; i < SIZE; i++){
		for (j = 0; j < SIZE; j++)
            seat[i][j]=temp[i][j];
            
	}
	return ;
	}
    if(ch=='n'){
		return ;
	} 

}



 
void seven(int x){
	int i,j,k,r,c,C,ok,oo,R;
	int found=0;
	char temp[SIZE][SIZE];
	char ch;
	
	for (i=0;i<SIZE;i++){
		for(j=0;j<SIZE;j++)
		temp[i][j]=seat[i][j];
	}
	srand(time(NULL)); 
	while(found!=1){
		oo=rand()%2;
		r=rand()%(SIZE-1)+1;
		c=rand()%(SIZE-4)+1;
		C=rand()%(SIZE-2)+1;
		R=rand()%(SIZE-2)+1;
	//way1
	if(oo){
		ok=1;
		for(k=0;k<4;k++){
			if(seat[r][c+k]!='-'){
				ok=0;
			}
		}
		if(ok){
			for(k=0;k<4;k++){
				temp[r][c+k]='@';
				
			}
			found=1;
				break;
		}	
	}
	//way2
	else{
		for(k=0;k<2;k++){
			if(temp[R][C+k]!='-'||temp[R+1][C+k]!='-')
			ok=0;
		}
	}
	if(ok){
		for (k = 0; k < 2; k++) {
                    temp[R][C + k] = '@';
                    temp[R + 1][C + k] = '@';
                    found=1;
                }
	}
	
	}

	printf("建議座位如下：\n");
    printf("\\123456789\n");
    for (i = 1; i < SIZE; i++) {
        printf("%d", SIZE - i);
        for (j = 1; j < SIZE; j++) {
            printf("%c", temp[i][j]);
        }
        printf("\n");
    }
    printf("你是否滿意這次的座位選擇:\n是:y\n不:n\n");
    fflush(stdin);
	scanf("%c",&ch);
    if(ch=='y'){
     	for (i = 0; i < SIZE; i++){
		for (j = 0; j < SIZE; j++)
            seat[i][j]=temp[i][j];
            
	}
	return ;
}
}



int ten (int x){
	char l;
	printf("\'Continue?(y/n)\'\n");
 
	do{
	fflush(stdin);
	scanf("%c",&l);

	if(l=='Y'||l=='y'){
		return 0;
	}
	
	else if(l=='N'||l=='n'){
		return 1;
	}

	else{
		printf("錯誤輸入請重新輸入:"); 
	}

	}while(1);
}



