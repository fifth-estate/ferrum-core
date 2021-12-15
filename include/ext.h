#ifndef __FERRUM_CORE_EXT_H_INCLUDED__
#define __FERRUM_CORE_EXT_H_INCLUDED__


/**
 * Macro: _fe_nonull
 **/
#define _fe_nonull                                                              \
__attribute__((nonnull))


/**
 * Macro: _fe_hot
 **/
#define _fe_hot                                                                 \
__attribute__((hot))


/**
 * Macro: _fe_cold
 **/
#define _fe_cold                                                                \
__attribute__((cold))


/**
 * Macro: _fe_pure
 **/
#define _fe_pure                                                                \
__attribute__((pure))


/**
 * Macro: _fe_auto()
 **/
#define _fe_auto(_t)                                                            \
__attribute__((cleanup(_t##_free)))


/**
 * Macro: _fe_likely()
 **/
#define _fe_likely(_p)                                                          \
(__builtin_expect(!!(_p), 1))


/**
 * Macro: _fe_unlikely()
 **/
#define _fe_unlikely(_p)                                                        \
(__builtin_expect(!!(_p), 0))


/**
 * Macro: _fe_tlocal
 **/
#define _fe_tlocal                                                              \
__thread


#endif  /* __FERRUM_CORE_EXT_H_INCLUDED__ */

