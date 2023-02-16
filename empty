glassStack = list()

def isEmpty(glassStack):
    if len(glassStack) == 0:
        return True
    else:
        return False
    
def opPush(glassStack, element):
    glassStack.append(element)
    
def size(glassStack):
    return len(glassStack)

def top(glassStack):
    if isEmpty(glassStack):
        print("stack is empty")
        return None
    else:
        x = len(glassStack)
        element = glassStack[x - 1]
        return element

def opPop(glassStack):
    if isEmpty(glassStack):
        print("underflow")
        return None
    else:
        return glassStack.pop()
    
def display(glassStack):
    x = len(glassStack)
    print("current elements of the stack are: ")
    
    for i in range(x - 1, -1, -1):
        print(glassStack[i])
        
element = 'glass 1'
print("pushing element ", element)
opPush(glassStack, element)

element = 'glass 2'
print("pushing element ", element)
opPush(glassStack, element)

print("current size of the stack: ", size(glassStack))

element = opPop(glassstack)
print("the deleted element is: ", element)

element = 'glass 3'
print("pushing element ", element)
opPush(glassStack,element)

print("the top element of the stack is: ", top(glassStack))

display(glassStack)
