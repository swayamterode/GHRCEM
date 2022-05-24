# DAA Practical

## 1. Linear Search

```c
#include <stdio.h>
int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[20];
    int n, target;
    printf("Enter size of array ");
    scanf("%d", &n);
    printf("Enter array elements ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search ");
    scanf("%d", &target);
    int res = linearSearch(arr, n, target);
    if (res == -1)
        printf("Element does not found");
    else
        printf("Element found at position %d", linearSearch(arr, n, target));
}

```
---

## 2. Binary Search

```c
#include <stdio.h>
#include <stdbool.h>
// Order Agnostic Binary Search
int orderAgnosticBS(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    int mid;
    bool isAscending = arr[start] < arr[end];
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (isAscending)
        {
            if (target < arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if (target > arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    int arr[20];
    int size, target;
    printf("Enter size of array ");
    scanf("%d", &size);
    printf("Enter elemenets in sorted manner \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search ");
    scanf("%d", &target);
    int res = orderAgnosticBS(arr, size, target);
    printf("Element fount at %d position", res);
}

```
---

## 3. Bubble Sort

```c
#include <stdio.h>
void array_print(int a[], int n) // function to print array
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void bubble(int a[], int n) // function for bubble sort
{
    int i,
        j, temp;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void main()
{
    int a[10], i, j, temp;
    int a[5] = {30, 6, 18, 20, 15};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Before sorting array elements are - \n");
    array_print(a, n);
    bubble(a, n);
    printf("\nAfter sorting array elements are - \n");
    array_print(a, n);
}

```

---

## 4. Insertion Sort

```c
#include <stdio.h>
    void
    swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}
void insertionSort(int a[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            if (a[j] < a[j - 1])
            {
                swap(a, j, j - 1);
            }
        }
    }
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int a[10], n;
    printf("Enter Size of array \n");
    scanf("%d", &n);
    printf("Enter array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    display(a, n);
    insertionSort(a, n);
    printf("\n");
    display(a, n);
}
```
---

## 5. Selection Sort

```c
#include <stdio.h>
void selection(int arr[], int n)
{
    int i, j, s;
    for (i = 0; i < n - 1; i++)
    {
        s = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[s])
                s = j;
        }
        int t = arr[s];
        arr[s] = arr[i];
        arr[i] = t;
    }
}
void array_print(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);
}
void main()
{
    int a[10], n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf(" Before sorting array elements: \n");
    array_print(a, n);
    selection(a, n);
    printf(" \n After sorting array elements: \n");
    array_print(a, n);
    getch();
}

```

---

## 6. Merge Sort

```c
#include <stdio.h>
void mergeArr(int arr[], int beg, int mid, int end)
{
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;
    int LeftArr[n1], RightArr[n2]; // Temporary arrays  for(int i=0;i<n1;i++) //Copying data to temporary arrays  LeftArr[i]=arr[beg+i];
    for (int j = 0; j < n2; j++)
        RightArr[j] = arr[mid + 1 + j];
    i = 0; // Initial index of first sub-array
    j = 0; // Initial index of second sub-array  k=beg; // Initial index of merged array  while(i<n1 && j<n2)
    {
        if (LeftArr[i] <= RightArr[j])
        {
            arr[k] = LeftArr[i];
            i++;
        }
        else
        {
            arr[k] = RightArr[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = LeftArr[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = RightArr[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(arr, beg, mid);
        mergeSort(arr, mid + 1, end);
        mergeArr(arr, beg, mid, end);
    }
}
void array_print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
void main()
{
    int a[20], n;
    printf("Enter size of Array: ");
    scanf("%d", &n);
    printf("\n Enter Array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\n Array before sorting: ");
    array_print(a, n);
    mergeSort(a, 0, n - 1);
    printf("\n Array after sorting: ");
    array_print(a, n);
    getch();
}

```

---


## 7. Greedy Algorithm

