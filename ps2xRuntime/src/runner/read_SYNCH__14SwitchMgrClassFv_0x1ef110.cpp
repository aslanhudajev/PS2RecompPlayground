#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: read_SYNCH__14SwitchMgrClassFv
// Address: 0x1ef110 - 0x1ef290
void read_SYNCH__14SwitchMgrClassFv_0x1ef110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("read_SYNCH__14SwitchMgrClassFv");


    ctx->pc = 0x1ef110u;

    // 0x1ef110: 0x27bdffa0
    ctx->pc = 0x1ef110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ef114: 0x7fbf0050
    ctx->pc = 0x1ef114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x1ef118: 0x7fb40040
    ctx->pc = 0x1ef118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ef11c: 0x7fb30030
    ctx->pc = 0x1ef11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ef120: 0x7fb20020
    ctx->pc = 0x1ef120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ef124: 0x7fb10010
    ctx->pc = 0x1ef124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef128: 0x7fb00000
    ctx->pc = 0x1ef128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef12c: 0x70808628
    ctx->pc = 0x1ef12cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ef130: 0x3c020050
    ctx->pc = 0x1ef130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ef134: 0xc07bccc
    ctx->pc = 0x1EF134u;
    SET_GPR_U32(ctx, 31, 0x1EF13Cu);
    ctx->pc = 0x1EF138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294958144));
    ctx->pc = 0x1EF330u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateOldVal__FP6SWDATA_0x1ef330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF13Cu; }
        else if (ctx->pc != 0x1EF13Cu) { ctx->pc = 0x1EF13Cu; }
    }
    if (ctx->pc != 0x1EF13Cu) { return; }
    ctx->pc = 0x1EF13Cu;
    // 0x1ef13c: 0x8e030000
    ctx->pc = 0x1ef13cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef140: 0x1060004b
    ctx->pc = 0x1EF140u;
    {
        const bool branch_taken_0x1ef140 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF144u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1ef140) {
            ctx->pc = 0x1EF270u;
            goto label_1ef270;
        }
    }
    ctx->pc = 0x1EF148u;
    // 0x1ef148: 0xc0554c2
    ctx->pc = 0x1EF148u;
    SET_GPR_U32(ctx, 31, 0x1EF150u);
    ctx->pc = 0x155308u;
    {
        const uint32_t __entryPc = ctx->pc;
        DisableIntc_0x155308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF150u; }
        else if (ctx->pc != 0x1EF150u) { ctx->pc = 0x1EF150u; }
    }
    if (ctx->pc != 0x1EF150u) { return; }
    ctx->pc = 0x1EF150u;
    // 0x1ef150: 0x70408628
    ctx->pc = 0x1ef150u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ef154: 0x3c020050
    ctx->pc = 0x1ef154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ef158: 0x2453dcb0
    ctx->pc = 0x1ef158u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294958256));
    // 0x1ef15c: 0x3c020050
    ctx->pc = 0x1ef15cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ef160: 0x70008e28
    ctx->pc = 0x1ef160u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef164: 0x2454dc40
    ctx->pc = 0x1ef164u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294958144));
label_1ef168:
    // 0x1ef168: 0x92630000
    ctx->pc = 0x1ef168u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ef16c: 0x24020006
    ctx->pc = 0x1ef16cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ef170: 0xa2830000
    ctx->pc = 0x1ef170u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef174: 0x96630002
    ctx->pc = 0x1ef174u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1ef178: 0xa6830002
    ctx->pc = 0x1ef178u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ef17c: 0x92630000
    ctx->pc = 0x1ef17cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1ef180: 0x1062000f
    ctx->pc = 0x1EF180u;
    {
        const bool branch_taken_0x1ef180 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EF184u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1ef180) {
            ctx->pc = 0x1EF1C0u;
            goto label_1ef1c0;
        }
    }
    ctx->pc = 0x1EF188u;
    // 0x1ef188: 0x10620005
    ctx->pc = 0x1EF188u;
    {
        const bool branch_taken_0x1ef188 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1EF18Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x1ef188) {
            ctx->pc = 0x1EF1A0u;
            goto label_1ef1a0;
        }
    }
    ctx->pc = 0x1EF190u;
    // 0x1ef190: 0x10620003
    ctx->pc = 0x1EF190u;
    {
        const bool branch_taken_0x1ef190 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ef190) {
            ctx->pc = 0x1EF1A0u;
            goto label_1ef1a0;
        }
    }
    ctx->pc = 0x1EF198u;
    // 0x1ef198: 0x1000000a
    ctx->pc = 0x1EF198u;
    {
        const bool branch_taken_0x1ef198 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF19Cu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
        if (branch_taken_0x1ef198) {
            ctx->pc = 0x1EF1C4u;
            goto label_1ef1c4;
        }
    }
    ctx->pc = 0x1EF1A0u;
