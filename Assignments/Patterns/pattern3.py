
# 1  
# 2 3 
# 4 5 6 
# 7 8 9 10 
# 11 12 13 14 15 

def pattern3(Rows):
    for i in range(1,Rows+1):
        for j in range(i):
            print(i+j,end=' ')
        print()
pattern3(6)
