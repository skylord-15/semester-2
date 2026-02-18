#include <stdio.h>
#include <stdlib.h>   

struct student {
    char name[20];
    int s1, s2, s3, s4, s5;
};
int main(int argc, char *argv[]) {
    if (argc < 7) {
        printf("Usage: %s <name> <s1> <s2> <s3> <s4> <s5>\n", argv[0]);
        return 1;
    }
    struct student s1;
    int total; 
    snprintf(s1.name, sizeof(s1.name), "%s", argv[1]);  
    s1.s1 = atoi(argv[2]);
    s1.s2 = atoi(argv[3]);
    s1.s3 = atoi(argv[4]);
    s1.s4 = atoi(argv[5]);
    s1.s5 = atoi(argv[6]);
    total = s1.s1 + s1.s2 + s1.s3 + s1.s4 + s1.s5;
    printf("NAME  : %s\n", s1.name);
    printf("TOTAL : %d\n", total);

    return 0;
}
