#ifndef __FERRUM_CORE_EXT_H_INCLUDED__
#define __FERRUM_CORE_EXT_H_INCLUDED__


/**
 * ^ _fe_cold: Marks function as cold
 **/
#define _fe_cold                                                                \
__attribute__((cold))


/**
 * ^ _fe_hot: Marks function as hot
 **/
#define _fe_hot                                                                 \
__attribute__((hot))


/**
 * ^ _fe_nonull: Marks function as non-null
 **/
#define _fe_nonull                                                              \
__attribute__((nonnull))


/**
 * ^ _fe_pure: Marks function as pure
 **/
#define _fe_pure                                                                \
__attribute__((pure))


/**
 * ^ _fe_tlocal: Marks variable as thread-local
 **/
#define _fe_tlocal                                                              \
__thread


/**
 * ^ _fe_auto(): Marks pointer for automatic clean-up
 * > _t: pointer type
 **/
#define _fe_auto(_t)                                                            \
__attribute__((cleanup(_t##_free)))


/**
 * ^ _fe_likely(): Marks predicate as likely
 * > _p: predicate
 **/
#define _fe_likely(_p)                                                          \
(__builtin_expect(!!(_p), 1))


/**
 * ^ _fe_unlikely(): Marks predicate as unlikely
 * > _p: predicate
 **/
#define _fe_unlikely(_p)                                                        \
(__builtin_expect(!!(_p), 0))


#endif  /* __FERRUM_CORE_EXT_H_INCLUDED__ */

