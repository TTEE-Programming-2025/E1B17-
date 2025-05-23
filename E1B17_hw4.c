#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int n;
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
		printf("�п�J��%d�Ӿǥ͸��:\n",i+1);
		printf("�m�W:");
		fflush(stdin);
		scanf("%8s",student[i].name);
		while(1){
			printf("�Ǹ�:");
			fflush(stdin);
			scanf("%s",student[i].number);
			if (strlen(student[i].number) == 6 && isAllDigits(student[i].number)) {
				break;	
			}
			else
			printf("���~");
		}
		while(1){
			printf("�ƾǦ��Z:");
			scanf("%d",&student[i].math);
			if(student[i].math>=0&&student[i].math<=100)
				break;
		}
		while(1){
		printf("���z���Z:");
			scanf("%d",&student[i].physics);
		if(student[i].physics>=0&&student[i].physics<=100)
				break;
		}	
			
		while(1){	
		printf("�^�妨�Z:");
			scanf("%d",&student[i].english);
		if(student[i].english>=0&&student[i].english<=100)
				break;
		}
		student[i].avg=	((float)(student[i].math+student[i].physics+student[i].english))/3;
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
void output(int x){
	int i;
	printf("�Ǹ�    �m�W     Math  English Physics avg\n");
	for(i=0;i<n;i++){
		
			printf("%6s  %-9s%-3d   %-3d     %-3d     %-3.1f\n",student[i].number,student[i].name,student[i].math,student[i].physics,student[i].english,student[i].avg);
		
	}
}
void search(int x){
	char nname[9];
	int i,b=0;
	printf("�п�J�ǥͩm�W:");
	scanf("%s",nname);
	
	for(i=0;i<n;i++){
		if(strcmp(student[i].name,nname)==0){
			printf("�Ǹ�    �m�W     Math  English Physics avg\n");
			printf("%6s  %-9s%-3d   %-3d     %-3d     %-3.1f\n",student[i].number,student[i].name,student[i].math,student[i].physics,student[i].english,student[i].avg);
		b=1;
		}
		
		}
	
	if(!b){
		printf("��Ƥ��s�b");
	}
}
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
	printf("�Ǹ�    �m�W     Math  English Physics avg\n");
	
	for(j=max;j<=min;j--){
		for(i=0;i<n;i++){
		if(j==student[i].english+student[i].math +student[i].physics)
		printf("%6s  %-9s%-3d   %-3d     %-3d     %-3.1f\n",student[i].number,student[i].name,student[i].math,student[i].physics,student[i].english,student[i].avg);
	}
	}
}
}
int main(void){
	int password;
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
	//
	system("cls");
	menu(1);
	scanf("%c",&num);
	if(num=='a'){
		system("cls");
		do{
			printf("�п�J5~10�����:");
			fflush(stdin);
			scanf("%d",&n);
		}while(n<1||n>10);
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
	}

}}


