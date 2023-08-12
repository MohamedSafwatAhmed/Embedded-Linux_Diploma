#------count the number 4 in a given list---------#
x=[7,4,1,4,2,4,8,6,4]
n=x.count(4)
print(n)

#-------python program to test whether a passes letter ia a vowel or not----#
def is_vowel(ch):
    vowels="aeiouAEIOU"
    return ch in vowels
print(is_vowel('b'))


#-------Acesses the Environment variable and print path---------#
import os 
path_value=os.environ.get('PATH')
print(path_value)