label_1ef1a0:
    // 0x1ef1a0: 0x9262000a
    ctx->pc = 0x1ef1a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 10)));
    // 0x1ef1a4: 0xa282000a
    ctx->pc = 0x1ef1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 10), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef1a8: 0x9262000b
    ctx->pc = 0x1ef1a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 11)));
    // 0x1ef1ac: 0xa282000b
    ctx->pc = 0x1ef1acu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 11), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef1b0: 0x9262000c
    ctx->pc = 0x1ef1b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1ef1b4: 0xa282000c
    ctx->pc = 0x1ef1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ef1b8: 0x9262000d
    ctx->pc = 0x1ef1b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x1ef1bc: 0xa282000d
    ctx->pc = 0x1ef1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 13), (uint8_t)GPR_U32(ctx, 2));
label_1ef1c0:
    // 0x1ef1c0: 0x9662000e
    ctx->pc = 0x1ef1c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
label_1ef1c4:
    // 0x1ef1c4: 0x72202628
    ctx->pc = 0x1ef1c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1ef1c8: 0xc07b518
    ctx->pc = 0x1EF1C8u;
    SET_GPR_U32(ctx, 31, 0x1EF1D0u);
    ctx->pc = 0x1EF1CCu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 14), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1ED460u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetGunBuffer__Fi_0x1ed460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF1D0u; }
        else if (ctx->pc != 0x1EF1D0u) { ctx->pc = 0x1EF1D0u; }
    }
    if (ctx->pc != 0x1EF1D0u) { return; }
    ctx->pc = 0x1EF1D0u;
    // 0x1ef1d0: 0x8c440034
    ctx->pc = 0x1ef1d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1ef1d4: 0xc07b510
    ctx->pc = 0x1EF1D4u;
    SET_GPR_U32(ctx, 31, 0x1EF1DCu);
    ctx->pc = 0x1EF1D8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ED440u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetUsbGunBuffer__Fi_0x1ed440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF1DCu; }
        else if (ctx->pc != 0x1EF1DCu) { ctx->pc = 0x1EF1DCu; }
    }
    if (ctx->pc != 0x1EF1DCu) { return; }
    ctx->pc = 0x1EF1DCu;
    // 0x1ef1dc: 0x8e430038
    ctx->pc = 0x1ef1dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1ef1e0: 0x1060000b
    ctx->pc = 0x1EF1E0u;
    {
        const bool branch_taken_0x1ef1e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ef1e0) {
            ctx->pc = 0x1EF210u;
            goto label_1ef210;
        }
    }
    ctx->pc = 0x1EF1E8u;
    // 0x1ef1e8: 0x90430004
    ctx->pc = 0x1ef1e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ef1ec: 0x90420005
    ctx->pc = 0x1ef1ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x1ef1f0: 0x31a00
    ctx->pc = 0x1ef1f0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ef1f4: 0x621027
    ctx->pc = 0x1ef1f4u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ef1f8: 0xa6820036
    ctx->pc = 0x1ef1f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 54), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ef1fc: 0x8642001c
    ctx->pc = 0x1ef1fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1ef200: 0xa682003e
    ctx->pc = 0x1ef200u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ef204: 0x86420020
    ctx->pc = 0x1ef204u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1ef208: 0x10000005
    ctx->pc = 0x1EF208u;
    {
        const bool branch_taken_0x1ef208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EF20Cu;
        WRITE16(ADD32(GPR_U32(ctx, 20), 64), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x1ef208) {
            ctx->pc = 0x1EF220u;
            goto label_1ef220;
        }
    }
    ctx->pc = 0x1EF210u;
label_1ef210:
    // 0x1ef210: 0xa6800036
    ctx->pc = 0x1ef210u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ef214: 0x2402ffff
    ctx->pc = 0x1ef214u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef218: 0xa682003e
    ctx->pc = 0x1ef218u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 62), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ef21c: 0xa6820040
    ctx->pc = 0x1ef21cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 64), (uint16_t)GPR_U32(ctx, 2));
