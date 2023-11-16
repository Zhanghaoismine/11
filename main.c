#include <stdio.h>
#include <stdlib.h>

int main(void){
	int i;
	int grade[5];
	int average=0;
	
	for(i=0;i<5;i++)
	{
		printf("input value[%i]=",i);
		scanf("%d",&grade[i]);
	}
	//반복문 및 포인터 문법을 통해 grade 배열\
	//값 출력 및 평균 계산
		for(i=0;i<5;i++)
	{
		printf("grade[%i]=%i\n",*(grade+i));
		average=(average+*(grade+i));
	}
		printf("average=%i\n", average/5);
		system("PAUSE");
	
	return 0;
}
