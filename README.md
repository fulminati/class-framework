# class-framework

## Install

1. Simply copy file "class-framework.h" into your project 
2. Now declare class and instantiate objects

## Example

Follow this example

```c
#include "class-framework.h"

CLASS (People) {
    int age;
};

int main()
{
    People *p = NEW (People);

    p->age = 10;

    printf("%d\n", p->age);
}
```
