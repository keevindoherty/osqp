#include <catch2/catch.hpp>

#include "osqp_api.h"    /* OSQP API wrapper (public + some private) */
#include "osqp_tester.h" /* Tester helpers */
#include "test_utils.h"  /* Testing Helper functions */


#include "primal_infeasibility_data.h"


TEST_CASE_METHOD(OSQPTestFixture, "Primal infeasibility", "[solve],[infeasible]")
{
  OSQPInt exitflag;

  // Problem data
  primal_infeasibility_problem_ptr   data{generate_problem_primal_infeasibility()};
  primal_infeasibility_sols_data_ptr sols_data{generate_problem_primal_infeasibility_sols_data()};

  // Define Solver settings
  settings->max_iter      = 10000;
  settings->alpha         = 1.6;
  settings->polishing     = 1;
  settings->scaling       = 0;
  settings->verbose       = 1;
  settings->warm_starting = 0;

  /* Test all possible linear system solvers in this test case */
  settings->linsys_solver = GENERATE(filter(&isLinsysSupported, values({OSQP_DIRECT_SOLVER, OSQP_INDIRECT_SOLVER})));

  CAPTURE(settings->linsys_solver);

  // Setup workspace
  exitflag = osqp_setup(&tmpSolver, data->P, data->q,
                        data->A, data->l, data->u,
                        data->m, data->n, settings.get());
  solver.reset(tmpSolver);

  // Setup correct
  mu_assert("Primal infeasible QP test solve: Setup error!",
             exitflag == OSQP_NO_ERROR);

  // Solve Problem
  osqp_solve(solver.get());

  // Compare solver statuses
  mu_assert("Primal infeasible QP test solve: Error in solver status!",
            solver->info->status_val == sols_data->status_test);
}
