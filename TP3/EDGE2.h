/********
* ec2c version 0.67
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : EDGE2 
* to be used with : EDGE2.c 
********/
#ifndef _EDGE2_EC2C_H_FILE
#define _EDGE2_EC2C_H_FILE
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
//MODULE: EDGE2 1 1
//IN: _boolean x
//OUT: _boolean y
#ifndef _EDGE2_EC2C_SRC_FILE
/*--------Context type -------------*/
struct EDGE2_ctx;
/*-------- Input procedures -------------*/
extern void EDGE2_I_x(struct EDGE2_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void EDGE2_reset(struct EDGE2_ctx* ctx);
/*--------Context copy -------------*/
extern void EDGE2_copy_ctx(struct EDGE2_ctx* dest, struct EDGE2_ctx* src);
/*--------Context allocation --------*/
extern struct EDGE2_ctx* EDGE2_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void EDGE2_step(struct EDGE2_ctx* ctx);
#endif
#endif
