fname = input("Enter file name: ")
fh = open(fname)
lst = list()

for line in fh:
	for i in line.split():
		if i not in lst:
			lst.append(i)
		else:
			continue

print(sorted(lst))