#include <stdio.h>
#include <string.h>
int main () {
char a1[100], a2[100];
int isi1, isi2, a, b=0, c=0;
scanf (" %[^\n]%*c", &a1);
scanf (" %[^\n]%*c", &a2);
isi1=strlen(a1);
isi2=strlen(a2);
if (isi1!=isi2) {
    printf ("\nPanjang kalimat berbeda, pesan palsu\n");}
else {
    printf ("\n");
    for (a=0; a<isi1; a++) {
        if (a1[a]==a2[a]) {
            if (a1[a]==' ') {
                printf (" ");}
            else {
                printf ("*");
                b++;}}
        else {
            printf ("#");
            c++;}}
    printf ("\n* = %d", b);
    printf ("\n# = %d", c);
    if (b>=c) {
        printf ("\nPesan Asli\n");}
    else {
        printf ("\nPesan Palsu\n");}}
}