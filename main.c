#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 1000

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

    char text[MAX_SIZE];
    int count = 0;

    if (strcmp(parameter, "-c") == 0) {
        while (fgets(text, MAX_SIZE, file) != NULL) {
            count += strlen(text);
        }
        printf("×Ö·ûÊý£º%d\n", count);
    } else if (strcmp(parameter, "-w") == 0) {
        while (fscanf(file, "%s", text) == 1) {
            count++;
        }
        printf("µ¥´ÊÊý£º%d\n", count);
    } else {
        printf("Invalid parameter. Please use -c or -w.\n");
        return 1;
    }
 
}
