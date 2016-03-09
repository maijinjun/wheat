#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;   //a为复利终值，b为本金，c为利率，d为存入年限
	printf("请输入存入本金:");
	scanf("%f",&b);
	printf("请输入利率:");
	scanf("%f",&c);
	printf("请输入存入年限:");
	scanf("%f",&d);
	a=b*pow((1+c),d);
	printf("最终的复利终值为:%f\n",a);
}