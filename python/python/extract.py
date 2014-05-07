
"""
A code to extract the value at second word in each line of a file. If this value is greater than '284' those lines will appear in new file.  

Steps: 
python code to open a file "log2"
read all the lines one after other
extract second word in each line. As i have a number in second word of each line. 
compare if this number is greater than 284 
make a new file with lines satisfying above condition

"""
import sys,os,glob,time



new_list = []
for line in file("log2"):
   data_list = line.split()
   # item at index 2 is your critical data
   temp = float(data_list[3])
   # select values above and below your decisive point 
   if temp > 284:
      # create a new list of selected data
      new_list.append(line)

# save it <strong class="highlight">to</strong> <strong class="highlight">file</strong> test_data2.txt 
fout = open("prefinal", "w")
fout.writelines(new_list)
fout.close()

