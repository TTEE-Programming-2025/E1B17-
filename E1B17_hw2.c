#include<stdio.h>
#include<stdlib.h>
int main(void){
	int i,j,a,b=0,g,h,k;
	char c,e,space,ch,d,l;
	
	printf("╔════════════════════════════════════════════════════╗\n");
	printf("║                                                    ║\n");
	printf("║    █████ █████ █████ █████                         ║\n");
    printf("║        █ █   █     █ █                             ║\n");
    printf("║    █████ █   █ █████ █████                         ║\n");
    printf("║    █     █   █ █         █                         ║\n");
    printf("║    █████ █████ █████ █████                         ║\n");
	printf("║                                                    ║\n");
	printf("║                                                    ║\n");
	printf("║       歡迎來到E1B17的程式設計                      ║\n");
	printf("║                               -程式作業2           ║\n");
	printf("║                                                    ║\n");
	printf("║              編寫者:邱冠凱                         ║\n");
	printf("║                                                    ║\n");
	printf("║                                                    ║\n");
	printf("║                                                    ║\n");
	printf("║                                                    ║\n");
	printf("║                             按下任意鍵開始使用 ....║\n");
	printf("║                                                    ║\n");
	printf("╚════════════════════════════════════════════════════╝\n");
	system("pause"); 
	
	
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
		if(e=='a'||e=='A'){
		
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
	else if(e=='b'||e=='B'){
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
	
	else if(e=='c'||e=='C'){
	printf("\'Continue?(y/n)\'\n");
	printf("如果要重新輸入，請打Y，若輸入N則回到作業系統");
	
	do{
	fflush(stdin);
	scanf("%c",&l);
	if(l=='Y'||l=='y'){
		system("cls");
		break;
	}
		
	else if(l=='N'||l=='n'){
		system("cls");
		printf("程式結束");
		return 0;
	}
	else{
		printf("錯誤輸入請重新輸入:"); 
	}
		
	}while(1);
	}
	else{
		system("cls");
		printf("錯誤輸入請重新輸入\n");
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
	
	return 0;
}
