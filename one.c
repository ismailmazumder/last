#include <stdio.h>
#include <stdlib.h>

int main() {
    // print cwd
    system("pwd");
    char buffer[4]; // the file pointer fp and stores it in buffer
    FILE *fp = fopen("empty.txt","r");  //means popen created a process and save the data under e file descriptor than send the address to 8fp than we accress it
    if (fp == NULL) {
        perror("popen");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), fp) != NULL) { // The fgets function in C is used to read a line from a specified stream and store it into a string. The function signature is: . the file pointer fp and stores it in buffer , The sizeof(buffer) argument ensures that fgets reads at most 127 characters 
        printf("%s", buffer);
    }
    fgets(buffer, sizeof(buffer), fp) // muluto ekta variable ache _cnt name jeta total number of word (total char / buffer size ) store kore rakhe fd.close na kora porjonto ata stored thake ata diye boje koddur porse file er
    printf("%s", buffer);
    fclose(fp);
    int a;
    scanf("%d",&a);
    return 0;
}

// https://chatgpt.com/c/67c6073b-c86c-8002-94e1-a61b5f006e06