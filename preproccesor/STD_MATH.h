#ifndef UTILS_H_
#define UTILS_H_

#define SET_BIT( X , BIT_NO) ( X |= (1<<BIT_NO))
#define CLEAR_BIT( Y , BIT_NO) ( Y &= ~(1<<BIT_NO))
#define GET_BIT( X , BIT_NO) (((X >>BIT_NO)) &1)
#define TOGGLE_BIT( Y , BIT_NO) (Y ^=(1<<BIT_NO))

#endif