br, kl = map(int, input().split())
isi = list(map(int, input().split()))
a = []
for b in range(0, br*kl, kl) :
    a.append(isi[b:b+kl])
print()
for b in range(br) :
    for c in range(kl) :
        print(a[b][c], end=' ')
    print()