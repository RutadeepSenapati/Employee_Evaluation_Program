______________________________________________

********Employee Evaluation Program***********
______________________________________________
**********************************************

CP_Assignment_7.c -->Source code
a.exe             -->Executable File
Email_Check.h       -->User Defined Header file for checking a entered string is a valid mail id or not


Input Fields: 
	1. Employee Name
	2. Official Mail Id
	3. Mobile Number(Only Indian numbers)
	4. If the User have any Technical Yes or No
		-->If the user has technical skills then he needs to enetr atleast one or atmost 5 Technical skills.
		-->If the user get awarded for any of the technical skill, Yes or No
			--> then he needs to specify those technical skills
		-->Service Period
		-->If the user petented any design or software developed by himself Yes or No.

Working:
	1. It Checks if the entered email id is valid or not
		-->If it is a invalid mail id the system asks user to enter a valid mail id upto 3 attempts after that is terminates the program.
	2. It Checks if the entered mobile number is valid or not
		-->If it is a invalid mobile number the system asks user to enter a valid mobile number upto 3 attempts after that is terminates the program.
	3. It Checks if the user has any technical skills or not.
		-->If the user enytered Yes, the system asks the user to enter atleast one and atmost 5 technical skills. 
		   The system gives 3 attempts to enter atleast one technical skill, if the user doesnot enter any skills then it terminates the program.
		-->If the user has awarded for any technical skills then he needs to enter those.Based on which he will get incentives as mentioned below:
		-->It checks if the user has patented any design or software developed by him if Yes then he will get promotion.
		-->If the user has 6 years of experience and:
					a. Awarded for 1 technical skill will get 2% incentive.
					b. Awarded for 2 technical skill will get 4% incentive.
					c. Awarded for 3 technical skill will get 6% incentive.
					d. Awarded for 4 technical skill will get 8% incentive.
					e. Awarded for 5 technical skill will get 10% incentive.
		-->If none is satified the user is requested to improve their skills.
	4. If the user doe not have any technical skills then he will be asked to acquire some technical skills.
	