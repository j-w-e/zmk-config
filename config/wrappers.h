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


#define __NAV____R1__ &kp LG(Z) &kp LG(X) &kp LG(C) &kp LG(V)  &kp LG(Y)
#define __NAV____R2__ __CALLUM_R__                             &kp RET
#define __NAV____R3__ &none     &none     &kp ESC   &kp TAB    &none

#define __NAV____L1__ &none     &none     &none     &none     &none
#define __NAV____L2__ &kp BSPC  &kp LEFT  &kp DOWN  &kp UP    &kp RIGHT
#define __NAV____L3__ &none     &none     &none     &none     &none
