#include <systemc.h>
#include "NAND.h"
#include "TestBranch.h"

int sc_main(int, char**) {
  
  sc_signal<bool> a,b,f;
  sc_clock clk("Clk", 20, SC_NS);
  nand2 N2("Nand2");

  N2.A(a);
  N2.B(b);
  N2.F(f);

  testbranch tb1("tb");
  tb1.clk(clk);
  tb1.a(a);
  tb1.b(b);
  tb1.f(f);
  
  sc_start();
  
  return 0;
}


