typedef int	data_t;
extern "C" {void fir(data_t *y, data_t x);}

void firI1(data_t *y, data_t x) { fir(y,x);}
void firQ1(data_t *y, data_t x) { fir(y,x);}
void firI2(data_t *y, data_t x) { fir(y,x);}
void firQ2(data_t *y, data_t x) { fir(y,x);}

void complexFIR(data_t Iin, data_t Qin, data_t *Iout, data_t *Qout) {

  data_t IinIfir, QinQfir, QinIfir, IinQfir;

  firI1(&IinIfir, Iin);
  firQ1(&QinQfir, Qin);
  firI2(&QinIfir, Qin);
  firQ2(&IinQfir, Iin);

  *Iout = IinIfir + QinQfir;
  *Qout = QinIfir - IinQfir;
}
