def binarySearch(a,l,h,ele):
    if ( h >= l):
        mid = int((l + h) / 2)
        if a[mid] == ele:
            return mid
        elif a[mid] > ele:
            return binarySearch(a,l,mid-1,ele)
        else:
            return binarySearch(a,mid+1,h,ele)
n = int(input("enter no.of elements in the array"))
print("enter array elements separated by spaces")
a = [ int(i) for i in input().split(" ")]
ele = int(input("enter the element you want to enter"))
pos = binarySearch(a,0,len(a),ele)
if pos == -1:
    print("element is not present")
else:
    print("element is found at" , pos)
