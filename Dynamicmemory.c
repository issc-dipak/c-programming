#include <stdio.h>
#include <stdlib.h>

struct Item {
    int id;
    float price;
};

int main() {
    struct Item *item = (struct Item *)malloc(sizeof(struct Item));
    item->id = 101;
    item->price = 55.5;
    printf("ID: %d, Price: %.2f\n", item->id, item->price);
    free(item);
    return 0;
}
