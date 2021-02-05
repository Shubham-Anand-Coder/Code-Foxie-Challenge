# Codefoxie-coding-challenge

## The Brewery - Transport Refrigeration Sensors

Meet Baz. He works at The Brewery, a boutique micro brewery based in rural NSW, creators of 6
unique beer varieties. Baz is responsible for driving the large transport truck, each Thursday
delivering goods from the brewery to a range of pubs across metropolitan Sydney.

Each beer has its own specific refrigeration needs whilst being transported:

	Beer 1 -> 4°C - 6°C
	Beer 2 -> 5°C - 6°C
	Beer 3 -> 4°C - 7°C
	Beer 4 -> 6°C - 8°C
	Beer 5 -> 3°C - 5°C
	
The refrigerated truck is loaded with multiple containers, each set to a specific temperature and
each containing a thermometer sensor.
While driving, Baz is alerted if any of the containers fall outside of the temperature range.
Unfortunately this is common due to factors such as when unloading the truck, the heat of
Sydney summer or sometimes due to human error in leaving the container doors ajar.

Instructions
------------
Develop a solution that shows Baz the current temperature of each container and notifies him
when the temperatures are out of the correct range.
1. You can choose the coding language you feel best meets the user needs
2. Don't gold plate the solution. Make best use of the time available to you to deliver the
most valuable solution
3. If you have any questions contact us or make your own assumptions and document them
with the solution
4. The solution is not required to use a database server, if needed mock the data you will
need internally in any of the application layers
5. The solution must be implemented with an acceptable level of automated tests
6. We prefer that you have this on a Git repository; Github, Gitlab or Bitbucket. If you can’t
then send us a zip file with your code or a link where we can download the package from
7. Make sure your package contains a readme file with any relevant information necessary
to run your project, including:

	a. What are the highlights of your logic/code writing style?
	
	b. What could have been done in a better way?
	
	c. Any other notes you feel relevant for the evaluation of your solution


## My Assumptions for console based solution: ( Solution.cpp is the file name )

1. The no. of containers present in the truck is equal to the no. of vareities of beers given.
2. Duration of journey will be given
3. The temperature reading of each container will be provided at each second of the journey.
4. Inputs:

	n -> no. of varieties of beers
	
	bound[n] -> range of suitable temperature for different varieties of beer
	
	q -> no. of seconds truck tarvels from start to destination
	
	X -> an array denoting the reading of temperature sensors of each container at each second.	
	
5.Output:

	A warning is generated at each second for specific containers if their temperature goes out of the suitable range of the beer, otherwise a msg is displayed to tell that all things are fine inside.

## My Assumptions for webapp based solution:

1. Products will pass through multiple cities.
2. The temperature reading of each container will be provided during registring the product in the website.
3. Open the website register yourself and register the product by entering all the relevant details.
4. I have used an open source openweathermap.org api to get the current temprature of the city.
5. If the current temp of the city , exceeds the temp bound the product which was mentioned while registring the product, it will generate an alert.
6. If the truck travels across states to deliver the product, we will have to contiously change the city name , which can be done real time using google map api.

## Console Based Solution has been implemented as follows --- 

## Sample Input:

	5
	4 6
	5 6
	4 7
	6 8
	3 5
	7
	4 4 4 4 4
	5 5 5 5 5
	6 6 6 6 6
	7 7 7 7 7
	8 8 8 8 8
	1 2 3 4 5
	8 7 6 5 4


## Sample Output:

Enter the no. of varieties of beers: 5

Enter the range of temperatures for each varieties of beer respectively(L, R):

        For beer 1: 4 6
        For beer 2: 5 6
        For beer 3: 4 7
        For beer 4: 6 8
        For beer 5: 3 5

The initial temperature of the containers will be set to:

        For container 1-> 5
        For container 2-> 5
        For container 3-> 5
        For container 4-> 7
        For container 5-> 4

Truck departs from the starting point.

Enter the duration of journey from start to destination: 7

