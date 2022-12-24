# def div_mod(a,b):
#     que=a/b
#     rem=a%b
#     return que,rem
# x=10
# y=3
# print(type(x))
# t=div_mod(x,y)

# print(t)
# student=('aditya',27,('python','ajay',303))
# name,roll,regdcourse=student
# print(name)

# Tower of hanoi
# def TowerOfHanoi(n, from_rod, to_rod, aux_rod):
#     if n==1:
#         print("Move disk 1 from rod",from_rod,"to rod",to_rod)
#         return 
#     TowerOfHanoi(n-1,from_rod,aux_rod,to_rod)
#     print ("Move disk",n,"from_rod",from_rod,"to rod",to_rod)
#     TowerOfHanoi(n-1, aux_rod, to_rod, from_rod)
# n = 4
# TowerOfHanoi(n,'A','C','B')  

# merge sort

def merge_Sort(arr):
    if(len(arr)>1):
        left_arr=arr[:len(arr)//2]
        right_arr=arr[len(arr)//2:]
    
    # recursion
        merge_Sort(left_arr)
        merge_Sort(right_arr)
    
    # merge
        i=0
        j=0
        k=0
        while(i<len(left_arr) and j<len(right_arr)):
            if(left_arr[i]<right_arr[j]):
                arr[k]=left_arr[i]
                i+=1
            else:
                arr[k]=right_arr[j]
                j+=1
            k+=1
        while(i<len(left_arr)):
            arr[k]=left_arr[i]
            i+=1
            k+=1
        while(j<len(right_arr)):
            arr[k]=right_arr[j]
            j+=1
            k+=1

test_arr=[6,3,5,2,4,1]
merge_Sort(test_arr)
print(test_arr)