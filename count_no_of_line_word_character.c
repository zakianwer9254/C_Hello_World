#include<stdio.h>

#define OUT 0
#define IN 1

int main(){
	int c;
	int no_of_character, no_of_lines, no_of_words;
	no_of_lines=no_of_words=no_of_character=0;
	int state = OUT;
	

	while((c=getchar())!=EOF){
		++no_of_character;
		if(c=='\n')
			++no_of_lines;
		if(c==' ' || c=='\n' || c=='\t')
			state=OUT;
		else if(state==OUT){
			state=IN;
			++no_of_words;
		}

		//putchar(c);

	}

	printf("%d %d %d\n",no_of_character,no_of_words,no_of_lines);



	return 0;
}