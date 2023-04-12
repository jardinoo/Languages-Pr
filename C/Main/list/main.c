#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(int argc, char *argv[]) {
    addItem("C++");
    addItem("Java");
    addItem("Scala");

    //printList();
    printf("count= %d\n", getCount());
    printList();
    delItemFromEnd();

    return 0;
}