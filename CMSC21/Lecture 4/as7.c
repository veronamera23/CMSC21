#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

int r, c, i, j, go, check, adj, loc, start, address;

void matrix(int Adj[][r + 1],
			int arr[][2])
    {

	for (int i = 0; i < r + 1; i++) 
    {

		for (int j = 0; j < r + 1; j++) 
        {
			Adj[i][j] = 0;
		}
	}
	for (int i = 0; i < c; i++) 
    {
		int x = arr[i][0];
		int y = arr[i][1];
		Adj[x][y] = 1;
		Adj[y][x] = 1;
	}
}

void printmatrix(int Adj[][r + 1])
{

	for (int i = 1; i < r + 1; i++) {
		for (int j = 1; j < r + 1; j++) {

			printf("%d ", Adj[i][j]);
		}
		printf("\n");
	}
}

int main()
    {
	r = 9;

	int arr[][2]
		= { {1, 1}, {1, 2}, {1, 6},
		    {2, 1}, {2, 2}, {2, 3},
		    {3, 2}, {3, 3}, {3, 6},
		    {4, 4}, {4, 5},
		    {5, 4}, {5, 5},
		    {6, 1}, {6, 3}, {6, 6}, 
		    {7, 7}, 
		    {8, 8}, {8, 9},
		    {9, 8}, {9, 9},
		};
	c = sizeof(arr) / sizeof(arr[0]);

	int adj[r + 1][r + 1];
	matrix(adj, arr);
    
    printf("a b[c][d]e f g h i\n");
	printmatrix(adj);
	
    printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    scanf("%d", &loc);
    do{
            printf("Invalid Input. Please try a valid input address.");
    } while (loc == 8 || loc < 0);

    int go[9], Distance;
    bool check[9];

    for (i = 0; i < 9; i++) {
        distance[i] = INT_MAX, check[i] = false;
    }
    go[loc] = 0;

    for (start = 0; start < 9 - 1; start++) 
        {
        address = int min(go, check);
        check[address] = true;
        for (adj = 0; adj < 9; adj++) {
            if (!check[adj]
                && road_networks[address][adj]
                && go[address] != INT_MAX
                && go[address] + road_networks[address][adj] < go[adj]) {
                    go[adj] = go[address] + road_networks[address][adj];
            }
        }
    }

    if (loc == 2 || loc == 3) {
        printf("At point: %c.\n", 65 + loc);
        printf("point %c is a charging station\n", 65 + loc);
    }
    else if (distance[2] == INT_MAX && distance[3] == INT_MAX) {
        printf("At point: %c.\n", 65 + loc);
        printf("No near charging stations.\n");
    }
    else {
        printf("At point: %c.\n", 65 + loc);
        printf("point: %d arrived to charging station.\n", 67 + (distance[2] > distance[3]));
    }

    return 0;
}
