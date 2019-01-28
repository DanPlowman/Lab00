#Daniel Plowman
#COSC 2030
#Jan 28, 2019
#lab 00

print("Hello Github!")								#outputs Hello Github! to the first line
file_squestns = open('StudentQuestions.txt', 'r')	#defines file_squestns as a read file and opens 'StudentQuestions.txt' as that file
file_sanswers = open('StudentAnswers.txt', 'w')		#same as above, but with writing and 'StudentAnswers.txt
for line in file_squestns:							#Creates a for loop that repeats for each line in file_squestns
  ans = input(line)									#Sets variable ans as the input received for the line of code
  file_sanswers.write(ans + '\n') 					#Writes variable ans to the output file then goes down a line
print("Goodbye Github!")							#Outputs Goodbye Github! to the last line
file_squestns.close()								#saves and closes the input file
file_sanswers.close()								#saves and closes the output file



