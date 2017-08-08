#include<stdio.h>
#define MAXLENTH 1000
/*what is this***/

int main(){
	int c;
	while((c=getchar())!=EOF){
		if(c=='"'){
			printf("%c",c);
			while((c=getchar())!='"')
				printf("%c",c);
		}
		else if(c=='/'){
			if((c=getchar())=='/'){
				while((c=getchar())!='\n');
			}
			else if(c=='*'){
				long_comment();
			}
		}
		else
			printf("%c",c);
	}

}

void long_comment(){
	int c;
	while((c=getchar())!='*');
	if(c!='/')
		long_comment();
	return;
}