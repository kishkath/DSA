def pattern9(n):
    k = 1 
    for i in range(n):
        for j in range(i):
            print(k,end='  ')
            k+=1
        print()
    
pattern9(9)

# 1 
# 2 3 
# 4 5 6 
# 7 8 9 10
# 11 12 13 14 
# 15 16 17 18 19 
# 20 21 22 23 24 25