label_1ef220:
    // 0x1ef220: 0x26310001
    ctx->pc = 0x1ef220u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ef224: 0x2a220002
    ctx->pc = 0x1ef224u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 2));
    // 0x1ef228: 0x2673001a
    ctx->pc = 0x1ef228u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 26));
    // 0x1ef22c: 0x1440ffce
    ctx->pc = 0x1EF22Cu;
    {
        const bool branch_taken_0x1ef22c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EF230u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 26));
        if (branch_taken_0x1ef22c) {
            ctx->pc = 0x1EF168u;
            goto label_1ef168;
        }
    }
    ctx->pc = 0x1EF234u;
    // 0x1ef234: 0x3c010050
    ctx->pc = 0x1ef234u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ef238: 0x9423dd18
    ctx->pc = 0x1ef238u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294958360)));
    // 0x1ef23c: 0x24020001
    ctx->pc = 0x1ef23cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef240: 0x3c010050
    ctx->pc = 0x1ef240u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1ef244: 0x16020003
    ctx->pc = 0x1EF244u;
    {
        const bool branch_taken_0x1ef244 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1EF248u;
        WRITE16(ADD32(GPR_U32(ctx, 1), 4294958248), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1ef244) {
            ctx->pc = 0x1EF254u;
            goto label_1ef254;
        }
    }
    ctx->pc = 0x1EF24Cu;
    // 0x1ef24c: 0xc0554dc
    ctx->pc = 0x1EF24Cu;
    SET_GPR_U32(ctx, 31, 0x1EF254u);
    ctx->pc = 0x1EF250u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x155370u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnableIntc_0x155370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF254u; }
        else if (ctx->pc != 0x1EF254u) { ctx->pc = 0x1EF254u; }
    }
    if (ctx->pc != 0x1EF254u) { return; }
    ctx->pc = 0x1EF254u;
label_1ef254:
    // 0x1ef254: 0xc086bd8
    ctx->pc = 0x1EF254u;
    SET_GPR_U32(ctx, 31, 0x1EF25Cu);
    ctx->pc = 0x1EF258u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294938016));
    ctx->pc = 0x21AF60u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch__14VibrationClassFv_0x21af60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF25Cu; }
        else if (ctx->pc != 0x1EF25Cu) { ctx->pc = 0x1EF25Cu; }
    }
    if (ctx->pc != 0x1EF25Cu) { return; }
    ctx->pc = 0x1EF25Cu;
    // 0x1ef25c: 0xc07bd4c
    ctx->pc = 0x1EF25Cu;
    SET_GPR_U32(ctx, 31, 0x1EF264u);
    ctx->pc = 0x1EF530u;
    {
        const uint32_t __entryPc = ctx->pc;
        SendPadAct__Fv_0x1ef530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF264u; }
        else if (ctx->pc != 0x1EF264u) { ctx->pc = 0x1EF264u; }
    }
    if (ctx->pc != 0x1EF264u) { return; }
    ctx->pc = 0x1EF264u;
    // 0x1ef264: 0x3c020050
    ctx->pc = 0x1ef264u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ef268: 0xc07bce0
    ctx->pc = 0x1EF268u;
    SET_GPR_U32(ctx, 31, 0x1EF270u);
    ctx->pc = 0x1EF26Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294958144));
    ctx->pc = 0x1EF380u;
    {
        const uint32_t __entryPc = ctx->pc;
        GenOnOff__FP6SWDATA_0x1ef380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF270u; }
        else if (ctx->pc != 0x1EF270u) { ctx->pc = 0x1EF270u; }
    }
    if (ctx->pc != 0x1EF270u) { return; }
    ctx->pc = 0x1EF270u;
label_1ef270:
    // 0x1ef270: 0x7bbf0050
    ctx->pc = 0x1ef270u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef274: 0x7bb40040
    ctx->pc = 0x1ef274u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef278: 0x7bb30030
    ctx->pc = 0x1ef278u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef27c: 0x7bb20020
    ctx->pc = 0x1ef27cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef280: 0x7bb10010
    ctx->pc = 0x1ef280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef284: 0x7bb00000
    ctx->pc = 0x1ef284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef288: 0x3e00008
    ctx->pc = 0x1EF288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF28Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF168u: goto label_1ef168;
            case 0x1EF1A0u: goto label_1ef1a0;
            case 0x1EF1C0u: goto label_1ef1c0;
            case 0x1EF1C4u: goto label_1ef1c4;
            case 0x1EF210u: goto label_1ef210;
            case 0x1EF220u: goto label_1ef220;
            case 0x1EF254u: goto label_1ef254;
            case 0x1EF270u: goto label_1ef270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF290u;
}
