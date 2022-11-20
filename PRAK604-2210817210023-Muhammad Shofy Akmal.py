a1 = input(); a2 = input()
isi1 = len(a1); isi2 = len(a2)
b = 0; c = 0
if isi1!=isi2 :
    print("\nPanjang kalimat berbeda, pesan palsu")
else :
    print ()
    for a in range(0, isi1) :
        if a1[a]==a2[a] :
            if a1[a]==' ' :
                print(" ", end='')
            else :
                print("*", end=''); b+=1
        else :
            print("#", end=''); c+=1
    print("\n* =", b)
    print("# =", c)
    if b>=c :
        print("Pesan Asli")
    else :
        print("Pesan Palsu")