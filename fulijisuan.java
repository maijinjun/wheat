#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d;   //aΪ������ֵ��bΪ����cΪ���ʣ�dΪ��������
	printf("��������뱾��:");
	scanf("%f",&b);
	printf("����������:");
	scanf("%f",&c);
	printf("�������������:");
	scanf("%f",&d);
	a=b*pow((1+c),d);
	printf("���յĸ�����ֵΪ:%f\n",a);
}