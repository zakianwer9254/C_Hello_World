#include<stdio.h>


int main(){
	int c;
	int digit[26];
	for(int i=0; i<26; i++){
		digit[i]=0;
	}
	while((c=getchar())!=EOF){
		if(c>='a' && c<='z')
			digit[c-'a']++;
	}
	for(int i=0; i<26; i++)
		printf("%c ",'a'+i);
	printf("\n");
	for(int i=0; i<26; i++)
		printf("%d ",digit[i]);
	return 0;
}