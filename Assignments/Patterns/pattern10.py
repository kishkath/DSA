
def pattern10(n):
    for i in range(n+1):
        for j in range(n,i,-1):
            print(' ',end='')
        print('#'*i) 
        print()
pattern10(4)

  #
 ##
###
