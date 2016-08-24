#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{
	float price;
	char itemname[100][100];
}item;

int main(int argc, char *argv[])
{
    FILE *fp = fopen(argv[0],"r");
    const char s = ",";
    char *token,line[100];
    int i,j;
    item rest[50];



    if(fp != NULL)
    {	
	for(i = 0;i!= sizeof line;i++){
        	while(fgets(line, sizeof line, fp) != NULL)
        	{
			
			token = strtok(NULL, s);
			rest[i].price = atof(token);
			
			token = strtok(NULL, s);
			for(j = 0;j<sizeof token;j++)
        		{   
				
				rest[i].item[i][j] = token;
      				printf("%s\t",token);
        			
        		}       
            		
        	}
	}
	
	
        fclose(fp);
    } else {
        perror("Please give a csv file!!!");
    }   
	return 0;
}
