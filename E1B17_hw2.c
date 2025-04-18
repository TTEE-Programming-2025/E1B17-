#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i,j,a,b=0,g,h,k;
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
	while(1){
		if(a==2025){
			printf("__________________\n"); 
			printf("|a.畫出直角三角形|\n");
			printf("|b.顯示乘法表    |\n");
			printf("|c.結束          |\n");
			printf("__________________\n"); 
		}
	fflush(stdin);
	scanf("%c",&e);
		if(e=='a'&&e=='A'){
		
			system("CLS");
		//確定輸入是A~N 
		do{
			printf("請輸入一個a到n的字元");
			fflush(stdin);
			scanf("%c",&c) ;	
		}while(c<='a'||c>='o');
	
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
    getch();
		system("CLS");
		continue;
	}
	//	
	if(e=='b'||e=='B'){
	do{
			printf("輸入一個1到9的整數:");
			fflush(stdin);
			scanf("%d",&g) ;	
	if(g<1||g>9){
		printf("錯誤輸入請重新");
		printf("\a");
		}
	}while(g<=1||g>=9);
	for(h=1;h<=g;h++){
		for(k=1;k<=g;k++){
		printf(" %d*%d=%d",h,k,h*k);
		}
		printf("\n");	
	}
	getch();
		system("CLS");
		continue;
	}
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	
	return 0;
}
