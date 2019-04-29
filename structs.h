#ifndef STRUCTS
#define  STRUCTS

#include <stdlib.h>

/*
    frame_t struct definindo um quadro CAN2.0A.
    atributos:
     id         = Ident. do quadro CAN <0..2047>.
     cycle_time = tempo de uma nova 'msg' ser escrita no barramento <'-1' para msg não ciclicas>.
     payload    = Numero natural que define quantos Bytes o quadro possui <1..8>.

*/

typedef struct{

  u_int16_t id;
  u_int16_t cycle_time;
  u_int8_t  payload;

}frame_t;

/*
    event_t struct de msg querendo acessar o barramento com seus tempos.
    atributos:
     frame        = frame a ser escrito no barramento.
     time_current = tempo de solicitação para escrita no barramento.
     time_happen  = tempo que podera ser escrito se ganhar na arbitragem nesse momento.

*/

typedef struct{

  frame_t   frame;
  u_int32_t time_current;
  u_int32_t time_happen;

}event_t;


#endif