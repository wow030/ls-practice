#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<dirent.h>

int main(int argc, char**argv){
    DIR *dir  = opendir("./");
    char filepath[256];
    if(dir != NULL){
        struct dirent *dt;
        while((dt = readdir(dir)) != NULL){
            printf("%s\n", dt->d_name);
            //remove(dt->d_name);
        }
    } else{
        printf("can't open dir");
    }

    closedir(dir);
    return 0;
}
