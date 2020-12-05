# queue-ds-
#Queue ==> Queue is a data structure and a FIFO approach, which can perform its operations such as enqueue and dequeue at its both ends unlike stack!!!


#Implementations of queue and dequeue!!
'''
class queue():
    def __init__(self):
        self.items=[]
        
    def show(self):
        return self.items 
        
    def size(self):
        return len(self.items)
        
    def enqueue(self,i):
        return self.items.insert(0,i)
        
    def dequeue(self):
        self.items.pop()
        
    
q=queue()
q.enqueue(12)
q.enqueue(122)
q.enqueue(1223)
print(q.show())
for i in range(q.size()):
    q.dequeue()
print(q.show())

'''


'''
#Dequeue: Double ended and extended version of queue, which can perform operations on both sides.
#May do insertion on both sides also deletion ##

class dequeue():
    def __init__(self):
        self.items=[]
        
    def show(self):
        return self.items 
        
    def size(self):
        return len(self.items)
        
    def enqueue(self,value):
        return self.items.insert(0,value)
        
    def dequeue(self):
        self.items.pop()
    
    def enqueue_right(self,value):
        return self.items.append(value)
        
    def enqueue_left(self,value):
        return self.items.insert(0,value)
        
    def dequeue_left(self):
        self.items.pop(0)
        
    def dequeue_right(self):
        self.items.pop()
        
dq=dequeue()
for i in range(1,99,10):
    dq.enqueue_left(i)
    
for j in range(99,999,100):
    dq.enqueue_right(j)
    
print(dq.show())
    
for i in range(1,100,50):
    dq.dequeue_right()
    dq.dequeue_left()
    
print(dq.show())

'''
