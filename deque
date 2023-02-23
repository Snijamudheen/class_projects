/*A python program that uses the conecpt of queue for storing and deleting data. Queue is a linear data structure that stores items in a First-In/First Out(FIFO) manner.*/

def insertFront(myDeque,element):
    myDeque.insert(0,element)
    
def getFront(myDeque):
    if not(isEmpty(myDeque)):
        return myDeque[0]
    else:
        print("queue underflow")
        
def getRear(myDeque):
    if not(isEmpty(myDeque)):
        return myDeque[len(myDeque)-1]
    else:
        print("queue underflow")
        
def insertRear(myDeque,element):
    myDeque.append(element)
    
def isEmpty(myDeque):
    if len(myDeque) == 0:
        return True
    else:
        return False
    
def deletionRear(myDeque):
    if not isEmpty(myDeque):
        return myDeque.pop()
    else:
        print("queue overflow")
        
def deletionFront(myDeque):
    if isEmpty(myDeque):
        print("Queue underflow")
    else:
        return myDeque.pop(0)
    
def main():
    dQu = list()
    choice = int(input('enter 1 to use as normal queue 2 otherwise: '))
    if choice == 1:
        element = input("data for insertion at rear ")
        insertRear(dQu,element)
        element = getFront(dQu)
        print("data at the beginning of queue is ", element)
        element = input("data for insertion at front ")
        insertRear(dQu,element)
        print('data removed from front of queue is ', deletionFront(dQu))
        print('data removed from front of queue is ', deletionFront(dQu))
    else:
        element = input("data for insertion at front")
        insertFront(dQu,element)
        element = getRear(dQu)
        print("data at the end of queue is ", element)
        element = input("data for insertion at front ")
        insertFront(dQu,element)
        print('data removed from rear of queue is ', deletionRear(dQu))
        print('data removed from rear of queue is ', deletionRear(dQu))
