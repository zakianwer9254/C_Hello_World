#include<stdio.h>
#define MAXLENTH 1000

int main(){
	//char line[MAXLENTH];
	int c;
	int i=0;
	
	while((c=getchar())!=EOF){
		reverse_string(c);
		printf("\n");
	}

}

void reverse_string(char c){
	int ch;
	if(c=='\n')
		return;
	if((ch=getchar())!=EOF)
		reverse_string(ch);
	printf("%c",c);
	
}