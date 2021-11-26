**Yellovball Rotation**  

There is a sport named Yellovball in Akamanja country. It takes 6 players in each side for a match. They stand in the pitch in two rows, 3 in each rows. The players change their position in such a way that their formation rotates counter-clockwise. For example, A,B,C,D,E,F denotes 6 players in a team. Initially they are standing as   
ABC  
FED  
after a rotation their position will end up like  
BCD  
AFE  
after another rotation their position will end up like   
CDE  
BAF  
> The conditions for rotation are
>* One team plays the ball first. If they gets point then they play the ball again.
>* If they lose point to their opponent, the opponent have to rotate their position anti-clockwise once and the opponent have to play the ball to again.
>* Similarly, if the opponent plays the ball this time and wins a point, they have to play the ball next time and if the opponent lose the point, the first team have to rotate.
    
Game ends when a team takes 5 points first. You will be given multiple state of the game where each state is shown when any of the two teams takes a point. The output will be the winner of the game and their position in rotation after winning the game.
> Input
> * The first line of input contains two integers __*n*__ and __*t*__. __*n*__ denotes the team which plays the ball first. __*n =  1*__ for the first team plays the ball first and __*n = 2*__ for the second team plays the ball at the starting of the game.
> * __*t*__ denotes the number of states of the game where any of the two team gets point till anyone wins
> * Then __*t*__ line follows where each line contains two integer __*x*__ and __*y*__. __*x*__ denotes the current point of team1 at that state and __*y*__ denotes the current point of team2.  
  

> Output
> * First line of the output is winner of the game. __*1*__ if team1 wins and __*2*__ if team2 wins
> * Second and third line of the output is the position of the players of the winning team as two string in two lines. Initially six players are positioned as  
> ABC  
> FED