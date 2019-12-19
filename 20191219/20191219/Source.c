#include "stdio.h"
#include "string.h"
#define N 10
int main()
{
	char s[N][81], *t;                                           
		int j;                                                              
		for (j = 0; j<N; j++)                                        
			gets(s[j]);                                                  
			t = *s;                                                              
			for (j = 1; j<N; j++)                                            
				if (strlen(t)<strlen(s[j]))                                
					t = &s[j];                                                          
					printf("strings is: %d, %s\n", strlen(t), t);         
}
