array = list(map(int,input("Enter elements: ").split()))
key = int(input("Enter element to search:"))

found = False
for i in range(len(array)):
    if array[i]==key:
        print(f"Element found at index {i}")
        found = True
        break
if not found:
    print("Not found")