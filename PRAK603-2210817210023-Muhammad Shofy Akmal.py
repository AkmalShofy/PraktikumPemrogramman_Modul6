br1, br2 = map(int, input().split())
if (br1 != br2) :
    print("\nJumlah tidak sama")
else :
    isi1 = list(map(int, input().split()))
    isi2 = list(map(int, input().split()))
    a1 = []; a2 = []
    for a in range(0, br1) :
        a1.append(isi1[a])
    for a in range(0, br2) :
        a2.append(isi2[a])
    print ()
    for a in range(0, br1) :
        print(a1[a]*a2[a], end=' ')