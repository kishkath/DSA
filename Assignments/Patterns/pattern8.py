

def pattern8(n):
    total = 65+n 
    for i in range(n+1):
        for j in range(i,-1,-1):
            print(chr(total-j),end=' ')
        print()
pattern8(8)

# total = I 

# I 
# H I 
# G H I 
# F G H I 
# E F G H I  
# D E F G H I 
# C D E F G H I 
# B C D E F G H I 
# A B C D E F G H I 