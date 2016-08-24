#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct{
	float price;
	char itemname[100][100];
}item;

typedef struct{	
	id	int
	menu	
	list_of_items
}restaurant;


int main(int argc, char *argv[])
{
    FILE *fp = fopen(argv[0],"r");
    const char s = ",";
    char *token,line[100];
    int i,j;
    item rest[50];
	char input[100];



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

	printf("Enter the file name and choice of items");
	for(i=1;i<=n;i++){
		scanf("%s",input);

	return 0;

}

hashCeck(item[],char input[])
{
	float sum;
	int i,j;
	MACRO MAX input.length 
	bool setState[];
	while(//each combo is not checked){
		for(i=1;i<n;i++)
		{
		if(input[i]==item[i])
		{
			setState[i]=1;
			// then note the items exist in that particular restaurant
			sum+=item.list_of_item->item.price;
		}
		a[j]=sum; j++;
		}

		findMin(a[]);
	}
	// if fine numbers returns null then no combination of items exist in the same file.
	//else print sum and rest id check if all states are set.
}
	
