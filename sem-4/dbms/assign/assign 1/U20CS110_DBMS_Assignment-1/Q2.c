# include<stdio.h>

int main(){
    FILE *fp;
    char read[50],read1[50];
    fp=fopen("AG.txt","r");
    if(fp==NULL){
        printf("file not found.");
    }
    else{
        fscanf(fp,"%s %s",read,read1);
        printf("%s %s",read,read1);
        fclose(fp);
        printf("\nfile is closed.");
    }

    return 0;
}
