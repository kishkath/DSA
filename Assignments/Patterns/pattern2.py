

#####
####
###
##
# 

# Number of rows : 5 
# For 1st row, there are n cols 
# for 2nd row, there are (n-1) cols
# Pattern seems like : (i+j)==(n+1)

# def pattern2(Rows):
#     for i in range(Rows):
#         j = Rows-i
#         print("#"*j,end="")
#         print()
# pattern2(8)

def pattern2(Rows):
    for i in range(Rows):
        for j in range(Rows-i):
            print("#",end="")
        print()
    
pattern2(9)

