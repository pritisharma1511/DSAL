hash=[None]
size=int(input("enter the size of table"))
hash_table=[None]*size
elecount=0
print(hash_table)
def hash_fun(key):
    return key%size
def isfull():
     if(elecount==size):
         return True
     else:
         return False
         
def linear(key):
       compare=0
       element=0
       index=hash_fun(key)
       while(hash_table[index]!=None):
              index=index+1
              compare=compare+1
              if(index==size):
                       index=0
       hash_table[index]=key
       elecount=element+1
       print(hash_table)
       #print(index)
       #print(compare)
def insert():
      elecount=0
      if(isfull()):
             print("hashtable is full")
      else:
             phone=int(input("enter the phone number:"))
             name=input("enter the name")
             index=hash_fun(phone)
             if(hash_table[index]==None):
                     hash_table[index]=phone
                     elecount=elecount+1
                     print(hash_table)
             else:
                 print("collion")
                 linear(phone)
insert()
insert()
insert()
insert()
def qua(key):
        compare=0
        elecount=0
        i=0
        index=hash_fun(key)
        while(hash_table[index]!=None):
             index=(index+i*i)%size
             compare=compare+1
        hash_table[index]=key
        element=element+1
        print(hash_table)
        

       
   
       


