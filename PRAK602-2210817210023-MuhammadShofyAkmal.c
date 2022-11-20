#include <stdio.h>
int main () {
int kl, isi, a;
scanf ("%d", &kl);
int b[kl];
for (a=0; a<kl; a++) {
    scanf ("%d", &isi);
    b[a]=isi;}
printf ("\n");
for (a=0; a<kl; a++) {
    printf ("%d ", b[a]*(a+1));}
}