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
# define SIZE 10
#include<time.h>
char seat[SIZE][SIZE];

int main(void){
	char a;
	int num;
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
			printf("½׀¿י₪J­q¦ל₪H¼ֶ¡]1~4¡^¡G");
			fflush(stdin);
			scanf("%d",&num);
			if(num>=1&&num<=3)
			six(num);
			system("cls");
			continue;
			if(num==4);
				
			
		}
		
		
			}
}
void one (int x){
	//¨ד¦³¦U₪H­·®ז×÷µe­± 
	printf("שÝשששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששß\n");
	printf("שר                                                    שר\n");
	printf("שר    ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i                         שר\n");
    printf("שר        ¢i ¢i   ¢i     ¢i ¢i                             שר\n");
    printf("שר    ¢i¢i¢i¢i¢i ¢i   ¢i ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i                         שר\n");
    printf("שר    ¢i     ¢i   ¢i ¢i         ¢i                         שר\n");
    printf("שר    ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i                         שר\n");
	printf("שר                                                    שר\n");
	printf("שר                                                    שר\n");
	printf("שר       ֵw×ן¨׃¨לE1B17×÷µ{¦¡³]­p                      שר\n");
	printf("שר                               -µ{¦¡§@·~3           שר\n");
	printf("שר                                                    שר\n");
	printf("שר^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^שר\n");
	printf("שר<             ½s¼g×ּ:×פ«a³ֽ                        >שר\n");
	printf("שרvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvשר\n");
	printf("שר                                                    שר\n");
	printf("שר                                                    שר\n");
	printf("שר                                                    שר\n");
	printf("שר                             «צ₪U¥פ·Nֱה¶}©l¨ֿ¥־ ....שר\n");
	printf("שר                                                    שר\n");
	printf("שדשששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששו\n");
	system("pause");
	system("cls");
}
int two (int x){
	int i,a,b=0,B=0,ok;
	char P[]="2025";
	char pass[4];

	while(1){
	printf("½׀¿י₪J±K½X(4¦ל):");
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
		printf("±K½X₪£¥¿½T\n");
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
        if (seat[row][col] != '*') { // ֱ׳§K­«½ֶ¦ל¸m
            seat[row][col] = '*';
            count++;
        }
    }       
            
}
void five(int x){
	 int i,j;
	 printf("\\123456789\n"); // ֵד¥Üִז¸¹
    for ( i = 1; i < SIZE; i++) {
        printf("%d", SIZE - i); // ₪ֿ¦V¦C¸¹¡]9¨ל1¡^
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
	printf("«״ִ³®y¦ל¦p₪U¡G\n");
    printf("\\123456789\n");
    for (i = 1; i < SIZE; i++) {
        printf("%d", SIZE - i);
        for (j = 1; j < SIZE; j++) {
            printf("%c", temp[i][j]);
        }
        printf("\n");
    }
    printf("§A¬O§_÷¡·N³o¦¸×÷®y¦ל¿ן¾Ü:\n¬O:y\n₪£:n\n");
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
