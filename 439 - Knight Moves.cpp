#include <bits/stdc++.h>

using namespace std;

struct Cell
{
    int x, y;
    int step;

    Cell(){}
    Cell(int x, int y, int step) : x(x), y(y), step(step){}
};

bool isinside(int x, int y);
int getstepknight(string sp, string st);

int main()
{
    string str, sp, st;
    int x;

    while(getline(cin, str))
    {
        sp = str.substr(0, str.find(" "));
        st = str.substr(str.find(" ")+1, str.size());

        x = getstepknight(sp, st);

        cout << "To get from " << sp << " to " << st << " takes " << x << " knight moves.";

        cout << endl;
    }

    return 0;
}


int getstepknight(string sp, string st)
{
    int dx[] = {0, 2, 1, -2, 1, -1, 2, -2, -1};
    int dy[] = {0, 1, 2, 1, -2, 2, -1, -1, -2};

    int px, py, tx, ty;

    px = sp[0] - 'a' + 1;
    py = sp[1] - '0';
    tx = st[0] - 'a' + 1;
    ty = st[1] - '0';

    //cout << px << ", " << py << endl;
    //cout << tx << ", " << ty << endl << endl;

    queue <Cell> q;
    Cell t;


    bool visited[10][10];

    for(int i = 1; i <=8; i++)
    {
        for(int j = 1; j <= 8; j++)
        {
            visited[i][j] = false;
        }
    }


    q.push(Cell(px, py, 0));
    visited[px][py] = true;

    while(!q.empty())
    {
        t = q.front();

        q.pop();

        if(t.x == tx && t.y == ty)
        {
            return t.step;
            //cout << "got target " << tx << ", " << ty << endl;
        }

        for(int i = 1; i <= 8; i++)
        {

            int x = t.x + dx[i];
            int y = t.y + dy[i];

            if(isinside(x, y) && !visited[x][y])
            {
                q.push(Cell(x, y, t.step + 1));
                visited[x][y] = true;

                //cout << x << ", " << y << "\t" << t.step  + 1 << endl;
            }

        }
    }
}

bool isinside(int x, int y)
{
    if(x > 0 && x < 9 && y > 0 && y < 9)
        return true;
    return false;
}

