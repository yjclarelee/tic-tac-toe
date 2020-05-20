#include <iostream>
#include <cstdio>
#include <cstring>

int user0_x, user0_y, user1_x, user1_y = -1;
char array[3][3] = {NULL};
int user = 0;

void get_input(int user);
void save_input();
bool check_tick_tac_toe();
void print_board();
void result_message();

int main(){
  while(1){
    print_board();
    get_input(user);
    save_input();
    if(check_tick_tac_toe())
      break;
    user = (!user);
  }
  print_board();
  result_message();
}

void print_board(){
   for(int i = 0; i < 3; i++){
    std::cout <<"|";
     for(int j = 0; j < 3; j++){
      std::cout << array[i][j] << "|";
     }
     std::cout << "\n";
   }
 }

void get_input(int user){
  if(!user){
    std::cout << "Please input the x coordinate for user 0: ";
    user0_x = getchar();
    getchar();
    std::cout << "Please input the y coordinate for user 0: ";
    user0_y = getchar();
    getchar(); 
  }
  else{
    std::cout << "Please input the x coordinate for user 1: ";
    user0_x = getchar();
    getchar();
    std::cout << "Please input the y coordinate for user 1: ";
    user0_y = getchar();
    getchar(); 
  }
}

void save_input(){
 if(!user)
  array[user0_x][user0_y] = 'O';
 else
  array[user1_x][user1_y] = 'X';   
}

bool check_tick_tac_toe(){
  //for vertical cases
  for(int i = 0; i < 3; i++){
    if((array[i][0] == array[i][1]) && (array[i][1] == array[i][2]))
      return true;
  }
  //for horizontal cases
  for(int j = 0; j < 3; j++){
    if((array[0][j] == array[1][j]) && (array[1][j] == array[2][j]))
      return true;
  }
  //for diagnal cases
  if((array[0][0] == array[1][1]) && (array[1][1] == array[2][2]))
    return true;
  if((array[0][2] == array[1][1]) && (array[1][1] == array[2][0]))
    return true;

  return false;
}

void result_message(){
  if(user == 0)
    std::cout << "User 0 has won!\n";
  else
    std::cout << "User 1 has won!\n";
}
