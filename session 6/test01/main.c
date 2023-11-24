#include <stdio.h>
#include <stdlib.h>

 struct student {
char x;
int y;
} __attribute__((packed));
typedef struct student student;

typedef struct{
char x;
int y;
}student2 __attribute__((packed));

int main()
{
    student ahmed;
    student2 mohamed;
    printf("%d\n",sizeof(ahmed));
    printf("%d\n",sizeof(mohamed));
    return 0;
}
