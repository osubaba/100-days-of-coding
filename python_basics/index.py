#indexing in python

my_list = ['osubaba', 'babayao', 'ohangla', 'reggae', 'diamond']

print(my_list[3])
print(my_list[0])

#slicing in python

print(my_list[:2])
print(my_list[2:])

#slicing 
print(my_list[1:3])

sentence = 'being rich is good being wealthy is beautiful'
under_stand = sentence[:5]
#slicing i.e extracting substrings from strings
print(under_stand)

#slicing
under_stand1 = sentence[6:10]
print(under_stand1)

#slicing

unde_rstand = sentence[:10]

print(unde_rstand)

#slicing
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]

oddNumbers = numbers[::2]
print(oddNumbers)

#slicing
even_numbers = numbers[1::2]
print(even_numbers)

#slicing row vs cloumns

data = [1, 2, 3], [4, 5, 6], [7, 8, 9]

column_0 = [row[0] for row in data]
column_1 = [row[1] for row in data]
column_2 = [row[2] for row in data]
print(column_0)
print(column_1)
print(column_2)

