/** 
* @file election_operations.h
*
*/
#ifndef __ELECTION_OPERATIONS_H__
#define __ELECTION_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

/**
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int forvote(int operand1, int operand2);

/**
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int newcandidate(int operand1, int operand2);

/**
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int listofvoters(int operand1, int operand2);


/** 
* @param[in] operand1 
* @param[in] operand2 
*/
int livecount(int operand1, int operand2);

/** 
* @param[in] operand1 
* @param[in] operand2 
*/
int listofcandidates(int operand1, int operand2);

#endif  /* #define __ELECTION_OPERATIONS_H__ */
