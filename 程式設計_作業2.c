#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i,j,a,b=0;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
		printf("%d",j);	
		}
		printf("\n");
	}
	printf("我是E1B17 邱冠凱\n");
	for(i=1;i-1<=9;i++){
		for(j=9;j>=i;j--){
		printf("%d",j);	
		}
		printf("\n");
	}
	
	while(1){
		if(b==3){
			printf("\a");
			printf("密碼錯誤三次");
			return 0;
		}
		printf("請輸入密碼:");
		scanf("%d",&a);
		if(a==2025)
			break;
		else
			b++;
	}
	system("CLS");
	system("pause");
	return 0;
}
