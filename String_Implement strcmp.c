#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

int strcmp_custom(char* s1, char* s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }
    // If s1 is longer, return positive remaining length
    if (s1[i] != '\0') {
        return strlen(s1 + i);
    }
    // If s2 is longer, return negative remaining length
    if (s2[i] != '\0') {
        return -strlen(s2 + i);
    }
    // Both strings are equal
    return 0;
}

int main() {
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s1 = readline();
    char* s2 = readline();

    int result = strcmp_custom(s1, s2);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);

    free(s1);
    free(s2);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (1) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        char* new_data = realloc(data, alloc_length);

        if (!new_data) {
            free(data);
            return NULL;
        }
        data = new_data;
    }

    if (data_length > 0 && data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
        char* new_data = realloc(data, data_length);
        if (new_data) {
            data = new_data;
        }
    } else {
        char* new_data = realloc(data, data_length + 1);
        if (new_data) {
            data = new_data;
            data[data_length] = '\0';
        }
    }

    return data;
}
