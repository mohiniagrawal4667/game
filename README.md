*Understanding the existing game logic
The detailed analysis of Lane Runner Game 
(that was all I could understand)
This is a simple console-based lane runner game. The player is at the bottom and can move left or right using arrow key. Obstacles fall from the top in random lanes, and the player has to avoid them. If an obstacle reaches the bottom in the same lane as the player, the game ends.
How it works :
The game keeps running in a loop.
First, it checks if the player pressed left or right and moves the player. Then it draws the lanes, obstacles, and player on the screen. The obstacle moves down one step in each loop. If the obstacle reaches the bottom where the player is, the game shows “GAME OVER” and stops.
If the obstacle reaches the bottom but the player is not in that lane, a new obstacle comes from the top in a random lane.

Key points I understood:(I tried to add whatever I could grasp)
1.x is the player’s lane.
2.step is how far down the obstacle has moved.
3.obstaclePos is the lane of the current obstacle.
4.rand() is used to place the obstacle randomly.
5._kbhit() and getch() are used to read player input without waiting.
6.Sleep() controls the speed of the game.

Basically the game is all about animation and little fun with help of simple logic.
The game is a simple animation in the console using loops and conditions. It helps me understand basic game logic, random numbers, keyboard input, and collision detection.





* Implement Modifications
  The three modifications that I made are Score system,Game restart and Sound / Audio effects.(with some modifications in the overall code too to make it more fun)

1.Score system:-
It was easiest  to add in the program.When the game gets over the final score is shown clearly.When the player dodges the obstacle ,it gets increased by 1.It shows how long the player survives.
If we talk about the changes in the code,We added a new int variable of score initializing it with 0 .It later gets increase with number of obstacles you dodge andwhen it finally gets over ,it shows the final score.

2.Restart (play again) option:-
It was to add the restart the game withiin thee terminal.Wrapped the game code inside a function playGame().After game over, user is prompted: Do you want to play again?.
do…while loop in main() handles replay without restarting the program.Its quite easy when we use with the help of functions.

3.Sound effects(Beep sound):-
It was the real task to add the sound in the game when we clearly dont know how to add background audio.For that I had to learn about the  Beep() function in C to add small sound effects to the game.
This function lets the computer make simple beeping sounds.It was new for me but with some help of AI and online teachers,I could get the idea of how it works.
So lets start how it works where I used sound in the game
      1. When the player hits an obstacle - A short warning beep so the player knows they lost a life.
      2. When the player dodges an obstacle - A slightly longer and higher beep that feels like a reward.
      3.When the game is over - A low long beep to show the game has ended.
      
Why I chose it as an extra modification even when the requirement was fulfilled?
Sound effects make the game more fun and interactive .It helps to create the thrill when playing the game.It is very fascinating to develop a game that has various sounds depending on the condition like dodging the obstacle or losing a life.


I took it as an activity to modify it by adding everything I could to make it more efficient so the initial some loops formatting and other commands were slighty changed to maintain its rhythym with the existing as well as the new modified version of it.


Hope you enjoy playing it with now added features :) !!!
                                                          Thanks




The game is a simple animation in the console using loops and conditions. It helps me understand basic game logic, random numbers, keyboard input, and collision detection.

