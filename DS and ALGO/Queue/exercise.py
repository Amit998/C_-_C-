import threading
import time
import logging


# def thread_function(name):
#     logging.info("Thread %s: starting", name)
#     time.sleep(2)
#     logging.info("Thread %s: finishing", name)


from collections import deque

class Queue:
    buffer=[]
    def __init__(self):
        self.buffer = deque()
    
    def enqueue(self,val):
        self.buffer.appendleft(val)

        # print(argv)

        # for food in argv:
        #     time.sleep(0.5)
        #     print(f'took order of {food}')
        #     self.buffer.appendleft(food)
        
    def dequeue(self):
        if (len(self.buffer) == 0):
            print('Queue Is Empty')
            # break
            return False
 

        # print('hi')
        # time.sleep(1)
        # length=len(self.buffer)

        # print(self.buffer)
        # for i in range(length):
            # time.sleep(2)
            # print(food)
            # print(f'{self.buffer[0:length-1]}  poped')
            # print(f'{self.buffer.pop()} Served')
            # print(self.buffer.popleft())
            # print(self.buffer[length-i])

            # print(f'Served Order Of {self.buffer}')
            # self.buffer.popleft()
        return self.buffer.pop()
        #
    
    def is_empty(self):
        return len(self.buffer)==0
    
    def size(self):
        return len(self.buffer)

food_order_queue=Queue()


def place_an_order(*orders):
    for i,order in enumerate(orders):
        food_order_queue.enqueue(order)
        print("Placing order ",order)
        time.sleep(0.5)




def serve_an_order():
    time.sleep(1)
    while True:
        order=food_order_queue.dequeue()
        print("Now Serveing",order)
        time.sleep(2)



q=Queue()

orders = ['pizza','samosa','pasta','biryani','burger']

x1= threading.Thread(target=place_an_order,args=orders)
x1.start()
x2 = threading.Thread(target=serve_an_order)
x2.start()

# try:
    # threading.Thread(target=...)

# x.start()


