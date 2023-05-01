#include <stdio.h>

char *get_name(int id) {
    if (id == 1) {
        return "Alice";
    } else if (id == 2) {
        return "Bob";
    } else {
        return NULL;
    }
}

int main() {
    char *name = get_name(3);
    if (name == NULL) {
        printf("No name found.");
    } else {
        printf("The name is %s.", name);
    }
    return 0;
}