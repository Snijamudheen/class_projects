#Python program that helps understand different operations of a queue.

myqueue = list()

def enqueue(myqueue,element):
    myqueue.append(element)
    
def isEmpty(myqueue):
    if len(myqueue) == 0:
        return True 
    else:
        return False

def dequeue(myqueue):
    if not(isEmpty(myqueue)):
        return myqueue.pop(0)
    else:
        print("Queue is empty.")
        
def size(mqueue):
    return len(myqueue)

def peek(myqueue):
    if isEmpty(myqueue):
        print("Queue is empty")
    else:
        return myqueue[0]
    
myQueue = list()

element = input("Enter person’s code to enter in queue :”)
enqueue(myQueue, element)

element = input("Enter person’s code for insertion in queue :")
enqueue(myQueue, element)

print("Person removed from queue is:", dequeue(myQueue))
print(“Number of people in the queue is :”, size(myQueue))

element = input("Enter person’s code to enter in queue :")
enqueue(myQueue, element)

element = input("Enter person’s code to enter in queue :")
enqueue(myQueue, element)

element = input("Enter person’s code to enter in queue :")
enqueue(myQueue, element)

print("Now we are going to remove remaining people from the queue")

while not isEmpty(myQueue):
print("Person removed from queue is ", dequeue(myQueue))
