#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exponent
// Address: 0x2d8870 - 0x2d8948
void exponent_0x2d8870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d8870u;

    // 0x2d8870: 0x27bdfec0
    ctx->pc = 0x2d8870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x2d8874: 0xa0182d
    ctx->pc = 0x2d8874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8878: 0xa0860000
    ctx->pc = 0x2d8878u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x2d887c: 0x4610004
    ctx->pc = 0x2D887Cu;
    {
        const bool branch_taken_0x2d887c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2D8880u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2d887c) {
            ctx->pc = 0x2D8890u;
            goto label_2d8890;
        }
    }
    ctx->pc = 0x2D8884u;
    // 0x2d8884: 0x31823
    ctx->pc = 0x2d8884u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2d8888: 0x10000002
    ctx->pc = 0x2D8888u;
    {
        const bool branch_taken_0x2d8888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D888Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
        if (branch_taken_0x2d8888) {
            ctx->pc = 0x2D8894u;
            goto label_2d8894;
        }
    }
    ctx->pc = 0x2D8890u;
label_2d8890:
    // 0x2d8890: 0x2402002b
    ctx->pc = 0x2d8890u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_2d8894:
    // 0x2d8894: 0xa0820000
    ctx->pc = 0x2d8894u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d8898: 0x24840001
    ctx->pc = 0x2d8898u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d889c: 0x2862000a
    ctx->pc = 0x2d889cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 10));
    // 0x2d88a0: 0x14400020
    ctx->pc = 0x2D88A0u;
    {
        const bool branch_taken_0x2d88a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D88A4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 308));
        if (branch_taken_0x2d88a0) {
            ctx->pc = 0x2D8924u;
            goto label_2d8924;
        }
    }
    ctx->pc = 0x2D88A8u;
    // 0x2d88a8: 0x2405000a
    ctx->pc = 0x2d88a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2d88ac: 0x382d
    ctx->pc = 0x2d88acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d88b0: 0x24c6ffff
    ctx->pc = 0x2d88b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2d88b4: 0x0
    ctx->pc = 0x2d88b4u;
    // NOP
label_2d88b8:
    // 0x2d88b8: 0x65001a
    ctx->pc = 0x2d88b8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2d88bc: 0x1812
    ctx->pc = 0x2d88bcu;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x2d88c0: 0x1010
    ctx->pc = 0x2d88c0u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x2d88c4: 0x50a70001
    ctx->pc = 0x2D88C4u;
    {
        const bool branch_taken_0x2d88c4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 7));
        if (branch_taken_0x2d88c4) {
            ctx->pc = 0x2D88C8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2D88CCu;
            goto label_2d88cc;
        }
    }
    ctx->pc = 0x2D88CCu;
label_2d88cc:
    // 0x2d88cc: 0x24420030
    ctx->pc = 0x2d88ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
    // 0x2d88d0: 0xa0c20000
    ctx->pc = 0x2d88d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d88d4: 0x50a70001
    ctx->pc = 0x2D88D4u;
    {
        const bool branch_taken_0x2d88d4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 7));
        if (branch_taken_0x2d88d4) {
            ctx->pc = 0x2D88D8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2D88DCu;
            goto label_2d88dc;
        }
    }
    ctx->pc = 0x2D88DCu;
label_2d88dc:
    // 0x2d88dc: 0x2862000a
    ctx->pc = 0x2d88dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 10));
    // 0x2d88e0: 0x1040fff5
    ctx->pc = 0x2D88E0u;
    {
        const bool branch_taken_0x2d88e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D88E4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x2d88e0) {
            ctx->pc = 0x2D88B8u;
            goto label_2d88b8;
        }
    }
    ctx->pc = 0x2D88E8u;
    // 0x2d88e8: 0x24620030
    ctx->pc = 0x2d88e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d88ec: 0xa0c20000
    ctx->pc = 0x2d88ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d88f0: 0x27a20134
    ctx->pc = 0x2d88f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 308));
    // 0x2d88f4: 0xc2102b
    ctx->pc = 0x2d88f4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d88f8: 0x10400010
    ctx->pc = 0x2D88F8u;
    {
        const bool branch_taken_0x2d88f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D88FCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 308));
        if (branch_taken_0x2d88f8) {
            ctx->pc = 0x2D893Cu;
            goto label_2d893c;
        }
    }
    ctx->pc = 0x2D8900u;
label_2d8900:
    // 0x2d8900: 0x90c20000
    ctx->pc = 0x2d8900u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d8904: 0xa0820000
    ctx->pc = 0x2d8904u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d8908: 0x24c60001
    ctx->pc = 0x2d8908u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d890c: 0x24840001
    ctx->pc = 0x2d890cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d8910: 0xc3102b
    ctx->pc = 0x2d8910u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d8914: 0x1440fffa
    ctx->pc = 0x2D8914u;
    {
        const bool branch_taken_0x2d8914 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2d8914) {
            ctx->pc = 0x2D8900u;
            goto label_2d8900;
        }
    }
    ctx->pc = 0x2D891Cu;
    // 0x2d891c: 0x10000008
    ctx->pc = 0x2D891Cu;
    {
        const bool branch_taken_0x2d891c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D8920u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d891c) {
            ctx->pc = 0x2D8940u;
            goto label_2d8940;
        }
    }
    ctx->pc = 0x2D8924u;
label_2d8924:
    // 0x2d8924: 0x24020030
    ctx->pc = 0x2d8924u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x2d8928: 0xa0820000
    ctx->pc = 0x2d8928u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d892c: 0x24840001
    ctx->pc = 0x2d892cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d8930: 0x24620030
    ctx->pc = 0x2d8930u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 48));
    // 0x2d8934: 0xa0820000
    ctx->pc = 0x2d8934u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d8938: 0x24840001
    ctx->pc = 0x2d8938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2d893c:
    // 0x2d893c: 0x80102d
    ctx->pc = 0x2d893cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d8940:
    // 0x2d8940: 0x3e00008
    ctx->pc = 0x2D8940u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8944u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D8890u: goto label_2d8890;
            case 0x2D8894u: goto label_2d8894;
            case 0x2D88B8u: goto label_2d88b8;
            case 0x2D88CCu: goto label_2d88cc;
            case 0x2D88DCu: goto label_2d88dc;
            case 0x2D8900u: goto label_2d8900;
            case 0x2D8924u: goto label_2d8924;
            case 0x2D893Cu: goto label_2d893c;
            case 0x2D8940u: goto label_2d8940;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D8948u;
}
