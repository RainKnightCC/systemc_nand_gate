#ifndef _TESTBRANCH_H
#define _TESTBRANCH_H

SC_MODULE(testbranch) {

  sc_out<bool> a,b;
  sc_in<bool> f;
  sc_in_clk clk;

  void gen_input() {
    wait();a=0;b=0;
    wait();a=0;b=1;
    wait();a=1;b=0;
    wait();a=1;b=1;
    wait(100);
  }

  void display_variable() {
    cout<<"a="<<a<<",b="<<b<<",f="<<f<<endl;
  }

  SC_CTOR(testbranch) {
    SC_CTHREAD(gen_input, clk.pos());
    SC_METHOD(display_variable);
    sensitive<<f<<a<<b;
    dont_initialize();
  }

};




#endif
