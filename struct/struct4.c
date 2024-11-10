#include <stdio.h>

struct Address {
    char city[50];
    int pin;
};

struct Person {
    char name[50];
    struct Address address;
};

int main() {
    struct Person person;
    printf("Enter name, city, and pin: ");
    scanf("%s %s %d", person.name, person.address.city, &person.address.pin);
    printf("Name: %s\nCity: %s\nPin: %d\n", person.name, person.address.city, person.address.pin);
    return 0;
}
