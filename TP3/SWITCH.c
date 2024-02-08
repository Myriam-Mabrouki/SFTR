/********
* ec2c version 0.67
* c file generated for node : SWITCH 
* context   method = HEAP
* ext call  method = PROCEDURES
********/
#include <stdlib.h>
#include <string.h>
#define _SWITCH_EC2C_SRC_FILE
#include "SWITCH.h"
/*--------
Internal structure for the call
--------*/
typedef struct  {
   void* client_data;
   //INPUTS
   _boolean _orig;
   _boolean _on;
   _boolean _off;
   //OUTPUTS
   _boolean _state;
   //REGISTERS
   _boolean M9;
   _boolean M9_nil;
   _boolean M4;
} SWITCH_ctx;
/*--------
Output procedures must be defined,
Input procedures must be used:
--------*/
void SWITCH_I_orig(SWITCH_ctx* ctx, _boolean V){
   ctx->_orig = V;
}
void SWITCH_I_on(SWITCH_ctx* ctx, _boolean V){
   ctx->_on = V;
}
void SWITCH_I_off(SWITCH_ctx* ctx, _boolean V){
   ctx->_off = V;
}
extern void SWITCH_O_state(void* cdata, _boolean);
#ifdef CKCHECK
extern void SWITCH_BOT_state(void* cdata);
#endif
/*--------
Internal reset input procedure
--------*/
static void SWITCH_reset_input(SWITCH_ctx* ctx){
   //NOTHING FOR THIS VERSION...
}
/*--------
Reset procedure
--------*/
void SWITCH_reset(SWITCH_ctx* ctx){
   ctx->M9_nil = _true;
   ctx->M4 = _true;
   SWITCH_reset_input(ctx);
}
/*--------
Copy the value of an internal structure
--------*/
void SWITCH_copy_ctx(SWITCH_ctx* dest, SWITCH_ctx* src){
   memcpy((void*)dest, (void*)src, sizeof(SWITCH_ctx));
}
/*--------
Dynamic allocation of an internal structure
--------*/
SWITCH_ctx* SWITCH_new_ctx(void* cdata){
   SWITCH_ctx* ctx = (SWITCH_ctx*)calloc(1, sizeof(SWITCH_ctx));
   ctx->client_data = cdata;
   SWITCH_reset(ctx);
   return ctx;
}
/*--------
Step procedure
--------*/
void SWITCH_step(SWITCH_ctx* ctx){
//LOCAL VARIABLES
   _boolean L7;
   _boolean L6;
   _boolean L3;
   _boolean T9;
//CODE
   if (ctx->_off) {
      L7 = _false;
   } else {
      L7 = ctx->M9;
   }
   if (ctx->_on) {
      L6 = _true;
   } else {
      L6 = L7;
   }
   if (ctx->M4) {
      L3 = ctx->_orig;
   } else {
      L3 = L6;
   }
   SWITCH_O_state(ctx->client_data, L3);
   T9 = L3;
   ctx->M9 = T9;
   ctx->M9_nil = _false;
   ctx->M4 = ctx->M4 && !(_true);
}
