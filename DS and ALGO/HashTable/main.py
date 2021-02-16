stock_price={}


with open('stock_price.csv','r') as f:
    for line in f:
        line=line.split(',')
        # print(line)
        # print(line[0])
        stock_price[line[0]]=line[1]
        # stock_price[]
# print(stock_price)


def get_hash(key):
    h=0
    for char in key:
        h +=ord(char)
    return h % 100

print(get_hash('march 28'))

