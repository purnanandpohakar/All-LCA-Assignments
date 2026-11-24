#include <stdio.h>

struct Component {
    int id;
    float weight;
    char material[30];
};

int main() {
    struct Component c[5];
    int i;

    printf("Enter details of 5 mechanical components:\n");
    for (i = 0; i < 5; i++) {
        printf("\n Component %d\n", i + 1);
        printf("Enter Component ID:");
        scanf("%d", &c[i].id);
        printf("Enter weight(kg):");
        scanf("%f", &c[i].weight);
        printf("Enter Material -Type:");
        scanf("%29s", c[i].material);
    }

    printf("\n-----Mechanical Component Details-----\n");
    printf("ID\t Weight(kg)\t Material\n");
    for (i = 0; i < 5; i++) {
        printf("%d\t%.2f\t\t%s\n", c[i].id, c[i].weight, c[i].material);
    }

    return 0;
}
