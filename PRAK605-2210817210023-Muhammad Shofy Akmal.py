m = int(input())
print("Matriks A")
m1 = []; m2 = []
for a in range(0, m) :
    isi1 = list(map(int, input().split()))
    m1.append(isi1[0:m])
print("Matriks B")
for a in range(0, m) :
    isi2 = list(map(int, input().split()))
    m2.append(isi2[0:m])
print("\nMatriks A x B")
for a in range(0, m) :
    for b in range(0, m) :
        hasil = 0
        for c in range(0, m) :
            hasil+=m1[a][c]*m2[c][b]
        print(hasil, end=' ')
    print()