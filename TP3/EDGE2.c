/********
* ec2c version 0.67
* c file generated for node : EDGE2 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _EDGE2_EC2C_SRC_FILE
#include "EDGE2.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _x;
   //OUTPUTS
   _boolean _y;
   //REGISTERS
   _boolean M7;
   _boolean M7_nil;
   _boolean M2;
} EDGE2_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void EDGE2_I_x(EDGE2_ctx* ctx, _boolean V){
   ctx->_x = V;
}
extern void EDGE2_O_y(void* cdata, _boolean);
#ifdef CKCHECK
extern void EDGE2_BOT_y(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void EDGE2_reset_input(EDGE2_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void EDGE2_reset(EDGE2_ctx* ctx){
   ctx->M7_nil = _true;
   ctx->M2 = _true;
   EDGE2_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void EDGE2_copy_ctx(EDGE2_ctx* dest, EDGE2_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(EDGE2_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
EDGE2_ctx* EDGE2_new_ctx(void* cdata){
   EDGE2_ctx* ctx = (EDGE2_ctx*)calloc(1, sizeof(EDGE2_ctx));
   ctx->client_data = cdata;
   EDGE2_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void EDGE2_step(EDGE2_ctx* ctx){
//LOCAL VARIABLES
   _boolean L6;
   _boolean L8;
   _boolean L9;
   _boolean L5;
   _boolean L1;
   _boolean T7;
//CODE
   if (ctx->M2) {
      L6 = _false;
   } else {
      L6 = ctx->M7;
   }
   if (ctx->_x) {
      L8 = _false;
   } else {
      L8 = _true;
   }
   if (ctx->_x) {
      L9 = _true;
   } else {
      L9 = _false;
   }
   if (L6) {
      L5 = L8;
   } else {
      L5 = L9;
   }
   if (ctx->M2) {
      L1 = _false;
   } else {
      L1 = L5;
   }
   EDGE2_O_y(ctx->client_data, L1);
   T7 = ctx->_x;
   ctx->M7 = T7;
   ctx->M7_nil = _false;
   ctx->M2 = ctx->M2 && !(_true);
}
