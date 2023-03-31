//
// Created by Olcay Taner YILDIZ on 31.03.2023.
//
#include<string>
#include <iostream>
#include "Queue.h"

using namespace std;

string dartGame(int* board, int boardSize, int target){
    Queue k = Queue(10000);
    State s;
    s = State(0, "");
    k.enqueue(Element(s));
    while (!k.isEmpty()){
        s = k.dequeue().getData();
        if (s.getTotal() == target){
            return s.getDarts();
        }
        for (int i = 0; i < boardSize; i++){
            if (s.getTotal() + board[i] <= target){
                int newTotal = s.getTotal() + board[i];
                string newDarts = s.getDarts() + " " + to_string(board[i]);
                Element child = Element( State(newTotal, newDarts));
                k.enqueue(child);
            }
        }
    }
    return "";
}


int main(){
    int board[] = {11, 21, 27, 33, 36};
    cout << dartGame(board, 5, 100);
}