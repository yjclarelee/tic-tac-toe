#include <iostream>
#include <cstdio>
#include <cstring>

int user0_x, user0_y, user1_x, user1_y = -1;
char array[3][3] = {NULL};
int user = 0;

void get_input_x(int user);
void get_input_y(int user);
void save_input();
bool check_tick_tac_toe();
void print_board();

int main(){
  while(1){
    print_board();
    get_input_x(user);
    get_input_y(user);
    save_input();
    if(check_tick_tac_toe())
      break;
    user = (!user);
  }
  print_board();
  if(user == 0)
    std::cout << "User 0 has won!\n";
  else
    std::cout << "User 1 has won!\n";
}

/*bool check_tick_tac_toe(){
  std::cout << "In tick-tack-toe\n";
  //for vertical cases
  for(int i = 0; i < 3; i++){
    if((array[i][0] == array[i][1] == array[i][2]))
      return true;
    if(array[i][0] == array[i][1] == array[i][2])
      return true;
  }
  //for horizontal cases
  for(int j = 0; j < 3; j++){
    if(array[0][j] == array[1][j] == array[2][j])

      return true;
    if(array[0][j] == array[1][j] == array[2][j])
      return true;
  }
  //for diagnal cases
  if(array[0][0] == array[1][1] == array[2][2])
    return true;
  if(array[0][2] == array[1][1] == array[2][0])
    return true;

  return false;
 }
*/

bool check_tick_tac_toe(){
  //for vertical cases
  for(int i = 0; i < 3; i++){
    if((strcmp(array[i][0],array[i][1]) == 0) && (strcmp(array[i][1], array[i][2]) == 0))
      return true;
  }
  //for horizontal cases
  for(int j = 0; j < 3; j++){
    if((strcmp(array[0][j],array[1][j]) == 0) && (strcmp(array[1][j], array[2][j]) == 0))
      return true;
  }
  //for diagnal cases
  if((strcmp(array[0][0],array[1][1]) == 0) && (strcmp(array[1][1], array[2][2]) == 0))
    return true;
  if((strcmp(array[0][2],array[1][1]) == 0) && (strcmp(array[1][1], array[2][0]) == 0))
  if(array[0][2] == array[1][1] == array[2][0])
    return true;

  return false;
 }
