#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int n;
//Declare a structure
struct student{
	char name[9];
	char number[6];
	int math;
	int physics;
	int english;
	float avg;
};
struct student student[10];
void Personal (int x) {
//A personalized screen with unique styles
	printf("������������������������������������������������������������������������������������������������������������\n");
	printf("��                                                    ��\n");
	printf("��    �i�i�i�i�i �i�i�i�i�i �i�i�i�i�i �i�i�i�i�i                         ��\n");
    printf("��        �i �i   �i     �i �i                             ��\n");
    printf("��    �i�i�i�i�i �i   �i �i�i�i�i�i �i�i�i�i�i                         ��\n");
    printf("��    �i     �i   �i �i         �i                         ��\n");
    printf("��    �i�i�i�i�i �i�i�i�i�i �i�i�i�i�i �i�i�i�i�i                         ��\n");
	printf("��                                                    ��\n");
	printf("��                                                    ��\n");
	printf("��       Welcome to E1B17 Programming Design          ��\n");
	printf("��                      -Programming assignment4      ��\n");
	printf("��                                                    ��\n");
	printf("��^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^��\n");
	printf("��<             Author: Chiu Guan-Kai                >��\n");
	printf("��vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv��\n");
	printf("��                                                    ��\n");
	printf("��                                                    ��\n");
	printf("��                                                    ��\n");
	printf("��                         Press any key to start ....��\n");
	printf("��                                                    ��\n");
	printf("������������������������������������������������������������������������������������������������������������\n");
}
//password
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
//menu
void menu(int x){
	printf("------------[Grade System]------------\n");
    printf("| a. Enter student grades            |\n");
    printf("| b. Display student grades          |\n");
    printf("| c. Search for student grades       |\n");
    printf("| d. Grade ranking                   |\n");
    printf("| e. Exit system                     |\n");
    printf("--------------------------------------\n");
}
//enter students information
void enter(int x){

	int i;
	for (i=0;i<x;i++){
		system("cls");
		printf("Enter data for the %dth student:\n",i+1);
		printf("�m�W:");
		fflush(stdin);
		scanf("%8s",student[i].name);
		while(1){
			printf("number:");
			fflush(stdin);
			scanf("%s",student[i].number);
			if (strlen(student[i].number) == 6 && isAllDigits(student[i].number)) {
				break;	
			}
			else
			printf("Error\n");
		}
		while(1){
			printf("math grade:");
			scanf("%d",&student[i].math);
			if(student[i].math>=0&&student[i].math<=100)
				break;
		}
		while(1){
		printf("physics grade:");
			scanf("%d",&student[i].physics);
		if(student[i].physics>=0&&student[i].physics<=100)
				break;
		}	
			
		while(1){	
		printf("english grade:");
			scanf("%d",&student[i].english);
		if(student[i].english>=0&&student[i].english<=100)
				break;
		}
		student[i].avg=	((float)(student[i].math+student[i].physics+student[i].english))/3;
	}
	
}
//Determine if it is an integer
int isAllDigits(char str[]) {
    int i;
	for (i = 0; str[i]; i++) {
        if (!isdigit(str[i]))
		return 0;
    }
    return 1;
}
//output
void output(int x){
	int i;
	printf("nunber    name     Math  English Physics avg\n");
	for(i=0;i<n;i++){
		
			printf("%6s  %-9s%-3d   %-3d     %-3d     %-3.1f\n",student[i].number,student[i].name,student[i].math,student[i].physics,student[i].english,student[i].avg);
		
	}
}
//search a student 
void search(int x){
	char nname[9];
	int i,b=0;
	printf("Please enter student's name:");
	scanf("%s",nname);
	
	for(i=0;i<n;i++){
		if(strcmp(student[i].name,nname)==0){
			printf("nunber    name     Math  English Physics avg\n");
			printf("%6s  %-9s%-3d   %-3d     %-3d     %-3.1f\n",student[i].number,student[i].name,student[i].math,student[i].physics,student[i].english,student[i].avg);
		b=1;
		}
		
		}
	
	if(!b){
		printf("Not found");
	}
}
//Sort from largest to smallest
void rank(int x){
	int max=student[0].english+student[0].math +student[0].physics;
	int min=student[0].english+student[0].math +student[0].physics;
	int i,j;
	
	for(i=0;i<n;i++){
		if(max<student[i].english+student[i].math +student[i].physics){
			max=student[i].english+student[i].math +student[i].physics;
		}
		if(min>student[i].english+student[i].math +student[i].physics){
			min=student[i].english+student[i].math +student[i].physics;
	}
	printf("nunber    name     Math  English Physics avg\n");
	
	for(j=max;j<=min;j--){
		for(i=0;i<n;i++){
		if(j==student[i].english+student[i].math +student[i].physics)
		printf("%6s  %-9s%-3d   %-3d     %-3d     %-3.1f\n",student[i].number,student[i].name,student[i].math,student[i].physics,student[i].english,student[i].avg);
	}
	}
}
}
//Ask whether to exit the program
int end(int x){
	char l;
	printf("\'Continue?(y/n)\'\n");
	do{
	fflush(stdin);
	scanf("%c",&l);
	if(l=='Y'||l=='y'){
		return 1;
	}
	else if(l=='N'||l=='n'){
		return 0;
	}
	else{
		printf("Invalid input, please try again:"); 
	}
	}while(1);
}
//Main program
int main(void){
	int password,e;
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
	while(1){
	system("cls");
	menu(1);
	scanf("%c",&num);
	if(num=='a'){
		system("cls");
		do{
			printf("Please enter an integer between 5 and 10:");
			fflush(stdin);
			scanf("%d",&n);
		}while(n<5||n>10);
		enter(n);
		continue;
	}
	if(num=='b'){
		system("cls");
		output(1);
		getch();
		continue;
	}
	if(num=='c'){
		system("cls");
		search(1);
		getch();
		continue;
	}
	if(num=='d'){
		rank(1);
		getch();
		continue;
	}
	if(num=='e') {
	e=end(1);
	if(e){
		return 0;
	}
	}
}}
//In this program for a simple grade input system using structures, 
//I used functions better than in the last assignment and organized the overall structure more clearly
//I also gave the functions more meaningful names, making debugging and reading easier.
//At the same time, I also learned how to use structures together with arrays to complete the program��s input and output.
