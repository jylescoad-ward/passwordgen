import random
length = int(input("length: "))
password = ''
for c in range(length):
	password += random.choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()-=[],./_+{}|:<>?`~")
print password