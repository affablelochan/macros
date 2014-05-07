import re

first_string = raw_input("Please enter first string: ")
second_string = raw_input("Please enter second string: ")


def simple(s1,s2):
    print "s1:",s1
    print "s2:",s2
    
    not_an_anagram='false'
    if s1 == s2: print "yes the two strings are anagrams as they are same"

    else:
        for j in xrange(len(s1)):
            count1=0
            count2=0
            if s1[j] in s2: 
                count1 = s1.count(s1[j])
                count2 = s2.count(s1[j])
                
                if count1 == count2: 
                    print "charater %c has same count"%s1[j]
                else: 
                    not_an_anagram='true'
                    print "charater %c has different count"%s1[j]
            else:
                #print "not an anagram"
                not_an_anagram = 'true'     
            if not_an_anagram == 'true': break

    if not_an_anagram: print "the strings are not an anagram"
    else: "strings are anagram"          
   


if first_string and second_string:
    length1 = len(first_string)
    length2 = len(second_string)
    if length1 == length2:
        print ('string are of same length')
    else:
        #break
        print ('string have different lengths')

    simple(first_string,second_string)
else:
    print ("One of the input is a null string")



#most simplest case

