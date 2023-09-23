/* UK characters
 * POUND is     £
 * NUBS is      § and ±
 * NUHS is      \ and |
 * HASH is      £ and £
 * PIPE is      | and |
 * PIPE2 is     ± and ±
 * */
#define NAV 1
#define NUM 2
#define SYM 3
#define WMM 4

#define HSH RA(N3)
#define SILCROW RA(N6)

#define Y_ZOOM &kp LC(LA(LG(Y)))
#define Y_WARP_L &kp LC(LA(LG(U)))
#define Y_WARP_D &kp LC(LA(LG(I)))
#define Y_WARP_U &kp LC(LA(LG(O)))
#define Y_WARP_R &kp LC(LA(LG(P)))
#define Y_TOGGL &kp LC(LA(LG(M)))
#define Y_SPC_L &kp LC(LEFT)
#define Y_APPWIN &kp LC(DOWN)
#define Y_M_CTL &kp LC(UP)
#define Y_SPC_R &kp LC(RIGHT)
#define Y_CENTRE &kp LC(LA(LG(H)))
#define Y_WIN_L &kp LC(LA(LG(J)))
#define Y_WIN_D &kp LC(LA(LG(K)))
#define Y_WIN_U &kp LC(LA(LG(L)))
#define Y_WIN_R &kp LC(LA(LG(SEMI)))

#define MUTE &kp C_MUTE
#define REPEAT &key_repeat

#define __THUMBS__ &mo NUM &kp SPACE &mo NAV &sl SYM &kp E &mo WMM
#define __CALLUM_L__ &skq LCTRL  &skq LALT &skq LGUI &skq LSHFT
#define __CALLUM_R__ &skq LSHFT  &skq LGUI &skq LALT &skq LCTRL


#define __APTMAK_L1__ &kp FSLH  &kp W     &kp F     &kp P     &kp B
#define __APTMAK_L2__ &kp R     &kp S     &kp T     &kp H     &kp RET
#define __APTMAK_L3__ REPEAT    &kp C     &kp G     &kp D     &kp K

#define __APTMAK_R1__ &kp J     &kp L     &kp U     &kp Y     &kp SQT
#define __APTMAK_R2__ &bspc_del &kp N     &kp A     &kp I     &kp O
#define __APTMAK_R3__ &kp V     &kp M     &comma    &dot      &kp MINUS


#define __NAV____L1__ &kp LG(Z) &kp LG(X) &kp LG(C) &kp LG(V)  &kp LG(Y)
#define __NAV____L2__ __CALLUM_L__                             &kp RET
#define __NAV____L3__ &swap     &swap_app &kp ESC   &kp TAB    &none   // Need to add the swapper

#define __NAV____R1__ &none     &none     &none     &none     &none    // Add back the LA(arrows)?
#define __NAV____R2__ &kp BSPC  &kp LEFT  &kp DOWN  &kp UP    &kp RIGHT
#define __NAV____R3__ &none     &none     &none     &none     &none    // Add back the LG(arrows)?


#define __NUM____L1__ &kp E      &none     &kp PIPE  &kp SILCROW &kp SPACE   // Need to think about what goes here
#define __NUM____L2__ __CALLUM_L__                             &kp RET
#define __NUM____L3__ &kp LS(LC(TAB)) &kp LC(TAB) &kp ESC &kp TAB &comma

#define __NUM____R1__ &kp MINUS  &kp N7    &kp N8    &kp N9    &kp EQUAL
#define __NUM____R2__ &bspc_del  &kp N4    &kp N5    &kp N6    &kp N0
#define __NUM____R3__ &dot       &kp N1    &kp N2    &kp N3    &kp PLUS


#define __SYM____L1__ &kp LT     &kp LBRC  &kp LPAR  &kp LBKT  &none   // Need to think about what goes on inner index key
#define __SYM____L2__ &kp HSH    &kp ASTRK &kp EXCL  &kp QMARK &none   // Need to think about what goes on inner index key
#define __SYM____L3__ &kp PRCNT  &kp AT    &kp DLLR  &kp AMPS  &kp GRAVE

#define __SYM____R1__ &kp BSLH   &kp RBKT  &kp RPAR  &kp RBRC  &kp GT  // Need to think about what goes on inner index key
#define __SYM____R2__ &kp LA(BSPC)      __CALLUM_R__                          // Need to add macro for word delete
#define __SYM____R3__ &kp TILDE  &kp CARET &leader   &nrc      &mne


#define __WMM____L1__ &mmv MOVE_LEFT &mmv MOVE_UP &mmv MOVE_DOWN &mmv MOVE_RIGHT &mwh SCROLL_UP
#define __WMM____L2__ __CALLUM_L__                             &mkp LCLK
#define __WMM____L3__ &none       &none        &none        &none        &none

#define __WMM____R1__ Y_ZOOM   Y_WARP_L  Y_WARP_D    Y_WARP_U   Y_WARP_R
#define __WMM____R2__ Y_TOGGL  Y_SPC_L   Y_APPWIN    Y_M_CTL    Y_SPC_R
#define __WMM____R3__ Y_CENTRE Y_WIN_L   Y_WIN_D     Y_WIN_U    Y_WIN_R

#define __SET____L1__ &bt BT_CLR  &none        &none        &none        &bootloader
#define __SET____L2__ __CALLUM_L__                                       &lock
#define __SET____L3__ &bt BT_SEL 0 &bt BT_SEL 1 &bt BT_SEL 2 &out OUT_TOG &none

#define __SET____R1__ &bootloader &kp F7   &kp F8    &kp F9    &kp F12
#define __SET____R2__ &lock       &kp F4   &kp F5    &kp F6    &kp F11
#define __SET____R3__ &none       &kp F1   &kp F2    &kp F3    &kp F10
