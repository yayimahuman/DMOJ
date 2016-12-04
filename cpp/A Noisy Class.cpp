#include <iostream>
#include <string>
using namespace std;

int main(){
    int students;
    int connections;
    bool inEdges = false;
    bool running = true;
    cin >> students;
    cin >> connections;

    int edges[connections][2];
    int noisy[students];

    for (int i = 0; i < connections; i++){
        cin >> edges[i][0];
        cin >> edges[i][1];
    }
    for (int i = 0; i < students; i++){
        noisy[i] = i + 1;
    }


    //trim nodes
    //compare noisy[i] to edges[i][1]; if not present, delete them from edges[i][0]
    while (running){
        running = false;
        for (int i = 0; i < students; i++){
            if (noisy[i] != -1){

                for (int j = 0; j < connections; j++){
                    if (edges[j][1] == noisy[i]){
                        inEdges = true;
                        j = connections;
                    }
                }
                if (!inEdges){
                    running = true;
                    //remove edges
                    for (int j = 0; j < connections; j++){
                        if (edges[j][0] == noisy[i]){
                            edges[j][0] = 0;
                            edges[j][1] = 0;
                        }
                    }
                    noisy[i] = -1;
                }
                inEdges = false;

            }
        }
    }

    for (int i = 0; i < students; i++){
        if (noisy[i] != -1){
            cout << "N" <<endl;
            i = students;
        }
        else if (i + 1 == students){
            cout << "Y" <<endl;
        }
    }


}
