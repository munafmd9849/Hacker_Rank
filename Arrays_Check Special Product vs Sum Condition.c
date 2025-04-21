#include <assert.h>

#include <ctype.h>

#include <limits.h>

#include <math.h>

#include <stdbool.h>

#include <stddef.h>

#include <stdint.h>

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

char* readline();

char* ltrim(char*);

char* rtrim(char*);

int parse_int(char*);

/*

 * Complete the 'check_special_condition' function below.

 * The function is expected to return a STRING.

 * The function accepts INTEGER_ARRAY arr as parameter.

 */

char* check_special_condition(int arr_count, int* arr) {

    static char true_str[] = "True";

    static char false_str[] = "False";

    int smallest = INT_MAX, second_smallest = INT_MAX;

    int largest = INT_MIN, second_largest = INT_MIN;

    for (int i = 0; i < arr_count; i++) {

        int val = arr[i];

        // Smallest and second smallest

        if (val < smallest) {

            second_smallest = smallest;

            smallest = val;

        } else if (val < second_smallest) {

            second_smallest = val;

        }

        // Largest and second largest

        if (val > largest) {

            second_largest = largest;

            largest = val;

        } else if (val > second_largest) {

            second_largest = val;

        }

    }

    long long product = (long long)second_largest * smallest;

    long long sum = (long long)second_smallest + largest;

    if (product > sum) {

        return true_str;

    } else {

        return false_str;

    }

}

int main() {

    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int N = parse_int(ltrim(rtrim(readline())));

    int* arr = malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {

        int arr_item = parse_int(ltrim(rtrim(readline())));

        arr[i] = arr_item;

    }

    char* result = check_special_condition(N, arr);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    free(arr);

    return 0;

}

char* readline() {

    size_t alloc_length = 1024;

    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {

        char* cursor = data + data_length;

        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) break;

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') break;

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) return NULL;

    }

    if (data[data_length - 1] == '\n') {

        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

    } else {

        data = realloc(data, data_length + 1);

        if (data) data[data_length] = '\0';

    }

    return data;

}

char* ltrim(char* str) {

    if (!str) return NULL;

    while (*str != '\0' && isspace(*str)) str++;

    return str;

}

char* rtrim(char* str) {

    if (!str) return NULL;

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) end--;

    *(end + 1) = '\0';

    return str;

}

int parse_int(char* str) {

    char* endptr;

    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') exit(EXIT_FAILURE);

    return value;

}
