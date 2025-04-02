#include<stdio.h>
#include<stdlib.h>

int main(void){
	int password;
	int n,i,j,k;
	char m;
	printf(
	"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n" 
	"|##你好啊你好啊你好啊你好啊你好啊你好啊你好啊##|\n"
	"|O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0|\n");

	for(i=1;i<=5;i++){
		printf("|");
		//輸入"|"
			for(j=6-i;j>=1;j--){
			printf("*");	
			}//輸入星階 *從6到1 
		printf("                 ");
		// 加入空白鍵 
			for(j=1;j<=i;j++){
				printf("*");	
			}//輸入星階 *從1到6
			for(j=1;j<=i;j++){
				printf("*");	
			}//輸入星階 *從1到6
		printf("                 ");
		// 加入空白鍵
			for(j=6-i;j>=1;j--){
				printf("*");	
				}//輸入星階 *從6到1
		printf("|");
		//輸入"|"
		printf("\n");
		//換行 
	}
	for(i=1;i<=5;i++){
		printf("|");
		//輸入"|"
		for(j=1;j<=i;j++){
			printf("*");	
		}//輸入星階 *從1到6
	printf("                 ");	
		// 加入空白鍵
		for(j=6-i;j>=1;j--){
			printf("*");	
		}//輸入星階 *從6到1	
		for(j=6-i;j>=1;j--){
			printf("*");	
		}//輸入星階 *從6到1	
	printf("                 ");
		// 加入空白鍵
		for(j=1;j<=i;j++){
			printf("*");	
		}//輸入星階 *從1到6	
	printf("|");
	//輸入"|"
	printf("\n");
	//換行 
	}//用星階表現出<> 
	

	printf(
	"|O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0O0|\n"	
	"|##你好啊你好啊你好啊你好啊你好啊你好啊你好啊##|\n"
	"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n"
	);
	
	system("pause");//系統暫停 
	system("CLS");//清除畫面 
	

	printf("輸入4位數密碼:");
	scanf("%d",&password);
	if(password==2025)//密碼是否為2025 
	{
	
		printf("歡迎你\n");

		system("pause");//系統暫停
		system("CLS");//清除畫面 
	
	printf(
	"請輸入下列字元:\n"
	" 'A'~'Z' :Uppercase\n"
	" 'a'~'z' :Lowercase\n"
	" '0'~'9' :Digit\n"
	"Otherwise:Your name\n");
		fflush(stdin);//清除緩衝區 
		scanf("%c",&m);
		if(m>='A'&&m<='Z') 
		printf("Uppercase");
		else if(m>='a'&&m<='z')
		printf("Lowercase");
		else if(m>='0'&&m<='9')
		printf("Digit");
		else
			printf("E1B17  邱冠凱");
			//判斷輸入顯示各種輸出 
	} 

	
	else
		printf("密碼錯誤\n");
		//密碼不為2025時輸出錯誤 

	system("pause");//系統暫停 
	return 0;

}
//在這次實驗中我大量的使用for loop和if-else複習了上學期不夠熟悉的迴圈，也第一次打上註解，所以打得比較仔細
//而在除錯的過程中，我也更加熟悉這個程式的流程。 
