#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(int argc, char* argv[]){
	int p;
	bool exit = false;
	char flag[7];

	printf("yyyyyyyy:\n");
	while(!exit){
	  
                scanf("%7s",flag);//? flag=argv[1];
	
	
	if(strcmp(flag,"-h") == 0 || strcmp(flag,"--help") == 0){
		printf("eeeeeeeeeee\n");
		continue;
		
	}
	else if(strcmp(flag,"-t") == 0 || strcmp(flag,"--table") == 0){
	 printf("-t and --table\t-c and --calc\t-i and --int\t-e and --exit\t-x and --hex\n");
	 // int sizeof()
	}
	else if(strcmp(flag,"-i") == 0 || strcmp(flag,"--int") == 0){
		printf("%d",p);
		printf("\n");
        }
	else if(strcmp(flag,"-c") == 0 || strcmp(flag,"--calc") == 0){       
                printf("Enter a number:\n");
		scanf("%d",&p);

		printf("hex or int?\n");
	}
	else if(strcmp(flag,"-e") == 0 || strcmp(flag,"--exit") == 0){
		exit = true;
        }
	else if(strcmp(flag,"-x") == 0 || strcmp(flag,"--hex") == 0){
                printf("%x",p);
		printf("\n");
        }
	else{
		printf("wrong input. try again\n");
	}
   
}

return 0;
}