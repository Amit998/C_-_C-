

from collections import deque
# stack = deque()


class Stack:
    # TempList=[]
    # wordContainer=[]

    def __init__(self):
        self.container = deque()
        # self.wordContainer=deque()
    
    def push(self,val):
        self.container.append(val)
        
    def pop(self):
        return self.container.pop()
    
    def peek(self):
        return  self.container[-1]
    
    def is_empty(self):
        return len(self.container)==0
    
    def size(self):
        return len(self.container)
    def reverse_string(self,val):
        self.value=val
        self.value=self.value.split()
        # self.TempList.append(self.value)
        # print(len(self.value))
        length=len(self.value)
        # print(length)
        wordContainer=[]
        tempContainer=[]
        for i in range(length):
            tempString=self.value[length-i-1]
            tempList=list(tempString)
            for sent in range(len(tempList)):
                tempContainer.append(tempList[len(tempList)-1-sent])
            tempContainer.append(' ')
            print(tempContainer)
            # print(tempContainer)
            # wordContainer.append(self.value[length-i-1])
        print(' '.join(tempContainer),end=' ')
            
        # for s in self.value:
        #     sent=(list(s))
        #     # print(sent)
        #     for w in range(len(sent)):
        #         self.container.append(sent[len(sent)-w-1])
        #     self.container.append('')
        #     # self.wordContainer.append(self.container)
        # # print(''.join(self.container))
        # # print(''.join(self.wordContainer))
        # self.tempString=' '.join(self.container)
        # print(self.tempString)
        # print(list(self.tempString))
        # length=len(list(self.tempString))
        # print(length)
        # for i in range(length):
            # self.wordContainer.append(self.container[length-1])





        # self.tempList=self.tempString.split(' ')
        # print(self.tempString)
        # for i in range(length):
            # print(self.tempList[i])
            # self.wordContainer.append(self.container[length-i-1])
            # print(self.container[length-i-1])
        # print(' '.join(self.wordContainer))
        

            

s=Stack()

s.reverse_string('We will conquere COVID-19')
# print(s.peek())