```c
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#define V 5
int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;
    return min_index;
}
int printMST(int parent[], int graph[V][V])
{
    printf("Edge \tWeight\n");
    for (int i = 1; i < V; i++)
        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]);
}
void primMST(int graph[V][V])
{
    int parent[V]; // Array to store constructed MST
    int key[V];    // Key values used to pick minimum weight edge in cut  bool mstSet[V]; // To represent set of vertices included in MST  for (int i = 0; i < V; i++) // Initialize all keys as INFINITE
    key[i] = INT_MAX, mstSet[i] = false;
    key[0] = 0;
    parent[0] = -1;                             // First node is always root of MST
    for (int count = 0; count < V - 1; count++) // The MST will have V vertices {
        int u = minKey(key, mstSet);
    mstSet[u] = true; // Add the picked vertex to the MST Set  // Update key value and parent index of
    // the adjacent vertices of the picked vertex.
    // Consider only those vertices which are not
    // yet included in MST
    for (int v = 0; v < V; v++)
        // graph[u][v] is non zero only for adjacent vertices of m
        // mstSet[v] is false for vertices not yet included in MST
        // Update the key only if graph[u][v] is smaller than key[v]
        if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
            parent[v] = u, key[v] = graph[u][v];
}
printMST(parent, graph); // print the constructed MST
}
int main()
{
    int graph[V][V] = {{0, 2, 0, 6, 0},
                       {2, 0, 3, 8, 5},
                       {0, 3, 0, 0, 7},
                       {6, 8, 0, 0, 9},
                       {0, 5, 7, 9, 0}};
    primMST(graph); // Print the solution
    return 0;
}

```

---

## 8. Kruskal’s Algorithm

```c
#include <stdio.h>
#define MAX 30
typedef struct edge
{
    int u, v, w;
} edge;
typedef struct edge_list
{
    edge data[MAX];
    int n;
} edge_list;
edge_list elist;
int Graph[MAX][MAX], n;
edge_list spanlist;
void kruskalAlgo();
int find(int belongs[], int vertexno);
void applyUnion(int belongs[], int c1, int c2);
void sort();
void print();
// Applying Krushkal Algo
void kruskalAlgo()
{
    int belongs[MAX], i, j, cno1, cno2;
    elist.n = 0;
    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
        {
            if (Graph[i][j] != 0)
            {
                elist.data[elist.n].u = i;
                elist.data[elist.n].v = j;
                elist.data[elist.n].w = Graph[i][j];
                elist.n++;
            }
        }
    sort();
    for (i = 0; i < n; i++)
        belongs[i] = i;
    spanlist.n = 0;
    for (i = 0; i < elist.n; i++)
    {
        cno1 = find(belongs, elist.data[i].u);
        cno2 = find(belongs, elist.data[i].v);
        if (cno1 != cno2)
        {
            spanlist.data[spanlist.n] = elist.data[i];
            spanlist.n = spanlist.n + 1;
            applyUnion(belongs, cno1, cno2);
        }
    }
}
int find(int belongs[], int vertexno)
{
    return (belongs[vertexno]);
}
void applyUnion(int belongs[], int c1, int c2)
{
    int i;
    for (i = 0; i < n; i++)
        if (belongs[i] == c2)
            belongs[i] = c1;
}
// Sorting algo
void sort()
{
    int i, j;
    edge temp;
    for (i = 1; i < elist.n; i++)
        for (j = 0; j < elist.n - 1; j++)
            if (elist.data[j].w > elist.data[j + 1].w)
            {
                temp = elist.data[j];
                elist.data[j] = elist.data[j + 1];
                elist.data[j + 1] = temp;
            }
}
// Printing the result
void print()
{
    int i, cost = 0;
    for (i = 0; i < spanlist.n; i++)
    {
        printf("\n%d - %d : %d", spanlist.data[i].u, spanlist.data[i].v, spanlist.data[i].w);
        cost = cost + spanlist.data[i].w;
    }
    printf("\nSpanning tree cost: %d", cost);
}
int main()
{
    int i, j, total_cost;
    n = 6;
    Graph[0][0] = 0;
    Graph[0][1] = 4;
    Graph[0][2] = 4;
    Graph[0][3] = 0;
    Graph[0][4] = 0;
    Graph[0][5] = 0;
    Graph[0][6] = 0;
    Graph[1][0] = 4;
    Graph[1][1] = 0;
    Graph[1][2] = 2;
    Graph[1][3] = 0;
    Graph[1][4] = 0;
    Graph[1][5] = 0;
    Graph[1][6] = 0;
    Graph[2][0] = 4;
    Graph[2][1] = 2;
    Graph[2][2] = 0;
    Graph[2][3] = 3;
    Graph[2][4] = 4;
    Graph[2][5] = 0;
    Graph[2][6] = 0;
    Graph[3][0] = 0;
    Graph[3][1] = 0;
    Graph[3][2] = 3;
    Graph[3][3] = 0;
    Graph[3][4] = 3;
    Graph[3][5] = 0;
    Graph[3][6] = 0;
    Graph[4][0] = 0;
    Graph[4][1] = 0;
    Graph[4][2] = 4;
    Graph[4][3] = 3;
    Graph[4][4] = 0;
    Graph[4][5] = 0;
    Graph[4][6] = 0;
    Graph[5][0] = 0;
    Graph[5][1] = 0;
    Graph[5][2] = 2;
    Graph[5][3] = 0;
    Graph[5][4] = 3;
    Graph[5][5] = 0;
    Graph[5][6] = 0;
    kruskalAlgo();
    print();
}
```

