#include <stdio.h>
int main () {
int m, a, b, c, isi, h;
scanf ("%d", &m);
int m1[m][m], m2[m][m];
printf ("Matriks A\n");
for (a=0; a<m; a++) {
    for (b=0; b<m; b++) {
        scanf ("%d", &isi);
        m1[a][b]=isi;}}
printf ("Matriks B\n");
for (a=0; a<m; a++) {
    for (b=0; b<m; b++) {
        scanf ("%d", &isi);
        m2[a][b]=isi;}}
printf ("\nMatriks A x B\n");
for (a=0; a<m; a++) {
    for (b=0 ; b<m; b++) {
        for (c=0, h=0; c<m; c++) {
            h+=m1[a][c]*m2[c][b];}
        printf ("%d ", h);}
    printf ("\n");}
}