#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: UTY_MemsetDword
// Address: 0x180798 - 0x180834
void UTY_MemsetDword_0x180798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("UTY_MemsetDword");


    ctx->pc = 0x180798u;

    // 0x180798: 0x61080
    ctx->pc = 0x180798u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x18079c: 0x30c3000f
    ctx->pc = 0x18079cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 15));
    // 0x1807a0: 0x1060000c
    ctx->pc = 0x1807A0u;
    {
        const bool branch_taken_0x1807a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1807A4u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x1807a0) {
            ctx->pc = 0x1807D4u;
            goto label_1807d4;
        }
    }
    ctx->pc = 0x1807A8u;
    // 0x1807a8: 0x63102
    ctx->pc = 0x1807a8u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 4));
    // 0x1807ac: 0x0
    ctx->pc = 0x1807acu;
    // NOP
label_1807b0:
    // 0x1807b0: 0x2484fffc
    ctx->pc = 0x1807b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x1807b4: 0x2463ffff
    ctx->pc = 0x1807b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1807b8: 0xac850000
    ctx->pc = 0x1807b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1807bc: 0x0
    ctx->pc = 0x1807bcu;
    // NOP
    // 0x1807c0: 0x0
    ctx->pc = 0x1807c0u;
    // NOP
    // 0x1807c4: 0x1460fffa
    ctx->pc = 0x1807C4u;
    {
        const bool branch_taken_0x1807c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1807c4) {
            ctx->pc = 0x1807B0u;
            goto label_1807b0;
        }
    }
    ctx->pc = 0x1807CCu;
    // 0x1807cc: 0x10000002
    ctx->pc = 0x1807CCu;
    {
        const bool branch_taken_0x1807cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1807cc) {
            ctx->pc = 0x1807D8u;
            goto label_1807d8;
        }
    }
    ctx->pc = 0x1807D4u;
label_1807d4:
    // 0x1807d4: 0x63102
    ctx->pc = 0x1807d4u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 6), 4));
label_1807d8:
    // 0x1807d8: 0x10c00014
    ctx->pc = 0x1807D8u;
    {
        const bool branch_taken_0x1807d8 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x1807DCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
        if (branch_taken_0x1807d8) {
            ctx->pc = 0x18082Cu;
            goto label_18082c;
        }
    }
    ctx->pc = 0x1807E0u;
label_1807e0:
    // 0x1807e0: 0xac850000
    ctx->pc = 0x1807e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1807e4: 0x24c6ffff
    ctx->pc = 0x1807e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1807e8: 0xac85fffc
    ctx->pc = 0x1807e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 5));
    // 0x1807ec: 0xac85fff8
    ctx->pc = 0x1807ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967288), GPR_U32(ctx, 5));
    // 0x1807f0: 0xac85fff4
    ctx->pc = 0x1807f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967284), GPR_U32(ctx, 5));
    // 0x1807f4: 0xac85fff0
    ctx->pc = 0x1807f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_U32(ctx, 5));
    // 0x1807f8: 0xac85ffec
    ctx->pc = 0x1807f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967276), GPR_U32(ctx, 5));
    // 0x1807fc: 0xac85ffe8
    ctx->pc = 0x1807fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967272), GPR_U32(ctx, 5));
    // 0x180800: 0xac85ffe4
    ctx->pc = 0x180800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967268), GPR_U32(ctx, 5));
    // 0x180804: 0xac85ffe0
    ctx->pc = 0x180804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967264), GPR_U32(ctx, 5));
    // 0x180808: 0xac85ffdc
    ctx->pc = 0x180808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967260), GPR_U32(ctx, 5));
    // 0x18080c: 0xac85ffd8
    ctx->pc = 0x18080cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967256), GPR_U32(ctx, 5));
    // 0x180810: 0xac85ffd4
    ctx->pc = 0x180810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967252), GPR_U32(ctx, 5));
    // 0x180814: 0xac85ffd0
    ctx->pc = 0x180814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967248), GPR_U32(ctx, 5));
    // 0x180818: 0xac85ffcc
    ctx->pc = 0x180818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967244), GPR_U32(ctx, 5));
    // 0x18081c: 0xac85ffc8
    ctx->pc = 0x18081cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967240), GPR_U32(ctx, 5));
    // 0x180820: 0x2484ffc0
    ctx->pc = 0x180820u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x180824: 0x14c0ffee
    ctx->pc = 0x180824u;
    {
        const bool branch_taken_0x180824 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x180828u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x180824) {
            ctx->pc = 0x1807E0u;
            goto label_1807e0;
        }
    }
    ctx->pc = 0x18082Cu;
label_18082c:
    // 0x18082c: 0x3e00008
    ctx->pc = 0x18082Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1807B0u: goto label_1807b0;
            case 0x1807D4u: goto label_1807d4;
            case 0x1807D8u: goto label_1807d8;
            case 0x1807E0u: goto label_1807e0;
            case 0x18082Cu: goto label_18082c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180834u;
}
