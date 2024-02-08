/********
* ec2c version 0.67
* context   method = HEAP
* ext call  method = PROCEDURES
* c header file generated for node : JAFTER 
* to be used with : JAFTER.c 
********/
#ifndef _JAFTER_EC2C_H_FILE
#define _JAFTER_EC2C_H_FILE
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
//MODULE: JAFTER 1 1
//IN: _boolean x
//OUT: _boolean y
#ifndef _JAFTER_EC2C_SRC_FILE
/*--------Context type -------------*/
struct JAFTER_ctx;
/*-------- Input procedures -------------*/
extern void JAFTER_I_x(struct JAFTER_ctx* ctx, _boolean);
/*-------- Reset procedure -----------*/
extern void JAFTER_reset(struct JAFTER_ctx* ctx);
/*--------Context copy -------------*/
extern void JAFTER_copy_ctx(struct JAFTER_ctx* dest, struct JAFTER_ctx* src);
/*--------Context allocation --------*/
extern struct JAFTER_ctx* JAFTER_new_ctx(void* client_data);
/*-------- Step procedure -----------*/
extern void JAFTER_step(struct JAFTER_ctx* ctx);
#endif
#endif
