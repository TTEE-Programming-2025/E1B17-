#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct student{
	char name[9];
	char number[6];
	int math;
	int physics;
	int english;
};
struct student student[10];
void Personal (int x) {
//A personalized screen with unique styles
	printf("שÝשששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששß\n");
	printf("שר                                                    שר\n");
	printf("שר    ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i                         שר\n");
    printf("שר        ¢i ¢i   ¢i     ¢i ¢i                             שר\n");
    printf("שר    ¢i¢i¢i¢i¢i ¢i   ¢i ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i                         שר\n");
    printf("שר    ¢i     ¢i   ¢i ¢i         ¢i                         שר\n");
    printf("שר    ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i ¢i¢i¢i¢i¢i                         שר\n");
	printf("שר                                                    שר\n");
	printf("שר                                                    שר\n");
	printf("שר       Welcome to E1B17 Programming Design          שר\n");
	printf("שר                      -Programming assignment4      שר\n");
	printf("שר                                                    שר\n");
	printf("שר^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^שר\n");
	printf("שר<             Author: Chiu Guan-Kai                >שר\n");
	printf("שרvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvשר\n");
	printf("שר                                                    שר\n");
	printf("שר                                                    שר\n");
	printf("שר                                                    שר\n");
	printf("שר                         Press any key to start ....שר\n");
	printf("שר                                                    שר\n");
	printf("שדשששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששששו\n");
}

int Password (int x){
	int i,a,b=0,B=0,ok;
	char P[]="2025";
	char pass[4];

	while(1){
	printf("Please enter the password (4 digits):");
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
		printf("Password is incorrect\n");
		B++;
		}
	if(B==3)
		return 0;
	
	}
	return 1;
}

void menu(int x){
	printf("------------[Grade System]------------\n");
    printf("| a. Enter student grades            |\n");
    printf("| b. Display student grades          |\n");
    printf("| c. Search for student grades       |\n");
    printf("| d. Grade ranking                   |\n");
    printf("| e. Exit system                     |\n");
    printf("--------------------------------------\n");
}
void enter(int x){

	int i;
	for (i=0;i<x;i++){
		printf("½׀¿י₪J²ִ%d­׃¾ַ¥ֽ¸ך®ֶ:\n",i+1);
		printf("©m¦W:");
		fflush(stdin);
		scanf("%s",student[i].name);
		while(1){
			printf("¾ַ¸¹:");
			fflush(stdin);
			scanf("%s",student[i].number);
			if (strlen(student[i].number) == 6 && isAllDigits(student[i].number)) {
				break;	
			}
			else
			printf("¿ש»~");
		}
		while(1){
			printf("¼ֶ¾ַ¦¨ֱZ:");
			scanf("%d",&student[i].math);
			if(student[i].math>=0&&student[i].math<=100)
				break;
		}
		while(1){
		printf("×«²z¦¨ֱZ:");
			scanf("%d",&student[i].physics);
		if(student[i].physics>=0&&student[i].physics<=100)
				break;
		}	
			
		while(1){	
		printf("­^₪ו¦¨ֱZ:");
			scanf("%d",&student[i].english);
		if(student[i].english>=0&&student[i].english<=100)
				break;
		}	
	}
	
}
int isAllDigits(char str[]) {
    int i;
	for (i = 0; str[i]; i++) {
        if (!isdigit(str[i]))
		return 0;
    }
    return 1;
}

int main(void){
	int password,n;
	char num;
	Personal(1);
	system("pause");
	system("cls");
	
	password=Password(1);
	if(password==0){
		return 0;
	}
	system("pause");
	system("cls");
	
	menu(1);
	
	scanf("%c",&num);
	if(num=='a'){
		do{
			printf("½׀¿י₪J5~10×÷¾ד¼ֶ");
			scanf("%d",&n);
		}while(n<5||n>10);
		fflush(stdin);
		enter(n);
	}
	printf("%s %s %d %d %d",student[0].name,student[0].number,student[0].math,student[0].physics,student[0].english);
}

