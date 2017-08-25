
#include "c-framework.h"

CLASS (People) {
    int age;
};

int main()
{
    People *p = NEW (People);

    p->age = 10;

    printf("%d\n", p->age);
}
