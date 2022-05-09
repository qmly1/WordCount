#include<stdio.h>
int zifu(char fileName[]){
	FILE *fp;
	char ch;
	int count=0;
	if((fp=fopen(fileName,"r"))==NULL){
	 	printf("打开文件%s失败！\n",fileName);
		system("pause");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF){
		count++;
	}
	printf("字符数：%d",count);
}

int danci(char fileName[]){
	FILE *fp;
	char ch;
	char words[1000];
	int j=0,i;
	int count=0;
	if((fp=fopen(fileName,"r"))==NULL){
	 	printf("打开文件%s失败！\n",fileName);
		system("pause");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF){
		words[j++]=ch;
	}
	for(i=0;words[i]!='\0';i++)
    {
        if(words[i]!=' ' && (words[i+1]==' ' || words[i+1]=='\0'))
        {
            count++;
        }
    }
    printf("单词数：%d",count);
} 

int main()
{
	char fileName[100];
	char option[3];
	char ch;
	
	scanf("%s",option);
	ch=getchar();
	scanf("%s",fileName);
	if(option[1] == 'c'){
		zifu(fileName);
	}else if(option[1] == 'w'){
		danci(fileName);
	}
} 
