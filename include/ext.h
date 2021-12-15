#ifndef __FERRUM_CORE_EXT_H_INCLUDED__
#define __FERRUM_CORE_EXT_H_INCLUDED__


#define _fe_auto(_t)                                                            \
__attribute__((cleanup(_t##_free)))


#define _fe_nonull                                                              \
__attribute__((nonnull))


#define _fe_hot                                                                 \
__attribute__((hot))


#define _fe_cold                                                                \
__attribute__((cold))


#define _fe_pure                                                                \
__attribute__((pure))


#define _fe_likely(_p)                                                          \
(__builtin_expect(!!(_p), 1))


#define _fe_unlikely(_p)                                                        \
(__builtin_expect(!!(_p), 0))


#define _fe_tlocal                                                              \
__thread


#endif  /* __FERRUM_CORE_EXT_H_INCLUDED__ */

