#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int iSize = 0;

int asciiHEXToInt(char *ptr)
{
	int iResult = 0;

	for (ptr; *ptr != '\0'; ptr++)
	{
		if (*ptr >=65 && *ptr <=70)
		{
			iResult += (*ptr -55)* pow(16,iSize-1);
			iSize--;
		}
		else if (*ptr >=97 && *ptr <=102)
		{
			iResult += (*ptr -87)* pow(16,iSize-1);
			iSize--;
		}
		else if (*ptr >= 48 && *ptr <=57)
		{
			iResult += (*ptr -48)* pow(16,iSize-1);
			iSize--;
		}
		else
		{
			printf("Numero invalido");
			return 0;
		}
	}
	return iResult;
}

int asciiBINToInt(char *cArr)
{
	int iTotal = 0;

	for (int iCount = 0; iCount < strlen(cArr); iCount++) {

		if (cArr[iCount] != '1' && cArr[iCount] != '0')
		{
			return iTotal;
		}

		iTotal *= 2;

		if (cArr[iCount] == '1')
		{
			iTotal++;
		}
	}

	return iTotal;
}

double asciiToDouble(char *ptr)
{
	char sArr1[iSize];
	int iCont = 0;
	float f;

	for (ptr; *ptr != '\0'; ptr++,iCont++)
	{

		if (*ptr>= 43 && *ptr<=57 && *ptr!=44 && *ptr !=47)
		{
           	sArr1[iCont] = *ptr;

       	}
      	else
		{
			printf("Numero invalido\n");
           	return 0;
    	}
   	}
   	sscanf(sArr1,"%f",&f);
  	return f;
}



