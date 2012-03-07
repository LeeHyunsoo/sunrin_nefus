#include <stdio.h>

int main(int argc, char **argv){
    int tape[99];
    int *head = tape;
    char curMconfig;
	int a=0,i=0;

    FILE *fp;
    fp = fopen(argv[1], "r");

    while((curMconfig=fgetc(fp))!=-1){
        switch(curMconfig){
            case '>':
                head++;
                break;
            case '<':
                head--;
                break;
            case '!':
                printf("%d\n", *head);
                break;
            case '?':
                scanf("%d", head);
                break;
            case '+':
                ++*head;
                break;
            case '-':
                --*head;
                break;
			case '*':
				scanf("%d",&a);
				for(i=1;i<=a;i++)
					printf("*");
				break;
        }
    }
    fclose(fp);
}
