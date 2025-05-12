#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<time.h> 
//Declare  functions
void one (int x);
int  two (int x);
void three(int x);
void four (int x);
void five (int x);
void six (int x);
void seven(int x);
void eight(int x);
int ten(int x);
//Define SIZE 
# define SIZE 10

char seat[SIZE][SIZE];

int main(void){
	char a;
	int num,result;
	//Show a user-specific interface
	one(1);
	//Prompt the user to enter the password "2025" and check whether it is correct.
	// If the password is entered incorrectly three times, terminate the program.
	if (!two(1)) {
		return 0;
	}
	system("CLS");
	//Display the menu 
	four(1);
	
	while(1){
		fflush(stdin);
		three(1);
		scanf("%c",&a);
		//Input 'A' to display the seating chart
		if(a=='a'){
			five(1);
			system("pause");
			system("CLS");
			fflush(stdin);
			continue;
		}
		//Enter 'B' and specify the number of seats; the system will automatically select the seats.
		if(a=='b'){
			printf("Enter the number of seats to reserve ¡]1~4¡^¡G");
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
		//Input 'C' to select seats from the seating chart
		if(a=='c'){
			eight(1);
		}
		//Input 'D' to prompt whether to exit the program
		if(a=='d'){
			result=ten(1);
			if(result){
				printf("End the program");
				return 0;
			}
			system("cls");
				continue;
		}
		
			}
}
void one (int x){
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
	printf("שר                      -Programming assignment3      שר\n");
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
	system("pause");
	system("cls");
}
int two (int x){
	int i,a,b=0,B=0,ok;
	char P[]="2025";
	char pass[4];

	while(1){
	printf("½׀Please enter the password (4 digits):");
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
void three (int x){
	printf("----------[Booking System]----------\n"
"| a. Available seats               |\n"
"| b. Arrange for you               |\n"
"| c. Choose by yourself            |\n"
"| d. Exit                          |\n"
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
		//Randomly display 10 seats 
		row = rand() % (SIZE-1)+1;
        col = rand() % (SIZE-1)+1;
        //Avoid duplicate positions
		if (seat[row][col] != '*') { 
            seat[row][col] = '*';
            count++;
        }
    }       
            
}
void five(int x){
	 int i,j;
	 //Show the column number
	 printf("\\123456789\n"); 
    for ( i = 1; i < SIZE; i++) {
        // Row numbers in reverse order (from 9 to 1)
		printf("%d", SIZE - i); 
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
    	//Randomly select the required number of consecutive seats
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
	printf("Suggested seats are listed below\n");
    printf("\\123456789\n");
    for (i = 1; i < SIZE; i++) {
        printf("%d", SIZE - i);
        for (j = 1; j < SIZE; j++) {
            printf("%c", temp[i][j]);
        }
        printf("\n");
    }
    printf("Are you satisfied with the seat selection?\nyes:y\nno:n\n");
    fflush(stdin);
	scanf("%c",&ch);
    if(ch=='y'){
     	for (i = 0; i < SIZE; i++){
		for (j = 0; j < SIZE; j++)
            if(temp[i][j]=='@')
			seat[i][j]='*';
            
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
		//Randomly generate 4 seats in the same row or split into two pairs of adjacent seats
		oo=rand()%2;
		r=rand()%(SIZE-1)+1;
		c=rand()%(SIZE-4)+1;
		C=rand()%(SIZE-2)+1;
		R=rand()%(SIZE-2)+1;
	//way1(four people together) 
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
	//way2(two seat and two seat)
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

	printf("Suggested seats are listed below:\n");
    printf("\\123456789\n");
    for (i = 1; i < SIZE; i++) {
        printf("%d", SIZE - i);
        for (j = 1; j < SIZE; j++) {
            printf("%c", temp[i][j]);
        }
        printf("\n");
    }
    printf("Are you satisfied with the seat selection?\nyes:y\nno:n\n");
    fflush(stdin);
	scanf("%c",&ch);
    if(ch=='y'){
     	for (i = 0; i < SIZE; i++){
		for (j = 0; j < SIZE; j++)
            if(temp[i][j]=='@')
			seat[i][j]='*';
            
	}
	return ;
}
}

void eight(int x){
    char input[300]; 
    int i,row, col;
    char *token;
    int selected[100][2]; // Save the selected seats
    int count = 0,hh=1;
	while(hh){
	
    printf("Please enter the seats (e.g., 1-2, 3-4, 5-6)¡G");
    fflush(stdin);
	fgets(input, sizeof(input), stdin);  
    //Separate the two seats with a comma
	token = strtok(input, ",");

    while (token != NULL) {
        fflush(stdin);
		if (sscanf(token, "%d-%d", &row, &col) == 2) {
            if (row >= 1 && row <= 9 && col >= 1 && col <= 9) {
                if (seat[10-row][col] == '*' || seat[10-row][col] == '@') {
                    printf("Seat %d-%d already selected, please choose again.\n", row, col);
                    break;
                }
				 else {
                    seat[10-row][col] = '@';
                    selected[count][0] = 10-row;
                    selected[count][1] = col;
                    count++;
                    hh=0;
                }
            } 
			else {
                printf("Seat %d-%dinvalid, please choose a seat between 1 and 9.\n", row, col);
                break;
            }
        } 
		else {
            printf("Format error: Please enter the correct seat format, e.g. 1-2\n");
            break;
        }
        token = strtok(NULL, ",");
    }
}


    printf("The current seats are as follows:\n");
    five(1);

    printf("Press any key to confirm and return to the main menu...\n");
    getch();
    system("cls");

    // Only convert the selected @ to * this time
    for ( i = 0; i < count; i++) {
        int r = selected[i][0];
        int c = selected[i][1];
        seat[r][c] = '*';
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
		printf("Invalid input, please try again:"); 
	}

	}while(1);
}
//This assignment is like arranging seats before a stage play.Before choosing seats, 10 spots have already been taken. 
//Then, users can either input the number of people to let the computer automatically assign seats, or manually enter multiple seat selections themselves.
//In this program, I tried many techniques I hadn¡¦t used before, such as using multiple functions to keep the main program clean and easier to read. 
//However, I feel that I didn¡¦t plan each function¡¦s responsibilities very well¡Xfor example, it ended up being one function per major section. 
//In the future, I¡¦d like to refactor it so that each small part is handled by its own function, making the structure clearer.
//While completing this program, I also learned many new programming techniques. 
//For example, I used randomly generated numbers with the modulo operation to make the pre-selected seats appear randomly.


