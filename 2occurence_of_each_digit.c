#include<stdio.h>

#define OUT 0
#define IN 1

int main(){
	int c;
	while((c=getchar())!=EOF){
		if(c=='\n' || c==' ' || c=='\t')
			printf("\n");
		else
			printf("%c",c);
	}



	return 0;
}