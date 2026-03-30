#include<stdio.h>
int main(){
	float num1, num2;
	char cal,m;	
	do{
		printf("첫번째 수는 ? ");
		scanf("%f", &num1);
		printf("두번째 수는 ? ");
		scanf("%f", &num2);
		do{	
			printf("원하는 연산은? ");
			scanf(" %c", &cal);
			switch(cal) {
				case '+':
					printf("답은%.1f 입니다.\n", num1 + num2);
					break;
				case '-':
					printf("답은%.1f 입니다.\n", num1 - num2);
					break;
				case '*':
					printf("답은%.1f 입니다.\n", num1*num2);
					break;
				case '/':
					printf("답은%.1f 입니다.\n", num1/num2);
					break;
				}	
		}while(cal != '+' && cal != '-' && cal != '*' && cal != '/' );
	
	
			printf("계속할까요(y/n)?");
			scanf(" %c", &m);
			if(m  == 'n') { break;}
	}while(m == 'y');
}

