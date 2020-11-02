from time import time

def fast_power(x,p):
    if(p == 1):
        return x
    r = p%2
    res = fast_power(x,p//2)
    res*=res
    if r:
        res*=x
    return res    

start = time()
print(fast_power(5,10))
end = time()

elapsed = end - start

print("FP time :")
print(elapsed*1000000)


start = time()
print(pow(5,10))
end = time()

elapsed = end - start

print("Built in P time :")
print(elapsed*1000000)

#output:
"""
9765625
FP time :
156.64100646972656
9765625
Built in P time :
21.93450927734375
"""
#note: the fast power is slower than built-in powerfunction in python
