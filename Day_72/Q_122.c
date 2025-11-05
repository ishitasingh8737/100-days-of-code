#include <stdio.h>
int main() {
    FILE *fp;
    char data[100];
    fp = fopen("info.txt", "r");
    if(fp == NULL) {
        printf("File not found 😢\n");
        return 0;
    }
    printf("Reading data from file...\n\n");
    while(fgets(data, 100, fp) != NULL) {
        printf("%s", data);  
    }
    fclose(fp);
    printf("\n\nFile reading completed successfully 😎\n");
    return 0;
}
