#include <stdio.h>
//선린인터넷고등학교 1학년 1반 20번 이현수입니다. 다시 수정해서 올립니다.. 
int main(int argc, char **argv){
    int tape[99];
    int *head = tape;
	int i;
    char curMconfig;

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
				for(i=0;i<*head;i++)
					printf("*");
				printf("\n");
				break;
        }
    }
    fclose(fp);
}
