#ifndef VISITOR_H
#define VISITOR_H
#include "ast.h"

ast_T* visitor_visit(ast_T* node);

ast_T* visitor_visit_variable_definition(ast_T* node);

ast_T* visitor_visit_variable(ast_T* node);

ast_T* visitor_visit_string(ast_T* node);

ast_T* visitor_visit_compound(ast_T* node);
 
#endif
