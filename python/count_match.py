#gives the count of pattern from a given file. And here the pattern is 5 letter word, 
#!/usr/bin/env python
import re

bible = open("logfile.txt", "r")
regex = re.compile(r'\b\w{5}\b')

count =0

for line in bible:
    four_letter_words = regex.findall(line)
    for word in four_letter_words:
        #print word
        if word == 'Index': count =count+1

print "total occurances =%i"%count

