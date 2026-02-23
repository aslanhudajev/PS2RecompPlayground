#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFD_CompoAlpha256
// Address: 0x18d830 - 0x18d904
void MWSFD_CompoAlpha256_0x18d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFD_CompoAlpha256");


    ctx->pc = 0x18d830u;

    // 0x18d830: 0x2402ffff
    ctx->pc = 0x18d830u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18d834: 0x24c3001f
    ctx->pc = 0x18d834u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 31));
    // 0x18d838: 0x46402a
    ctx->pc = 0x18d838u;
    SET_GPR_U32(ctx, 8, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
    // 0x18d83c: 0x24a7000f
    ctx->pc = 0x18d83cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 15));
    // 0x18d840: 0x45102a
    ctx->pc = 0x18d840u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 5)));
    // 0x18d844: 0xc8180b
    ctx->pc = 0x18d844u;
    if (GPR_U32(ctx, 8) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 6));
    // 0x18d848: 0xa2380b
    ctx->pc = 0x18d848u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 5));
    // 0x18d84c: 0x34143
    ctx->pc = 0x18d84cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 5));
    // 0x18d850: 0x73903
    ctx->pc = 0x18d850u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x18d854: 0x80602d
    ctx->pc = 0x18d854u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d858: 0x18e00028
    ctx->pc = 0x18D858u;
    {
        const bool branch_taken_0x18d858 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x18D85Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18d858) {
            ctx->pc = 0x18D8FCu;
            goto label_18d8fc;
        }
    }
    ctx->pc = 0x18D860u;
    // 0x18d860: 0x85a80
    ctx->pc = 0x18d860u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 8), 10));
    // 0x18d864: 0x612c0
    ctx->pc = 0x18d864u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 11));
label_18d868:
    // 0x18d868: 0x202d
    ctx->pc = 0x18d868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d86c: 0x1021818
    ctx->pc = 0x18d86cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x18d870: 0x6c1021
    ctx->pc = 0x18d870u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x18d874: 0x24450003
    ctx->pc = 0x18d874u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 3));
    // 0x18d878: 0xab1821
    ctx->pc = 0x18d878u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x18d87c: 0x1900001a
    ctx->pc = 0x18D87Cu;
    {
        const bool branch_taken_0x18d87c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x18D880u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
        if (branch_taken_0x18d87c) {
            ctx->pc = 0x18D8E8u;
            goto label_18d8e8;
        }
    }
    ctx->pc = 0x18D884u;
    // 0x18d884: 0x24ca0001
    ctx->pc = 0x18d884u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 6), 1));
    // 0x18d888: 0x24890001
    ctx->pc = 0x18d888u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 4), 1));
    // 0x18d88c: 0x0
    ctx->pc = 0x18d88cu;
    // NOP
label_18d890:
    // 0x18d890: 0x202d
    ctx->pc = 0x18d890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d894: 0x24860001
    ctx->pc = 0x18d894u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 1));
label_18d898:
    // 0x18d898: 0x2404000f
    ctx->pc = 0x18d898u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18d89c: 0x0
    ctx->pc = 0x18d89cu;
    // NOP
label_18d8a0:
    // 0x18d8a0: 0x90620000
    ctx->pc = 0x18d8a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18d8a4: 0x2484ffff
    ctx->pc = 0x18d8a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18d8a8: 0x24630004
    ctx->pc = 0x18d8a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x18d8ac: 0x21042
    ctx->pc = 0x18d8acu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
    // 0x18d8b0: 0x24420001
    ctx->pc = 0x18d8b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18d8b4: 0xa0a20000
    ctx->pc = 0x18d8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x18d8b8: 0x481fff9
    ctx->pc = 0x18D8B8u;
    {
        const bool branch_taken_0x18d8b8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18D8BCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x18d8b8) {
            ctx->pc = 0x18D8A0u;
            goto label_18d8a0;
        }
    }
    ctx->pc = 0x18D8C0u;
    // 0x18d8c0: 0xc0202d
    ctx->pc = 0x18d8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8c4: 0x28820010
    ctx->pc = 0x18d8c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 16));
    // 0x18d8c8: 0x1440fff3
    ctx->pc = 0x18D8C8u;
    {
        const bool branch_taken_0x18d8c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18D8CCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x18d8c8) {
            ctx->pc = 0x18D898u;
            goto label_18d898;
        }
    }
    ctx->pc = 0x18D8D0u;
    // 0x18d8d0: 0x120202d
    ctx->pc = 0x18d8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d8d4: 0x88102a
    ctx->pc = 0x18d8d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 8)));
    // 0x18d8d8: 0x1440ffed
    ctx->pc = 0x18D8D8u;
    {
        const bool branch_taken_0x18d8d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18D8DCu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x18d8d8) {
            ctx->pc = 0x18D890u;
            goto label_18d890;
        }
    }
    ctx->pc = 0x18D8E0u;
    // 0x18d8e0: 0x10000003
    ctx->pc = 0x18D8E0u;
    {
        const bool branch_taken_0x18d8e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D8E4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18d8e0) {
            ctx->pc = 0x18D8F0u;
            goto label_18d8f0;
        }
    }
    ctx->pc = 0x18D8E8u;
label_18d8e8:
    // 0x18d8e8: 0x24ca0001
    ctx->pc = 0x18d8e8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 6), 1));
    // 0x18d8ec: 0x140302d
    ctx->pc = 0x18d8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_18d8f0:
    // 0x18d8f0: 0xc7102a
    ctx->pc = 0x18d8f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x18d8f4: 0x1440ffdc
    ctx->pc = 0x18D8F4u;
    {
        const bool branch_taken_0x18d8f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18D8F8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 11));
        if (branch_taken_0x18d8f4) {
            ctx->pc = 0x18D868u;
            goto label_18d868;
        }
    }
    ctx->pc = 0x18D8FCu;
label_18d8fc:
    // 0x18d8fc: 0x3e00008
    ctx->pc = 0x18D8FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D868u: goto label_18d868;
            case 0x18D890u: goto label_18d890;
            case 0x18D898u: goto label_18d898;
            case 0x18D8A0u: goto label_18d8a0;
            case 0x18D8E8u: goto label_18d8e8;
            case 0x18D8F0u: goto label_18d8f0;
            case 0x18D8FCu: goto label_18d8fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D904u;
}
