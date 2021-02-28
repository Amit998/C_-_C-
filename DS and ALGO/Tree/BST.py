class BST:
    def __init__(self,data):
        self.data = data
        self.left=None
        self.right=None
    def add_child(self,data):
        if data==self.data:
            return
        if data < self.data:
            if self.left:
                self.left.add_child(data)
            else :
                self.left=BST(data)
        
        else:
            if self.right:
                self.right.add_child(data)
            else :
                self.right=BST(data)
        
    def in_order_traversal(self):
        elemets=[]
        #visit left Tree
        if self.left:
            elemets += self.left.in_order_traversal()
            print(elemets)
        
        elemets.append(self.data)

        if self.right:
            elemets += self.right.in_order_traversal()


        return elemets
    def search(self,val):
        if (self.data == val):
            return True
        if val < self.data:
            if self.left:
                return self.left.search(val)
            else:
                return False
                
        if val > self.data:
            if (self.data == val):
                return True
            if (self.data):
                return self.right.search(val)
            else:
                False
        else:
            False
                
    

def build_tree(elements):
    root=BST(elements[0])

    for i in range(1,len(elements)):
        root.add_child(elements[i])
    
    return root

if __name__=='__main__':
    numbers=[13,2,43,3,56,32,54]
    numbers_tree=build_tree(numbers)
    print(numbers_tree.in_order_traversal())
    # print(numbers_tree.search(1))
