# 
##
###
####
#####
######
#####
####
###
##
#

def pattern4(Rows):
    for i in range(2*Rows-1):
        if (i>Rows):
            for j in range((2*Rows)-i):
                print("#",end=' ')
            print()
        else:
            for j in range(i):
                print("#",end=" ")
            print()
pattern4(6)