---

## 9. Prims Algorithm

```c
#include <stdio.h>
int main()
{
    int cost[10][10], visited[10] = {0}, i, j, n, no_e = 1, min, a, b, min_cost = 0;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter cost in form of adjacency matrix:\n");
    // input graph
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            // cost is 0 then initialize it by maximum value
            if (cost[i][j] == 0)
                cost[i][j] = 1000;
        }
    }
    // logic for finding minimum cost spanning tree
    visited[1] = 1; // visited first node
    while (no_e < n)
    {
        min = 1000;
        // in each cycle find minimum cost
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (cost[i][j] < min)
                {
                    if (visited[i] != 0)
                    {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        // if node is not visited
        if (visited[b] == 0)
        {
            printf("\n%d to %d cost=%d", a, b, min);
            min_cost = min_cost + min;
            no_e++;
        }
        visited[b] = 1;
        // initialize with maximum value you can also use any other value  cost[a][b]=cost[b][a]=1000;
    }
    printf("\n\mMinimum weight is: %d", min_cost);
    return 0;
}

```

---

## 10. Dijkstra Algorithm

```c
#include <stdio.h>
#include <conio.h>
#define INFINITY 9999
#define MAX 10
void dijkstra(int G[MAX][MAX], int n, int startnode);
int main()
{
    int G[MAX][MAX], i, j, n, u;
    printf("Enter no. of vertices:");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &G[i][j]);
    printf("\nEnter the starting node:");
    scanf("%d", &u);
    dijkstra(G, n, u);
    getch();
    return 0;
}
void dijkstra(int G[MAX][MAX], int n, int startnode)
{
    int cost[MAX][MAX], distance[MAX], pred[MAX];
    int visited[MAX], count, mindistance, nextnode, i, j;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
        {
            if (G[i][j] == 0)
                cost[i][j] = INFINITY;
            else
                cost[i][j] = G[i][j];
        }
    // initialize pred[],distance[] and visited[]
    for (i = 0; i < n; i++)
    {
        distance[i] = cost[startnode][i];
        pred[i] = startnode;
        visited[i] = 0;
    }
    distance[startnode] = 0;
    visited[startnode] = 1;
    count = 1;
    while (count < n - 1)
    {
        mindistance = INFINITY;
        // nextnode gives the node at minimum distance  for(i=0;i<n;i++)
        if (distance[i] < mindistance && !visited[i])
        {
            mindistance = distance[i];
            nextnode = i;
        }
        // check if a better path exists through nextnode  visited[nextnode]=1;
        for (i = 0; i < n; i++)
            if (!visited[i])

                if (mindistance + cost[nextnode][i] < distance[i])
                {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
        count++;
    }
    // print the path and distance of each node
    for (i = 0; i < n; i++)
        if (i != startnode)
        {
            printf("\nDistance of node%d=%d", i, distance[i]);
            printf("\nPath=%d", i);
            j = i;
            do
            {
                j = pred[j];
                printf("<-%d", j);
            } while (j != startnode);
        }
}

```

