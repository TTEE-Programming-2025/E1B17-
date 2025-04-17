#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i,j,a,b=0;
	char c,e,space,ch,d;
	
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
	if(a==2025){
		printf("__________________\n"); 
		printf("|a.畫出直角三角形|\n");
		printf("|b.顯示乘法表    |\n");
		printf("|c.結束          |\n");
		printf("__________________\n"); 
	}
	fflush(stdin);
	scanf("%c",&e);
	if(e=='a'&&'A')
		system("CLS");
		printf("請輸入一個a到n的字元");
		fflush(stdin);
		scanf("%c",&c) ;
		//印三角形 
		for (d=c;d>='a';d--) {
        // 印空格
        for (space='a'; space<d;space++) {
            printf(" ");
        }
        // 印字母
        for (ch=d;ch<=c;ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }
	system("pause");
	
	return 0;
}