At second 1:

        Enter the present reading of each temperature sensor of the containers (in the form of array): 4 4 4 4 4

                Warning!!! Temperature low for container 2. Hurry, increase the temperature for container 2.
                Warning!!! Temperature low for container 3. Hurry, increase the temperature for container 3.
                Warning!!! Temperature low for container 4. Hurry, increase the temperature for container 4.
At second 2:

        Enter the present reading of each temperature sensor of the containers (in the form of array): 5 5 5 5 5

                Warning!!! Temperature low for container 4. Hurry, increase the temperature for container 4.
At second 3:

        Enter the present reading of each temperature sensor of the containers (in the form of array): 6 6 6 6 6

                Warning!!! Temperature high for container 5. Hurry, decrease the temperature for container 5.
At second 4:

        Enter the present reading of each temperature sensor of the containers (in the form of array): 7 7 7 7 7

                Warning!!! Temperature high for container 1. Hurry, decrease the temperature for container 1.
                Warning!!! Temperature high for container 2. Hurry, decrease the temperature for container 2.
                Warning!!! Temperature high for container 5. Hurry, decrease the temperature for container 5.
At second 5:

        Enter the present reading of each temperature sensor of the containers (in the form of array): 8 8 8 8 8

                Warning!!! Temperature high for container 1. Hurry, decrease the temperature for container 1.
                Warning!!! Temperature high for container 2. Hurry, decrease the temperature for container 2.
                Warning!!! Temperature high for container 3. Hurry, decrease the temperature for container 3.
                Warning!!! Temperature high for container 5. Hurry, decrease the temperature for container 5.
At second 6:

        Enter the present reading of each temperature sensor of the containers (in the form of array): 1 2 3 4 5

                Warning!!! Temperature low for container 1. Hurry, increase the temperature for container 1.
                Warning!!! Temperature low for container 2. Hurry, increase the temperature for container 2.
                Warning!!! Temperature low for container 3. Hurry, increase the temperature for container 3.
                Warning!!! Temperature low for container 4. Hurry, increase the temperature for container 4.
At second 7:

        Enter the present reading of each temperature sensor of the containers (in the form of array): 8 7 6 5 4

                Warning!!! Temperature high for container 1. Hurry, decrease the temperature for container 1.
                Warning!!! Temperature high for container 2. Hurry, decrease the temperature for container 2.
                Warning!!! Temperature low for container 4. Hurry, increase the temperature for container 4.

Truck reached Destination :)

## Steps to Run the Website

1. Download all the relevant repository
2. Open Visual Studio or atom and run the command npm install
3. Once all the dependencies mentioned in the package.json file is intalled run the command npm start to start the server
4. Run the command node app.js and go to localhost:5015 to enter the website
5. Work on the Node.js Weather API is still going on

## Screenshots attached
![3](https://user-images.githubusercontent.com/68725362/106994623-2d2a2900-67a3-11eb-884e-7ef204c5fda8.PNG)
![4](https://user-images.githubusercontent.com/68725362/106994631-2ef3ec80-67a3-11eb-8b09-66f9e6877d8b.PNG)
![1](https://user-images.githubusercontent.com/68725362/106994633-2f8c8300-67a3-11eb-9c48-5f0249c6bcc0.jpg)

![5](https://user-images.githubusercontent.com/68725362/106995113-32d43e80-67a4-11eb-8927-256e402bd008.PNG)

![6](https://user-images.githubusercontent.com/68725362/106995186-5d25fc00-67a4-11eb-9bc8-6f2aa60d4f9a.PNG)

## What I could have done better if we had given you 2 months to build this solution, instead of 2 days. 
1. Work on the integration of the weather api in the website I would have done
2. If truck travels across cities, we have have gotten the real time temprature of the city using the google map api and given the name of 
the city in the openweathermap api to get it's real time temprature
3. This Project could have been further modified to ensure  effective delivery of the vaccines too, as vaccine delivery is temp dependent too.





