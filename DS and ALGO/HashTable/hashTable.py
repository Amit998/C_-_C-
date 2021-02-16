class HashTable:
    def __init__(self):
        self.Max=100
        self.arr=[[] for i in range(self.Max)]
        self.h=0
    
    def get_hash(self,key):
        new_val=0
        # print(key)
        for char in key:
            new_val += ord(char)
            # print(ord(char))
        
        return new_val % self.Max
    def add(self,key,val):
        self.h=self.get_hash(key)
        self.arr[self.h]=val
        # print(self.arr)
    

    def __getitem__(self,index):
        # print(index)
        h=self.get_hash(index)


        # print(h)
        for elemnt in self.arr[h]:
            if (elemnt in self.arr[h]):
                return elemnt[1]

    def __setitem__(self,key,val):
        h=self.get_hash(key)
        # print(key,val)
        found=False
        # print(key,val)
        # print('\n')
        for indx,element in enumerate(self.arr[h]):
            # print(self.arr[h])
            # print(len(element))
            if (len(element) <= 1 and element[0]  == key):
                # print('2')
                self.arr[h][indx] == (key,val)
                found=True
                break
        if not found:
            # print('not',key)
            self.arr[h].append((key,val))

    
    def __delitem__(self,key):
        h=self.get_hash(key)
        # self.arr[h]=None
        for indx,element in enumerate(self.arr[h]):
            if (element[0]== key ):
                del self.arr[h][indx]
        

    def print(self):
        # print(self.h,'\n')
        print(self.arr)
    # def __repr__(self,key):
    #     h=self.get_hash(key)
    #     return self.arr[h]


ht=HashTable()
# print(ht.get_hash('march 12'))
# print(ht.get_hash('march 12'))
# print(ht.get_hash('march 12'))
# print(ht.add('march 12',20))
# print(ht.add('march 12',120))
ht['march 26']=2
ht['march 16']=20
ht['march 16']=10
ht['march 16']=20
ht['march 16']=10
# ht['march 16']=23

ht['march 6']=2
ht['march 8']=1
ht.print()
# ht.add('march 12',20)
# ht.add('march 1',23)
del ht['march 16']
ht.print()
# print(ht['march 16'])
# ht.print()
# print(ht['march 6'])