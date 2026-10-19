//Write a structure capable of storing date. Write a function to compare those dates.

#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};
//if d1 is greater than d2 return 1, if d1 is less than d2 return -1, if both are equal return 0
int compareDate(struct date d1, struct date d2) {
    if (d1.year > d2.year) {
        return 1;
    }
    else if (d1.year < d2.year) {
        return -1;
    }
    else if (d1.month > d2.month) {
        return 1;
    }
    else if (d1.month < d2.month) {
        return -1;
    }
    else if (d1.day > d2.day) {
        return 1;
    }
    else if (d1.day < d2.day) {
        return -1;
    }
    else {
        return 0;
    }
}

int main() {
    struct date d1 = {2026, 12, 2};
    struct date d2 = {2326, 13, 3};

    printf("%d", compareDate(d1, d2));

    return 0;
}
