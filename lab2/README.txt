Lab 2 Achievements: 
For requirment 1, I mainly just ran the program, to verify my understanding of the Towers of Hanoi algorithm. For Requirement 2, 
I had some problems when handling the arguments from the command line, specially in the nested if statements, however these were not 
necessarily difficulties due to the program complexity, more so due to my knowledge of c programming. 
Upon comepletion, everything works as outlined in the specs and the lab is complete.  

Requiement 1 Answers:

Question 1: 
The first recursive call will be towers (4,2,1). 
Question2: 
62 calls will be made (twice for each move). 
Question3: 
2,3 will be printed to std out. This is equivalent to moving disk 0 (the smallest disk) from tower 2 to 3 exposing disk 1(the second smallest disk).
Question 4:
the second recursive call will be towers(3,2,3). 
Question5: 
if towers(8,1,2) is invoked, the number of moves to solve the puzzle is 2^8 - 1, which is equal to 255. Since stdout displays the number of moves, 
the number of lines printed should also be 255. This is indeed correct (verified by tutorial 2 implementation).  