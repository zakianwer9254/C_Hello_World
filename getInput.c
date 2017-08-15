#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



int buffer=0;

int main(){

	int x=5;
	char y='a';
	printf("%d %d\n",x,y);
	char *s=(char*)malloc(sizeof(char));
	int ans;
	while((ans=get(s))!=EOF){
		switch(ans){
			case '0' :
			printf("%d\n",atoi(s));
			break;
			case '+' :
			printf("its +\n");
			break;
			case '-' :
			printf("its minus\n");
			break;
		}
	}
}

int get(char *s){
	int i=0,c;
	int size=1;
	while((s[0]=c=getch())==' ' || c==' ' || c=='\t');
	s = (char *)realloc(s,++size*sizeof(char));
	s[1]='\0';
	if(!isdigit(c))
		return c;
	if(isdigit(c)){
		s = (char *)realloc(s,++size*sizeof(char));
		while(isdigit(s[++i]=c=getch()))
			s = (char *)realloc(s,++size*sizeof(char));
		
	}
	s[i]='\0';
	if(c!=EOF)
		ungetch(c);
	return '0';
}

void getch(){
	int x;
	if(buffer!=0){
		x=buffer;
		buffer=0;
		return x;
	}
	else
		return getchar();
}

void ungetch(c){
	buffer=c;
}
