#include<stdio.h>
#include<math.h>
int main()
{
double F,P,i,I;//F:������ֵ P:���� i:���� I:��Ϣ
int N;//��
int M;//��������
int a;
printf("1.����������ֵ  2.������ֵ�󱾽�\n");
scanf("%d",&a);
if(a==1){
printf("�����뱾�𱾽�:");
scanf("%lf",&P);
printf("������������(%%):");
scanf("%lf",&i);
printf("�������������:");
scanf("%d",&N);
printf("�������긴������:");
scanf("%d",&M);
if(M==1)
{
F=P*pow(1+i*0.01,N);
}
else
{
F=P*pow(1+i/M*0.01,M*N);
}
I=P*i*0.01*N;
printf("���յĸ�����ֵΪ:%lf\n",F);
printf("�簴�������㣬��ϢΪ:%lf\n",I);
}
if(a==2){
printf("�����븴����ֵ:");
scanf("%lf",&F);
printf("������������(%%):");
scanf("%lf",&i);
printf("�������������:");
scanf("%d",&N);
printf("�������긴������:");
scanf("%d",&M);
if(M==1)
{
P=F/pow(1+i*0.01,N);
}
else
{
P=F/pow(1+i/M*0.01,M*N);
}
printf("����Ϊ:%lf\n",P);
}
}