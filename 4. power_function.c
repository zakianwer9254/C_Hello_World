#include<stdio.h>

int power(int base, int exp){
	int ans=1;
	for(int i=0; i<exp; i++)
		ans*=base;
	return ans;
}



int main(){
	int base,exp;
	int result;
	scanf("%d %d",&base,&exp);
	result = power(base,exp);
	printf("%d\n",result);

}