---

## 11. Warshall’s Algorithm 

```c
#include <stdio.h>
    int
    min(int, int);
void floyds(int p[10][10], int n)
{
    int i, j, k;
    for (k = 1; k <= n; k++)
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (i == j)
                    p[i][j] = 0;
                else
                    p[i][j] = min(p[i][j], p[i][k] + p[k][j]);
}
int min(int a, int b)
{
    if (a < b)
        return (a);
    else
        return (b);
}
void main()
{
    int p[10][10], w, n, e, u, v, i, j;
    ;
    printf("\n Enter the number of vertices:");
    scanf("%d", &n);
    printf("\n Enter the number of edges:\n");
    scanf("%d", &e);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            p[i][j] = 999;
    }
    for (i = 1; i <= e; i++)
    {
        printf("\n Enter the end vertices of edge%d with its weight \n", i);
        scanf("%d%d%d", &u, &v, &w);
        p[u][v] = w;
    }
    printf("\n Matrix of input data:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%d \t", p[i][j]);
        printf("\n");
    }
    floyds(p, n);
    printf("\n Transitive closure:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("%d \t", p[i][j]);
        printf("\n");
    }
    printf("\n The shortest paths are:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
        {
            if (i != j)
                printf("\n <%d,%d>=%d", i, j, p[i][j]);
        }
}

```

---

## 12. Graph Traversing

```c
#include <stdio.h>
#include <stdlib.h>
#define SIZE 40
struct queue
{
    int items[SIZE];
    int front;
    int rear;
};
struct queue *createQueue();
void enqueue(struct queue *q, int);
int dequeue(struct queue *q);
void display(struct queue *q);
int isEmpty(struct queue *q);
void printQueue(struct queue *q);
struct node
{
    int vertex;
    struct node *next;
};
struct node *createNode(int);
struct Graph
{
    int numVertices;
    struct node **adjLists;
    int *visited;
};
// BFS algorithm
void bfs(struct Graph *graph, int startVertex)
{
    struct queue *q = createQueue();
    graph->visited[startVertex] = 1;
    enqueue(q, startVertex);
    while (!isEmpty(q))
    {
        printQueue(q);
        int currentVertex = dequeue(q);
        printf("Visited %d\n", currentVertex);
        struct node *temp = graph->adjLists[currentVertex];
        while (temp)
        {
            int adjVertex = temp->vertex;
            if (graph->visited[adjVertex] == 0)
            {
                graph->visited[adjVertex] = 1;
                enqueue(q, adjVertex);
            }
            temp = temp->next;
        }
    }
}
// Creating a node
struct node *createNode(int v)
{
    struct node *newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}
// Creating a graph
struct Graph *createGraph(int vertices)
{
    struct Graph *graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;
    graph->adjLists = malloc(vertices * sizeof(struct node *));
    graph->visited = malloc(vertices * sizeof(int));
    int i;
    for (i = 0; i < vertices; i++)
    {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }
    return graph;
}
void addEdge(struct Graph *graph, int src, int dest)
{
    struct node *newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;
    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}
struct queue *createQueue()
{
    struct queue *q = malloc(sizeof(struct queue));
    q->front = -1;
    q->rear = -1;
    return q;
}
int isEmpty(struct queue *q)
{
    if (q->rear == -1)
        return 1;
    else
        return 0;
}
void enqueue(struct queue *q, int value)
{
    if (q->rear == SIZE - 1)
        printf("\nQueue is Full!!");
    else
    {
        if (q->front == -1)
            q->front = 0;
        q->rear++;
        q->items[q->rear] = value;
    }
}
int dequeue(struct queue *q)
{
    int item;
    if (isEmpty(q))
    {
        printf("Queue is empty");
        item = -1;
    }
    else
    {
        item = q->items[q->front];
        q->front++;
        if (q->front > q->rear)
        {
            printf("Resetting queue ");
            q->front = q->rear = -1;
        }
    }
    return item;
}
void printQueue(struct queue *q)
{
    int i = q->front;
    if (isEmpty(q))
    {
        printf("Queue is empty");
    }
    else
    {
        printf("\nQueue contains \n");
        for (i = q->front; i < q->rear + 1; i++)
        {
            printf("%d ", q->items[i]);
        }
    }
}
int main()
{
    struct Graph *graph = createGraph(6);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 4);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 4);
    bfs(graph, 0);
    return 0;
}

```

