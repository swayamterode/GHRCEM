# Write a program to display date an time of local device
import datetime
now = datetime.datetime.now()
print ("Current date and time : ")
print (now.strftime("%Y-%m-%d %H:%M:%S")) # strftime means Start from time
# More about stfrtime https://www.programiz.com/python-programming/datetime/strftime
