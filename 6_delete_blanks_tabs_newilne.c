#include<stdio.h>
#define MAXLENTH 1000

int main(){
	char line[MAXLENTH];
	int c;
	int i=0;
	while((c=getchar())!=EOF){
		if(c=='\n' || c==' ' || c=='\t')
			continue;
		line[i]=c;
		++i;
	}

	printf("%s\n",line);
}