---

## 13. Min-Max Algorithm

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int A[10], n, max, min;
float comp;
void minmax(int, int);
int main()
{
    int i;
    printf("Enter list size:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter Element %d:", i);
        scanf("%d", &A[i]);
    }
    max = A[0];
    min = A[0];
    minmax(0, n - 1);
    printf("\n\n Maximum Number:- %d", max);
    printf("\n\n Minimun Number:- %d\n", min);
    comp = ((3 * n) / 2) - 2;
    printf("Time complexity of the given algorithm is=%f\n", ceil(comp)); // ceil returns the  smallest integer value greater than or equal to x
    return 0;
}
void minmax(int i, int j)
{
    int max1, min1, mid;
    if (i == j) // List contains only one element
    {
        max = A[i];
        min = A[i];
    }
    else if (i == j - 1) // List contains only two elements
    {
        if (A[i] < A[j])
        {
            min = A[i];
            max = A[j];
        }
        else
        {
            min = A[j];
            max = A[i];
        }
    }
    else
    {                   // List contains more than 2 elements  mid = (i + j)/2;
        minmax(i, mid); // solve left sub problem  max1 = max;
        min1 = min;
        minmax(mid + 1, j); // solve right sub problem  if (max < max1)
        {
            max = max1;
        }
        if (min > min1)
        {
            min = min1;
        }
    }
}

```

---
 
## 14. Travelling Salesman Problem

```c
#include <stdio.h>
int ary[10][10], completed[10], n, cost = 0;
void takeInput()
{
    int i, j;
    printf("Enter the number of villages: ");
    scanf("%d", &n);
    printf("\nEnter the Cost Matrix\n");
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Elements of Row: %d\n", i + 1);
        for (j = 0; j < n; j++)
            scanf("%d", &ary[i][j]);
        completed[i] = 0;
    }
    printf("\n\nThe cost list is:");
    for (i = 0; i < n; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("\t%d", ary[i][j]);
    }
}
void mincost(int city)
{
    int i, ncity;
    completed[city] = 1;
    printf("%d--->", city + 1);
    ncity = least(city);
    if (ncity == 999)
    {
        ncity = 0;
        printf("%d", ncity + 1);
        cost += ary[city][ncity];
        return;
    }
    mincost(ncity);
}
int least(int c)
{
    int i, nc = 999;
    int min = 999, kmin;
    for (i = 0; i < n; i++)
    {
        if ((ary[c][i] != 0) && (completed[i] == 0))
            if (ary[c][i] + ary[i][c] < min)
            {
                min = ary[i][0] + ary[c][i];
                kmin = ary[c][i];
                nc = i;
            }
    }
    if (min != 999)
        cost += kmin;
    return nc;
}
int main()
{
    takeInput();
    printf("\n\nThe Path is:\n");
    mincost(0); // passing 0 because starting vertex  printf("\n\nMinimum cost is %d\n ",cost);
    return 0;
}

```

---
