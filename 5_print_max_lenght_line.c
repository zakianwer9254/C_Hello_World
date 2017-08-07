#include<stdio.h>
#define MAXLENTH 1000

int main(){
	int max=0;
	char longest[MAXLENTH];
	char current[MAXLENTH];
	int length;
	while((length = read_line(current,MAXLENTH))>0){
		if(length>max){
			max=length;
			copy_line(longest,current);
		}
	} 
	for (int i = 0; i < max; ++i)
	{
		printf("%c",longest[i]);
	}
	printf("%d\n",max);
	return 0;
}

int read_line(char line[], int length){
	int c;
	int i=0;
	while((c=getchar())!=EOF && length--){
		line[i]=c;
		++i;
		if(c=='\n'){
			//line[i]=='\0';
			break;
		}

	}
	
	line[i]=='\0';
	return i;
}

void copy_line(char longest[], char current[]){
	int i=0;
	while((longest[i]=current[i])!='\0'){
		i++;
	}
	
}

