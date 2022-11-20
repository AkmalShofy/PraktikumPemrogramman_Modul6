kl = int(input())
isi = list(map(int, input().split()))
a = []
for b in range(0, kl) :
    a.append(isi[b])
print ()
for b in range(0, kl) :
    print(a[b]*(b+1), end=' ')