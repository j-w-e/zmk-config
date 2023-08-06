#define NAV 1
#define NUM 2
#define SYM 3
#define WMM 4

#define MUTE &kp C_MUTE
#define REPEAT &key_repeat

#define __THUMBS__ &mo NUM &kp SPACE &mo NAV &sl SYM &kp E &mo WMM
#define __CALLUM_R__ &skq LCTRL  &skq LALT &skq LGUI &skq LSHFT
#define __CALLUM_L__ &skq LSHFT  &skq LGUI &skq LALT &skq LCTRL


#define __APTMAK_L1__ &kp MINUS &kp W     &kp F     &kp P     &kp B
#define __APTMAK_L2__ &kp R     &kp S     &kp T     &kp H     &kp RET
#define __APTMAK_L3__ REPEAT    &kp C     &kp G     &kp D     &kp K

#define __APTMAK_R1__ &kp J     &kp L     &kp U     &kp Y     &kp SQT
#define __APTMAK_R2__ &bspc_del &kp N     &kp A     &kp I     &kp O
#define __APTMAK_R3__ &kp V     &kp M     &comma    &dot      &kp FSLH


#define __NAV____L1__ &kp LG(Z) &kp LG(X) &kp LG(C) &kp LG(V)  &kp LG(Y)
#define __NAV____L2__ __CALLUM_L__                             &kp RET
#define __NAV____L3__ &none     &none     &kp ESC   &kp TAB    &none   // Need to add the swapper

#define __NAV____R1__ &none     &none     &none     &none     &none    // Add back the LA(arrows)?
#define __NAV____R2__ &kp BSPC  &kp LEFT  &kp DOWN  &kp UP    &kp RIGHT
#define __NAV____R3__ &none     &none     &none     &none     &none    // Add back the LG(arrows)?


#define __NUM____L1__ &kp E      &none     &none     &none     &none   // Need to think about what goes here
#define __NUM____L2__ __CALLUM_L__                             &kp RET
#define __NUM____L3__ &kp LS(LG(TAB)) &kp LG(TAB) &kp ESC &kp TAB &none // Need to think about what goes on inner index key

#define __NUM____R1__ &kp MINUS  &kp N7    &kp N8    &kp N9    &kp EQUAL
#define __NUM____R2__ &bspc_del  &kp N4    &kp N5    &kp N6    &kp N0
#define __NUM____R3__ &dot       &kp N1    &kp N2    &kp N3    &kp PLUS


#define __SYM____L1__ &kp LT     &kp LBRC  &kp LPAR  &kp LBKT  &none   // Need to think about what goes on inner index key
#define __SYM____L2__ &kp POUND  &kp ASTRK &kp EXCL  &kp QMARK &none   // Need to think about what goes on inner index key
#define __SYM____L3__ &kp PRCNT  &kp AT    &kp DLLR  &kp AMPS  &kp GRAVE

#define __SYM____R1__ &none      &kp RBKT  &kp RPAR  &kp RBRC  &kp RT  // Need to think about what goes on inner index key
#define __SYM____R2__ &none      __CALLUM_R__                          // Need to add macro for word delete
#define __SYM____R3__ &kp TILDE  &kp CARET &kp BSLH  &none     &none   // Need to add macros for NRC and M&E
