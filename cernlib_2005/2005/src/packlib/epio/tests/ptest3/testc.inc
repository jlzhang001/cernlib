*
* $Id: testc.inc,v 1.1.1.1 1996/03/08 15:21:46 mclareni Exp $
*
* $Log: testc.inc,v $
* Revision 1.1.1.1  1996/03/08 15:21:46  mclareni
* Epio
*
*
*
* testc.inc
*
#if !defined(CERNLIB_ND100B16)
      COMMON//NWOUT,NREC,IERR,NH,NPASS,ILWORD,ISPAN,IPAD,JREC,
     +        NWPR1,NWPR2,NWPR3,NWPR4,
     1 NBIT,ICALL,JWORD,IBUF11(1000),IBUF12(1000),IBUF13(1000),
     2 IDAT(2000),IPAC(2000),IH(10)
      COMMON/EPDBGC/DBUGFL
      LOGICAL DBUGFL
#endif