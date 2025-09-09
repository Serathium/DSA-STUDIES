
# Exercises  

## 1.2-1  

*"Give an example of an application that requires algorithmic content at the applica-
tion level, and discuss the function of the algorithms involved."*  

File compression software, like WinRAR. As far as I understand, file compression softwares 
utilize algorithms to detect and shorten redundant information, making the total file size smaller.  

## 1.2-2  

*"Suppose that for inputs of size **n** on a particular computer, insertion sort runs in 8**n**<sup>2</sup>
steps and merge sort runs in 64 **n** lg **n** steps. For which values of **n** does insertion
sort beat merge sort?"*  

We should build the inequation and simplify it first. Afterwards, we can test different values
for n to check what (if it exists) interval of values will result in insertion sort requiring less steps
to complete than merge sort.  
I will not bore you with every test I made, but I began testing for n = 1
and n = 100 then doubling or halving depending on the result. There likely exists a fancier, more efficient mathematical method
to solve this inequation. I, however, am not aware of it.  

![solution](1-2-2.png)  

## 1.2-3  

*"What is the smallest value of **n** such that an algorithm whose running time is 100**n**<sup>2</sup>
runs faster than an algorithm whose running time is 2**n** on the same machine?"*  
The smallest value of **n** is 15.  

![solution2](1-2-3.png)