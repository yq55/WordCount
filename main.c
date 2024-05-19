S #include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILE_NAME 100
#define MAX_BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s [-c | -w] [input_file_name]\n", argv[0]);
        return 1;
    }

    char *parameter = argv[1];
    char *filename = argv[2];
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char buffer[MAX_BUFFER_SIZE];
    int count = 0;
    if (strcmp(parameter, "-c") == 0)  
    } else if (strcmp(parameter, "-w") == 0) {
         
        printf("µ¥´ÊÊý£º%d\n", count);
    } 
    return 0;
}
