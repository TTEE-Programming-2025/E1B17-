#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
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

int main(void){
	int password;
	Personal(1);
	system("pause");
	system("cls");
	
	password=Password(1);
	if(password=0){
		return 0;
	}
	system("pause");
	system("cls");
	
	menu(1);
	
}

