/// \file
/// Interval Analysis

#ifndef CPROVER_ANALYSES_INTERVAL_ANALYSIS_H
#define CPROVER_ANALYSES_INTERVAL_ANALYSIS_H
#include <goto-programs/abstract-interpretation/interval_domain.h>
#include <goto-programs/goto_functions.h>

void interval_analysis(
  goto_functionst &goto_functions,
  const namespacet &ns,
  const optionst &options,
  ait<interval_domaint> &);

#endif // CPROVER_ANALYSES_INTERVAL_ANALYSIS_H
