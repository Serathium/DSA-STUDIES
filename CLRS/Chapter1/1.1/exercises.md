
# Exercises

## 1.1-1

*"Describe your own real-world example that requires sorting. Describe one that requires finding the shortest distance between two points."*  
Sorting motorcycle tires by width.  
Finding the shortest path between my  apartment and the college campus.  

## 1.1-2

*"Other than speed, what other measures of efficiency might you need to consider in a real-world setting?"*  
Space. You must consider the memory requirement of an algorithm to solve the a problem.  

## 1.1-3

*"Select a data structure that you have seen, and discuss its strengths and limitations."*  
Linked Lists.  
**Strengths:** Dynamic size, flexible memory allocation.  
**Limitations:** Sequential access, not random. Unable to use Reverse Traversal in Singly Linked Lists.  

## 1.1-4

*"How are the shortest-path and traveling-salesperson problems given above similar? How are they different?"*  
Both problems use a weighted graph G = (V,E), where V is the set of vertices and E is the connections or edges, where each edge has a cost associated with it. The objective is the find a path that minimizes the total sum of edge cost. 
The difference is that the shortest-path problem doesn't need to visit every vertex, it only needs to find the shortest-path between the starting and destination vertex. Dijktra's Algorithm is capable of solving such problem in polynomial time.  
On the other hand, the traveling-salesperson problem solution aims to find the "best" Hamiltonian cycle in the graph, that is, the path that visits every node once, and only once, with the  minimum total cost.  

## 1.1-5

*"Suggest a real-world problem in which only the best solution will do. Then come up with one in which "approximately" the best solution is good enough."*  
For only the best solution, sorting the name of a class' students in alphabetical order. If it's not the best solution, then it's wrong.  
For approximation, finding the decimal numbers of PI. Since PI is irrational and, therefore, has infinite decimal numbers it is impossible to find all the decimal numbers.  
I don't know if these are good examples.

## 1.1-6

*"Describe a real-world problem in which sometimes the entire input is available before you need to solve the problem, but other times the input is not entirely available in advance and arrives over time."*  
Flight scheduling and gate assignment at an airport. Sometime you know the flights in advance, sometimes you don't (delays).  
