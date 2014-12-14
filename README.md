# St. Petersburg Paradox Simulator
This program was written as a quick exercise to prevent programming rust.
Stublling around the internet like we all do from time to time I came across
 the *St. Petersburg Paradox*I read up on it and found it quite interesting 
 and thought it would be a simple little exercise to program a quick simulator to get some rough data on the problem.

##What is the St. Petersburg Paradox?
The St. Petersburg Paradox revolves around the idea of this game. Assume you start with $2. You will then keep flipping a coin until you flip a tails. For each head you flip you double the amount of money in the pot. At the first tails the game is over and you get whatever money was in the pot. Simple enough game. Using game theory we can calculate the expected winning of the game by summing the possible winnings ($2, $4, $8, ...) multiplied by their associated probabilities (1/2, 1/4, 1/8, ...)

Doing this we find that the expected winnings of the game would be infinite!
So logically any sane person *should* be willing to pay any finite amount of money in the world to be able to play since they statistically stand to earn more. Right? Well that's where the paradox comes in. You can explain this to any person and find that most people aren't willing to pay more than so $25 to play.

You can read a more detailed explaination of the paradox itself at [St. Petersburg Paradox](http://en.wikipedia.org/wiki/St._Petersburg_paradox)

##St. Petersburg Paradox Simulator
So the whole point of the program is to simluate a few (million) games of the described game and see how much the person would win on average. It's a pretty simple idea. No fancy maths or anything. It's just a **very** small program to keep my brain in the programming mindset during the summer holidays. It was also an excuse to spend a day setting up my programming environment on my new computer and playing arounda little more with [Markdown](https://help.github.com/articles/markdown-basics/)

** Usage
On the off chance that someone wants to clone this and run it for themselves here is how to use it:

``` gcc ParadoxSimulation.c -o Simulate```

``` ./Simulate ```

You can optionally include a parameter for the number of trials you want to run (if not specified it will default to 100)

``` ./Simulate 1000000 ```

## Results
For anyone else that can't be bothered running it themselves but are curious what kind of results I found here are a few simulations:

| Num Trials | Average |
| ---------- | --------|
|10|$2.00|
|20|$7.00|
|50|$6.00|
|100|$100.00|
|500|$12.00|
|1,000|$8.00|
|5,000|$11.00|
|10,000|$16.00|
|50,000|$18.00|
|100,000|$28.00|
|500,000|$23.00|
|1,000,000|$23.00|
|5,000,000|$24.00|
|10,000,000|$36.00|
|50,000,000|$24.00|
|50,000,000|$26.00|
|50,000,000|$29.00|

Trying to do too many samples (ie 100,000,000) results in an integer overflow and gives you a negative result. Maybe I could change the implementation to account for this one day (not likely though)



