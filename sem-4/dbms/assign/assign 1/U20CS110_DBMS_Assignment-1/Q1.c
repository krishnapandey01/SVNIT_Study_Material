# include<stdio.h>

int main(){
    FILE *fp;
    char write[50]="Hello how are you!";

    fp=fopen("AG.txt","w");
    if(fp==NULL){
        printf("file not found.");
    }
    else{
        fprintf(fp,"%s ",write);

        fclose(fp);
        printf("file closed.");
    }

    return 0;
}
