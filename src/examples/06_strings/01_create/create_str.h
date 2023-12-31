//h
#include<iostream>
#include<string>
#include<vector>
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H


class TicTacToe
{
public:
    TicTacToe();
   // TicTacToe(int size);
    TicTacToe(int size) : pegs(size*size, " "){}; //this will initialize pegs (vector) to size * size of " "
    
    bool game_over();
    void start_game(std::string first_player);
    void mark_board(int position);
    std::string get_player() const{return player;}
    void display_board(int size) const;
    std::string get_winner();

    
protected:
    std::vector<std::string> pegs;
    virtual bool check_column_win();    // if marked values 1,4,7 or 2,5,8 or 3,6,9 with all Os or Xs
    virtual bool check_row_win();       // if marked values 1,2,3 or 4,5,6 or 7,8,9 with all Os or Xs
    virtual bool check_diagonal_win();  // if marked values 1,5,9 or 7,5,3 with all Os or Xs

private: 
    void set_winner();
    void set_next_player();
    bool check_board_full();
    void clear_board();

    std::string player;
//    std::vector<std::string> pegs{9, " "};
    std::string winner;


};

#endif 