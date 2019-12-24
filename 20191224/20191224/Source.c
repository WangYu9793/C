#include<stdio.h>   
int main(){ 
	int i, j, k;
  for(i=1;i<=3;++i){
	for(j=1;j<=3;++j)
	{
		for(k=1;k<=3;++k){
			if (i==j||j==k||i==k)
			{
				continue;
			}
			if(i!=1&&k!=1&&k!=3)
			{
				printf("Avs%c\n",i+'X'-1);      
				printf("Bvs%c\n",j+'X'-1);
				printf("Cvs%c\n",k+'X'-1);      
				return  0;
			}
		}
	}
}
return  0;
}