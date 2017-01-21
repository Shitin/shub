#include<stdio.h>
#include<math.h>
int main(){
 float S,RG,SG,D,T;
 scanf("%f %f %f %f %f", &S, &RG, &SG, &D, &T);
 float real = D/(20*(T/3600)) + S;
 if(fabs(RG - real)  > fabs(SG - real)){
 	printf("SHYAM");
 }
 else if(fabs(RG - real)  < fabs(SG - real))
 	printf("RAM");
 else printf("DRAW");
}
