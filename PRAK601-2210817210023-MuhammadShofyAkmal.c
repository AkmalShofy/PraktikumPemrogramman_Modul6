#include <stdio.h>
int main () {
int br, kl, a, b, isi;
scanf("%d %d", &br, &kl);
int angka[br][kl];
for (a=0; a<br; a++) {
    for (b=0; b<kl; b++) {
        scanf ("%d", &isi);
        angka[a][b]=isi;}}
printf ("\n");
for (a=0; a<br; a++) {
    for (b=0; b<kl; b++) {
        printf ("%d ", angka[a][b]);}
    printf ("\n");}
}