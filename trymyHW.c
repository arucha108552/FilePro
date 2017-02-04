#include <stdio.h>
#include <string.h>
#include <ctype.h>

void CountChar(char *ptrChr,int *alkeep,int size){
	char c;
	int keepAlpha[26];
	int alphaCount = 0;
	int count = 0;

	for ( c = 'a'; c <= 'z'; c++){
	
		 for (int i = 0; i < size; ++i)
		 {
		 	if(tolower(ptrChr[i]) == c){
		 		alphaCount+=1;
		 	}
		 }
		 alkeep[count] = alphaCount;
		 alphaCount = 0;
		 count+=1;
	}
}

int findMax(int *ptrInt){
	int max = 0;
	for (int i = 0; i < 26; ++i)
	{
		/* code */
		if (ptrInt[i] > max)
		{
			max = ptrInt[i];
		}
	}
	return max;
}

int main()
{	
  char myChar[256];
  scanf( "%s" , myChar );
  int alphaKeep[26];
  CountChar(myChar,alphaKeep,strlen(myChar));
  int max = findMax(alphaKeep);
  int countMax = max;
  int *ptr = alphaKeep;
  for (int i = 0; i < max; ++i)
  {
  	for (int j = 0; j < 26; ++j)
  	{
  		if(ptr[j] == countMax){
  			printf("*");
 			ptr[j]-=1;
  		}else{
  			printf(" ");
  		}
  	}
  	printf("\n");
  	countMax-=1;
  }
  for (char c = 'a'; c <= 'z'; c++){
		
		printf("%c",c);	

  }
  printf("\n");
}
