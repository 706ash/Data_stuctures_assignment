void insert_edge(struct Graph* graph, int src, int dest) {
  // Create a new node
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->dest = dest;
  new_node->next = NULL;

  // Add the new node to the adjacency list of the source vertex
  if (graph->adjList[src] == NULL) {
    graph->adjList[src] = new_node;
  } else {
    struct Node* temp = graph->adjList[src];
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = new_node;
  }
}
