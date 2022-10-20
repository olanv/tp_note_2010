#include <stdio.h>

void add(int nb_1, int nb_2, int nb_3, int * res) {
    *res = nb_1 + nb_2 + nb_3;
}

int min(int nb_1, int nb_2, int nb_3) {
    if (nb_1 <= nb_2 && nb_1 <= nb_3) {
        return nb_1;
    } else if (nb_2 <= nb_1 && nb_2 <= nb_3){
        return nb_2;
    } else {
        return nb_3;
    }
}


int max(int nb_1, int nb_2, int nb_3) {
    if (nb_1 >= nb_2 && nb_1 >= nb_3) {
        return nb_1;
    } else if (nb_2 >= nb_1 && nb_2 >= nb_3) {
        return nb_2;
    } else {
        return nb_3;
    }
}

int moy(int nb_1, int nb_2, int nb_3) {
    int nb_min = min(nb_1, nb_2, nb_3);
    int nb_max = min(nb_1, nb_2, nb_3);

    if (nb_1 != nb_min && nb_1 != nb_max) {
        return nb_1;
    } else if (nb_2 != nb_min && nb_2 != nb_max) {
        return nb_2;
    } else {
        return nb_3;
    }
}

int get_nb(char * message) {
    int nb = 0;
    printf("%s", message);
    scanf("%d", &nb);
    return nb;
}

int main() {
    int nb_1 = 0, nb_2 = 0, nb_3 = 0;
    int res = 0;

    nb_1 = get_nb("entrez nombre 1: ");
    nb_2 = get_nb("entrez nombre 2: ");
    nb_3 = get_nb("entrez nombre 3: ");

    printf("min: %d\n", min(nb_1, nb_2, nb_3));
    printf("max: %d\n", max(nb_1, nb_2, nb_3));
    printf("moy: %d\n", moy(nb_1, nb_2, nb_3));

    add(nb_1, nb_2, nb_3, &res) 
    printf("somme: %d\n", res);

    return 0;
}