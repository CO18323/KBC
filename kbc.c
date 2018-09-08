/*Made By Uday - CSE ( 2018 ) - CO18325*/
#include<stdio.h>
void main()
{
int a;
one:
	printf("Question 1: What is 2+5?\n");
	printf("1. 2\n2. 5\n3. 7\n4. 8\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==3)
	{
		printf("Congratulations! Your answer is correct! You have won 1000 Rupees\n \n");
		goto two;
	}
	else{

		switch(a)
		{
			case 1:
			case 2:
			case 4:
			printf("Answer is wrong\n");
			goto one_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n1. 2\n3. 7\n");
			printf("\nEnter your answer, the question is:\n");
			goto one;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 2%%  2. 8%%  3. 90%%  4. 0%%\n");
			printf("Enter your answer\n");
			goto one;
			default:
			printf("Please enter valid answer\n");
			goto one;
		}
		one_lost:
			printf("Unfortunately you have won nothing!\n");
			goto end;
	    }

two:
	printf("\nQuestion 2. Which of these is an Operating System?\n");
	printf("\n1. Linux\n2. Google Chrome\n3. Java\n4. Intel\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==1)
	{
		printf("\nCongratulations! Your answer is correct! You have won 5000 Rupees\n \n");
		goto three;
	}
	else{

		switch(a)
		{
			case 2:
			case 3:
			case 4:
			printf("Answer is wrong\n");
			goto two_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n1. Linux\n2. Google Chrome\n");
			printf("\nEnter your answer, the question is:\n");
			goto two;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 60%%  2. 10%%  3. 15%%  4. 15%%\n");
			printf("Enter your answer\n");
			goto two;
			default:
			printf("Please enter valid answer\n");
			goto two;
		}
		two_lost:
			printf("You have won 1000 Rupees!\n");
			goto end;
	    }
three:
	printf("Question 3: How many states are in India?\n");
	printf("1. 25\n2. 27\n3. 29\n4. 31\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==3)
	{
		printf("Congratulations! Your answer is correct! You have won 10000 Rupees\n \n");
		goto four;
	}
	else{

		switch(a)
		{
			case 1:
			case 2:
			case 4:
			printf("Answer is wrong\n");
			goto three_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n2. 27\n3. 29\n");
			printf("\nEnter your answer, the question is:\n");
			goto three;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 2%%  2. 40%%  3. 45%%  4. 13%%\n");
			printf("Enter your answer, the question is\n");
			goto three;
			default:
			printf("Please enter valid answer\n");
			goto three;
		}
		three_lost:
			printf("You have won 5000 Rupees!\n");
			goto end;
	    }
four:
	printf("Question 4: What is formula of Ozone?\n");
	printf("1. O\n2. O3\n3. O2\n4. O4\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==2)
	{
		printf("Congratulations! Your answer is correct! You have won 50000 Rupees\n \n");
		goto five;
	}
	else{

		switch(a)
		{
			case 1:
			case 3:
			case 4:
			printf("Answer is wrong\n");
			goto four_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n2. O3\n3. O2\n");
			printf("\nEnter your answer, the question is:\n");
			goto four;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 2%%  2. 60%%  3. 30%%  4. 8%%\n");
			printf("Enter your answer\n");
			goto four;
			default:
			printf("Please enter valid answer\n \n");
			goto four;
		}
		four_lost:
			printf("You have won 10000!\n");
			goto end;
	    }
five:
	printf("Question 5: Who is author of Ramayana?\n");
	printf("1. Rabindranath Tagore\n2. Dronacharya\n3. Pashuram\n4. Valmiki\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==4)
	{
		printf("Congratulations! Your answer is correct! You have won 100000 Rupees\n \n");
		goto six;
	}
	else{

		switch(a)
		{
			case 1:
			case 2:
			case 3:
			printf("Answer is wrong\n");
			goto five_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n2. Dronacharya\n3. Valmiki\n");
			printf("\nEnter your answer, the question is:\n");
			goto five;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 0%%  2. 40%%  3. 9%%  4. 51%%\n");
			printf("Enter your answer\n");
			goto five;
			default:
			printf("Please enter valid answer\n \n");
			goto five;
		}
		five_lost:
			printf("You have won 50000!\n");
			goto end;
	    }
six:
	printf("Question 6: Which of these is not a social networking site?\n");
	printf("1. Facebook\n2. Oracle\n3. Orkut\n4. Instagram\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==2)
	{
		printf("Congratulations! Your answer is correct! You have won 200000 Rupees\n \n");
		goto seven;
	}
	else{

		switch(a)
		{
			case 1:
			case 3:
			case 4:
			printf("Answer is wrong\n");
			goto six_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n1. Facebook\n2. Oracle\n");
			printf("\nEnter your answer, the question is:\n");
			goto six;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 40%%  2. 50%%  3. 4%%  4. 6%%\n");
			printf("Enter your answer\n");
			goto six;
			default:
			printf("Please enter valid answer\n \n");
			goto six;
		}
		six_lost:
			printf("You have won 100000!\n");
			goto end;
	    }
seven:
	printf("Question 7: Which of these is not one of the seven wonders?\n");
	printf("1. Red fort\n2. Taj Mahal\n3. Great Wall of China\n4. Leaning Tower of Pisa\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==1)
	{
		printf("Congratulations! Your answer is correct! You have won 500000 Rupees\n \n");
		goto eight;
	}
	else{

		switch(a)
		{
			case 2:
			case 3:
			case 4:
			printf("Answer is wrong\n");
			goto seven_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n1. Red Fort\n4. Leaning Tower Of Pisa\n");
			printf("\nEnter your answer, the question is:\n");
			goto seven;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 36%%  2. 24%%  3. 4%%  4. 6%%\n");
			printf("Enter your answer\n");
			goto seven;
			default:
			printf("Please enter valid answer\n \n");
			goto seven;
		}
		seven_lost:
			printf("You have won 200000!\n");
			goto end;
	    }
eight:
	printf("Question 8: Who was first prime minister of India?\n");
	printf("1. Dr. Rajendra Prasad\n2. Pt. Jawaharlal Nehru\n3. Narendra Modi\n4. Indra Gandhi\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==2)
	{
		printf("Congratulations! Your answer is correct! You have won 1000000 Rupees\n \n");
		goto nine;
	}
	else{

		switch(a)
		{
			case 1:
			case 3:
			case 4:
			printf("Answer is wrong\n");
			goto eight_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n1. Dr. Rajendra Prasad\n2. Pt. Jawaharlal Nehru\n");
			printf("\nEnter your answer, the question is:\n");
			goto eight;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 40%%  2. 50%%  3. 4%%  4. 6%%\n");
			printf("Enter your answer\n");
			goto eight;
			default:
			printf("Please enter valid answer\n \n");
			goto eight;
		}
		eight_lost:
			printf("You have won 500000!\n");
			goto end;
	    }
nine:
	printf("Question 9: How many squares are there in a chess board?\n");
	printf("1. 62\n2. 64\n3. 66\n4. 68\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==2)
	{
		printf("Congratulations! Your answer is correct! You have won 2000000 Rupees\n \n");
		goto ten;
	}
	else{

		switch(a)
		{
			case 1:
			case 3:
			case 4:
			printf("Answer is wrong\n");
			goto nine_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n2. 64\n4. 68\n");
			printf("\nEnter your answer, the question is:\n");
			goto nine;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 9%%  2. 60%%  3. 11%%  4. 20%%\n");
			printf("Enter your answer\n");
			goto nine;
			default:
			printf("Please enter valid answer\n \n");
			goto nine;
		}
		nine_lost:
			printf("You have won 1000000!\n");
			goto end;
	    }
ten:
	printf("Question 10: Who is CEO of google?\n");
	printf("1. Larry Page\n2. Tim Cook\n3. Sundar Pichai\n4. Satyam Nandela\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==3)
	{
		printf("Congratulations! Your answer is correct! You have won 5000000 Rupees\n \n");
		goto eleven;
	}
	else{

		switch(a)
		{
			case 1:
			case 2:
			case 4:
			printf("Answer is wrong\n");
			goto ten_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n2. Tim Cook\n3. Sundar Pichai\n");
			printf("\nEnter your answer, the question is:\n");
			goto ten;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 9%%  2. 11%%  3. 60%%  4. 20%%\n");
			printf("Enter your answer\n");
			goto ten;
			default:
			printf("Please enter valid answer\n \n");
			goto ten;
		}
		ten_lost:
			printf("You have won 2000000!\n");
			goto end;
	    }

eleven:
	printf("Question 11: How many colors are there in a Rubik's Cube?\n");
	printf("1. 9\n2. 4\n3. 6\n4. 8\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==3)
	{
		printf("Congratulations! Your answer is correct! You have won 10000000 Rupees\n \n");
		goto twelve;
	}
	else{

		switch(a)
		{
			case 1:
			case 2:
			case 4:
			printf("Answer is wrong\n");
			goto eleven_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n1. 9\n3. 6\n");
			printf("\nEnter your answer, the question is:\n");
			goto eleven;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 9%%  2. 11%%  3. 60%%  4. 20%%\n");
			printf("Enter your answer\n");
			goto eleven;
			default:
			printf("Please enter valid answer\n \n");
			goto eleven;
		}
		eleven_lost:
			printf("You have won 5000000!\n");
			goto end;
	    }
twelve:
	printf("Question 12: Which of the following novel is written by Chetan Bhagat? \n");
	printf("1. Fault In Our Stars\n2. 2 States\n3. Inferno\n4. Krishnaki\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==2)
	{
		printf("Congratulations! Your answer is correct! You have won 20000000 Rupees\n \n");
		goto thirteen;
	}
	else{

		switch(a)
		{
			case 1:
			case 3:
			case 4:
			printf("Answer is wrong\n");
			goto twelve_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n1. Fault In Our Stars\n3. 2 States\n");
			printf("\nEnter your answer, the question is:\n");
			goto twelve;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 20%%  2. 60%%  3. 15%%  4. 5%%\n");
			printf("Enter your answer\n");
			goto twelve;
			default:
			printf("Please enter valid answer\n \n");
			goto twelve;
		}
		twelve_lost:
			printf("You have won 10000000!\n");
			goto end;
	    }
thirteen:
	printf("Question 13: Who won IPL 2018? \n");
	printf("1. KXIP\n2. Mumbai Indians\n3. Chennai Super Kings\n4. Pune SuperGiants\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==3)
	{
		printf("Congratulations! Your answer is correct! You have won 30000000 Rupees\n \n");
		goto fourteen;
	}
	else{

		switch(a)
		{
			case 1:
			case 2:
			case 4:
			printf("Answer is wrong\n");
			goto thirteen_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n2. Mumbai Indians\n3. Chennai Super Kings\n");
			printf("\nEnter your answer, the question is:\n");
			goto thirteen;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 20%%  2. 15%%  3. 60%%  4. 5%%\n");
			printf("Enter your answer\n");
			goto thirteen;
			default:
			printf("Please enter valid answer\n \n");
			goto thirteen;
		}
		thirteen_lost:
			printf("You have won 20000000!\n");
			goto end;
	    }
fourteen:
	printf("Question 14: When first world cup was organised? \n");
	printf("1. 1975\n2. 1980\n3. 1974\n4. 1973\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==1)
	{
		printf("Congratulations! Your answer is correct! You have won 50000000 Rupees\n \n");
		goto fifteen;
	}
	else{

		switch(a)
		{
			case 2:
			case 3:
			case 4:
			printf("Answer is wrong\n");
			goto fourteen_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n1. 1975\n3. 1974\n");
			printf("\nEnter your answer, the question is:\n");
			goto fourteen;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 65%%  2. 15%%  3. 10%%  4. 10%%\n");
			printf("Enter your answer\n");
			goto fourteen;
			default:
			printf("Please enter valid answer\n \n");
			goto fourteen;
		}
		fourteen_lost:
			printf("You have won 30000000!\n");
			goto end;
	    }
fifteen:
	printf("Question 15: On which date Stephen Hawkins died? \n");
	printf("1. 14 March 2018\n2. 21 April 2018\n3. 15 March 2018\n4. 22 March 2018\nLife Lines:\n5.50-50\n6. Audiance Poll\n"); 
	scanf("%d",&a);
	if (a==1)
	{
		printf("Congratulations, you won! Your answer is correct! You have won 70000000 Rupees\n \n");
		goto end;
	}
	else{

		switch(a)
		{
			case 2:
			case 3:
			case 4:
			printf("Answer is wrong\n");
			goto fifteen_lost;
			case 5:
			printf("\nYou have chosen 50-50, options are below\n");
			printf("\n1. 14 March 2018\n3. 22 March 2018\n");
			printf("\nEnter your answer, the question is:\n");
			goto fifteen;
			case 6:
			printf("Answers are being collected from the audiance\n");
			printf("\n1. 65%%  2. 15%%  3. 10%%  4. 10%%\n");
			printf("Enter your answer\n");
			goto fifteen;
			default:
			printf("Please enter valid answer\n \n");
			goto fifteen;
		}
		fifteen_lost:
			printf("You have won 50000000!\n");
			goto end;
	    }
end:
printf("\nThank you for playing with us\n");
}

