/********
* ec2c version 0.67
* c file generated for node : JAFTER 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _JAFTER_EC2C_SRC_FILE
#include "JAFTER.h"
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
   _boolean M5;
   _boolean M5_nil;
   _boolean M2;
} JAFTER_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void JAFTER_I_x(JAFTER_ctx* ctx, _boolean V){
   ctx->_x = V;
}
extern void JAFTER_O_y(void* cdata, _boolean);
#ifdef CKCHECK
extern void JAFTER_BOT_y(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void JAFTER_reset_input(JAFTER_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void JAFTER_reset(JAFTER_ctx* ctx){
   ctx->M5_nil = _true;
   ctx->M2 = _true;
   JAFTER_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void JAFTER_copy_ctx(JAFTER_ctx* dest, JAFTER_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(JAFTER_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
JAFTER_ctx* JAFTER_new_ctx(void* cdata){
   JAFTER_ctx* ctx = (JAFTER_ctx*)calloc(1, sizeof(JAFTER_ctx));
   ctx->client_data = cdata;
   JAFTER_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void JAFTER_step(JAFTER_ctx* ctx){
//LOCAL VARIABLES
   _boolean L1;
   _boolean T5;
//CODE
   if (ctx->M2) {
      L1 = _false;
   } else {
      L1 = ctx->M5;
   }
   JAFTER_O_y(ctx->client_data, L1);
   T5 = ctx->_x;
   ctx->M5 = T5;
   ctx->M5_nil = _false;
   ctx->M2 = ctx->M2 && !(_true);
}
