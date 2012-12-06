#include "Maze.h"
#include "MazeFactory.h"
#include "MazeGame.h"

Maze* MazeGame::CreateMaze(MazeFactory& mazeFactory)
{
    return mazeFactory.MakeMaze();
}
