#include <stdio.h>

long long giai_thua(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * giai_thua(n - 1);
    }
}

int main() {
    int so;
    printf("Nh?p v�o m?t s? nguy�n: ");
    scanf("%d", &so);
    printf("Giai th?a c?a %d l�: %lld\n", so, giai_thua(so));
    return 0;
}

