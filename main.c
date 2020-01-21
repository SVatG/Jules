int main(char** argv, int argc){ int smpl,pw; void *dsp = fopen("/dev/dsp", "w"); for(pw=1;pw<80;pw++) { for(smpl=0;smpl<320;smpl++) { fputc(((smpl % 80) < pw) ? 60 : 30, dsp); } } }
