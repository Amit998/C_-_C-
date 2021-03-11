
target=7
mainList=[1,3,5,7,4]


# lst=[0 for i in row if i==1 else 1]

# print(lst)

tempList=[]


for i in range(len(mainList)):
    remain=target-mainList[i]
    if (remain not in tempList):
        # print(remain)
        tempList.append(mainList[i])
        
    else:
        print(remain,mainList[i])
    
        