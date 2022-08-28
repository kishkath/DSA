
def pattern7(n):
    for i in range(n):
        if (i==0 or i==(n-1)):
            print("*"*n)
        else:
            print("*"+" "*(n-2)+"*")
            
pattern7(5)

#####
#   #
#   #
#   #
#####
