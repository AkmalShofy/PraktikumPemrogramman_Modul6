#include <stdio.h>
int main () {
int br1, br2, a, isi;
scanf("%d %d", &br1, &br2);
int a1[br1], a2[br2];
if (br1!=br2) {
    printf ("\nJumlah tidak sama");}
else {
    for (a=0; a<br1; a++) {
        scanf ("%d", &isi);
        a1[a]=isi;}
    for (a = 0; a<br2; a++) {
        scanf ("%d", &isi);
        a2[a]=isi;}
    printf ("\n");
    for (a=0; a<br1; a++) {
        printf ("%d ", a1[a]*a2[a]);}}
}