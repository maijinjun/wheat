#include<stdio.h>
#include<math.h>
int main()
{
	double F,P,i,I;//F:复利终值 P:本金 i:利率 I:利息
	int N;//年
	int M;//复利次数
	int a;
	printf("1.本金求复利终值 2.复利终值求本金\n");
	scanf("%d",&a);
	if(a==1){
		printf("请输入本金:");
		scanf("%lf",&P);
		printf("请输入年利率(%%):");
		scanf("%lf",&i);
		printf("请输入存入年限:");
		scanf("%d",&N);
		printf("请输入年复利次数:");
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
		printf("最终的复利终值为:%lf\n",F);
		printf("如按单利计算，本息为:%lf\n",I);
	}
	if(a==2){
		printf("请输入复利终值:");
		scanf("%lf",&F);
		printf("请输入年利率(%%):");
		scanf("%lf",&i);
		printf("请输入存入年限:");
		scanf("%d",&N);
		printf("请输入年复利次数:");
		scanf("%d",&M);
		if(M==1)
		{
			P=F/pow(1+i*0.01,N);
		}
		else
		{
			P=F/pow(1+i/M*0.01,M*N);
		}
		printf("本金为:%lf\n",P);
		}
	if(a==3){
		printf("请输入复利终值:");
		scanf("%lf",&F);
		printf("请输入年利率(%%):");
		scanf("%lf",&i);
		printf("请输入本金:");
		scanf("%lf",&P);
		double N = log(F/P)/log(i+1);
		printf("需要存入的年限为：%lf\n",N);
	}

}
