/********
* ec2c version 0.67
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : SWITCH 
* to be used with : SWITCH.c 
********/
#ifndef _SWITCH_EC2C_H_FILE
#define _SWITCH_EC2C_H_FILE
/*-------- Predefined types ---------*/
#ifndef _EC2C_PREDEF_TYPES
#define _EC2C_PREDEF_TYPES
typedef int _boolean;
typedef int _integer;
typedef char* _string;
typedef double _real;
typedef double _double;
typedef float _float;
#define _false 0
#define _true 1
#endif
/*--------- Pragmas ----------------*/
//MODULE: SWITCH 3 1
//IN: _boolean orig
//IN: _boolean on
//IN: _boolean off
//OUT: _boolean state
#ifndef _SWITCH_EC2C_SRC_FILE
/*--------Context type -------------*/
struct SWITCH_ctx;
/*-------- Input procedures -------------*/
extern void SWITCH_I_orig(struct SWITCH_ctx* ctx, _boolean);
extern void SWITCH_I_on(struct SWITCH_ctx* ctx, _boolean);
extern void SWITCH_I_off(struct SWITCH_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void SWITCH_reset(struct SWITCH_ctx* ctx);
/*--------Context copy -------------*/
extern void SWITCH_copy_ctx(struct SWITCH_ctx* dest, struct SWITCH_ctx* src);
/*--------Context allocation --------*/
extern struct SWITCH_ctx* SWITCH_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void SWITCH_step(struct SWITCH_ctx* ctx);
#endif
#endif
