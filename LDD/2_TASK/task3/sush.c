#include <stdio.h>
#include <string.h>

void insertString(char* original, const char* insert) {
    char* position = strstr(original, "mirafra"); // Find the position of "mirafra"
    if (position == NULL) {
        printf("Substring not found\n");
        return;
    }

    char temp[100];
    strcpy(temp, position + strlen("mirafra")); // Copy the rest of the string after "mirafra" into temp

    strcpy(position, insert); // Insert the new string at the position

    strcat(original, temp); // Concatenate the rest of the string

    printf("Result: %s\n", original);
}

int main() {
    char str[100] = "mirafra Hyderabad";
    char insert[] = "new string";

    insertString(str, insert);

    return 0;
}
