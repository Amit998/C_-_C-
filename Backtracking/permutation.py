num="abc"



def permute(num,i,j):
    for i in range(len(num)):
        string=swap(string,left,i)

        permute(list(string),left+1,right)
    


permute(list(num),0,len(list(num)))