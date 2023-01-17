# include<stdio.h>

int main(){
    FILE *fp,*fp2;
    char c[100];
    fp=fopen("AG.txt","r");
    fp2=fopen("AGR.txt","a");
    if(fp==NULL || fp2==NULL){
        printf("file not found.");
    }
    else{

        fscanf(fp, "%[^\n]", c);
        fprintf(fp2,"%s",c);

        fclose(fp);
        fclose(fp2);
        printf("file is closed.");
    }

    return 0;
}
