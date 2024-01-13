#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int MAX_SIZE = 10;

struct Point
{
    int x, y, dist;
};

bool isValid(int x, int y, vector<vector<char>> &maze, vector<vector<bool>> &visited)
{
    return x >= 0 && x < maze.size() && y >= 0 && y < maze[0].size() && (maze[x][y] == 'O' || maze[x][y] == 'E') && !visited[x][y];
}

int shortestPath(vector<vector<char>> &maze)
{
    int startX, startY;
    int endX, endY;

    for (int i = 0; i < maze.size(); i++)
    {
        for (int j = 0; j < maze[0].size(); j++)
        {
            if (maze[i][j] == 'S')
            {
                startX = i;
                startY = j;
            }
            else if (maze[i][j] == 'E')
            {
                endX = i;
                endY = j;
            }
        }
    }

    int movesX[] = {-1, 1, 0, 0};
    int movesY[] = {0, 0, -1, 1};

    queue<Point> q;
    q.push({startX, startY, 0});

    vector<vector<bool>>
        visited(MAX_SIZE, vector<bool>(MAX_SIZE, false));

    while (!q.empty())
    {
        Point current = q.front();
        q.pop();

        int x = current.x;
        int y = current.y;

        int dist = current.dist;

        if (x == endX && y == endY)
        {
            return dist;
        }

        for (int i = 0; i < 4; i++)
        {
            int newX = x + movesX[i];
            int newY = y + movesY[i];

            if (isValid(newX, newY, maze, visited))
            {
                cout << " (" << x << "," << y << ")";
                cout << " -> ";
                cout << " (" << newX << "," << newY << ")" << endl;

                visited[newX][newY] = true;
                q.push({newX, newY, dist + 1});
            }
        }
    }

    return -1;
}

int main()
{
    vector<vector<char>> maze = {
        {'S', 'O', '1', 'O', 'O'},
        {'O', '1', 'O', '1', 'O'},
        {'O', 'O', 'O', 'O', 'O'},
        {'O', '1', '1', '1', 'O'},
        {'O', 'O', 'O', 'E', 'O'}};

    int result = shortestPath(maze);

    if (result == -1)
    {
        cout << "NO PATH POSSIBLE" << endl;
    }
    else
    {
        cout << "SHORTEST NO. OF STEPS: " << result << endl;
    }
}