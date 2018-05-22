#Bubble sorting program.
import random
#Preparing Data.
Data = random.sample(range(100),10)

def bubbleSort(Data=[]):
    "Here is my python bubble sorting function"
    for i in range(len(Data)):
        for j in range(i,len(Data)):
            if Data[i] > Data[j]:
                tmp = Data[i]
                Data[i] = Data[j]
                Data[j] = tmp
        print('Loop ', i, ' data are:', Data)

if __name__ ==  "__main__":       
    print(Data, '\nThe Original Data are as above - ', Data.__class__)
    bubbleSort(Data)

