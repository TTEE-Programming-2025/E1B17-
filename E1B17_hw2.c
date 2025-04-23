#include<stdio.h>
#include<stdlib.h>
int main(void){
	//宣告變數 
	int i,j,a,b=0,g,h,k;
	char c,e,space,ch,d,l;
	//具有各人風格的畫面 
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
	
	//輸入密碼，如果錯誤三次則結束程式 
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
	//清除版面
	//如果密碼正確，顯示選單 
	while(1){
		if(a==2025){
			printf("_______主選單_____\n"); 
			printf("|a.畫出直角三角形|\n");
			printf("|b.顯示乘法表    |\n");
			printf("|c.結束          |\n");
			printf("__________________\n"); 
		}
	fflush(stdin);
	scanf("%c",&e);
		//輸入A或a則執行 
		if(e=='a'||e=='A'){
		
			system("CLS");
		//輸入一個A~N的字元，如果輸入錯誤，則反覆輸入到正確 
		do{
			printf("請輸入一個a到n的字元");
			fflush(stdin);
			scanf("%c",&c) ;	
		}while(c<='a'||c>='o');
	
		//印出三角形 
		for (d=c;d>='a';d--) {
		// 先印空格
        for (space='a'; space<d;space++) {
            printf(" ");
        }
        // 再印字母
        for (ch=d;ch<=c;ch++) {
            printf("%c", ch);
        }
        printf("\n");
    }
    //輸入任意鍵，清除螢幕並返回選單 
	printf("按下任意鍵返回選單"); 
	getch();
		system("CLS");
		continue;
	}
	//	
	//如果輸入為B或b則執行 
	else if(e=='b'||e=='B'){
	//再要求輸入1~9其中一個數，如果輸入錯誤則輸入到正確為止 
	do{
			printf("輸入一個1到9的整數:");
			fflush(stdin);
			scanf("%d",&g) ;	
	//輸入錯誤，顯示錯誤並發出聲音體醒使用者 
	if(g<1||g>10){
		printf("錯誤輸入請重新");
		printf("\a");
		}
	}while(g<=1||g>=10);
	//印出N階乘法表 
	for(h=1;h<=g;h++){
		for(k=1;k<=g;k++){
		printf(" %d*%d=%d",h,k,h*k);
	//對齊 
		if(h*k<10){
			printf(" ");
		}
		}
		printf("\n");	
	}
	//按下任意鍵清除螢幕並返回選單 
	printf("按下任意鍵返回選單");
	getch();
		system("CLS");
		continue;
	}
	//如果輸入C或c則執行 
	else if(e=='c'||e=='C'){
	//詢問是否要回到作業系統 
	printf("\'Continue?(y/n)\'\n");
	printf("如果要重新輸入，請打Y，若輸入N則回到作業系統");
	//確定輸入是Y、y還是N、n，輸入其他則重新輸入 
	do{
	fflush(stdin);
	scanf("%c",&l);
	//若輸入為Y、y則返回選單 
	if(l=='Y'||l=='y'){
		system("cls");
		break;
	}
	//輸入N或n結束程式	
	else if(l=='N'||l=='n'){
		system("cls");
		printf("程式結束");
		return 0;
	}
	//輸入其他重新輸入 
	else{
		printf("錯誤輸入請重新輸入:"); 
	}
	//無限迴圈	
	}while(1);
	}
	//輸入其他重新輸入
	else{
		system("cls");
		printf("錯誤輸入請重新輸入\n");
		}
	}
	//系統暫停，結束程式 
	system("pause");
	
	return 0;
}
//在這次的程式中，我覺得有點像簡易版的手機，當密碼輸入正確後可以無限使用。
//這次遇到比較困難的事到三角的英文字+控格輸入，還有各人風格畫面我想了比較久 
//這次程式使用了很多無線迴圈+判斷條件，我發現比起要輸入條件的while迴圈，我更喜歡使用這種得 
//然後設次程式很長，所以花了比較多天才寫好，如果還有時間，我會試著使用函數的方式讓主程式的版面乾淨一點
//宣告的變數也會少一點 
