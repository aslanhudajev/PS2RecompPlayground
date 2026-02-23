#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_IsHeader
// Address: 0x172968 - 0x1729f8
void ADXT_IsHeader_0x172968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_IsHeader");


    ctx->pc = 0x172968u;

    // 0x172968: 0x27bdffb0
    ctx->pc = 0x172968u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17296c: 0x80382d
    ctx->pc = 0x17296cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172970: 0xffb00030
    ctx->pc = 0x172970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x172974: 0x28a20002
    ctx->pc = 0x172974u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 2));
    // 0x172978: 0xffbf0040
    ctx->pc = 0x172978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17297c: 0x14400009
    ctx->pc = 0x17297Cu;
    {
        const bool branch_taken_0x17297c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x172980u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17297c) {
            ctx->pc = 0x1729A4u;
            goto label_1729a4;
        }
    }
    ctx->pc = 0x172984u;
    // 0x172984: 0x94e20000
    ctx->pc = 0x172984u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x172988: 0x34048000
    ctx->pc = 0x172988u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32768));
    // 0x17298c: 0x21a00
    ctx->pc = 0x17298cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 8));
    // 0x172990: 0x21202
    ctx->pc = 0x172990u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 8));
    // 0x172994: 0x431025
    ctx->pc = 0x172994u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172998: 0x3042ffff
    ctx->pc = 0x172998u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x17299c: 0x10440003
    ctx->pc = 0x17299Cu;
    {
        const bool branch_taken_0x17299c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x1729A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 28));
        if (branch_taken_0x17299c) {
            ctx->pc = 0x1729ACu;
            goto label_1729ac;
        }
    }
    ctx->pc = 0x1729A4u;
label_1729a4:
    // 0x1729a4: 0x10000010
    ctx->pc = 0x1729A4u;
    {
        const bool branch_taken_0x1729a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1729A8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1729a4) {
            ctx->pc = 0x1729E8u;
            goto label_1729e8;
        }
    }
    ctx->pc = 0x1729ACu;
label_1729ac:
    // 0x1729ac: 0x27a30020
    ctx->pc = 0x1729acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 29), 32));
    // 0x1729b0: 0xe0202d
    ctx->pc = 0x1729b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1729b4: 0xafa20000
    ctx->pc = 0x1729b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1729b8: 0xafa30008
    ctx->pc = 0x1729b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1729bc: 0x27a60010
    ctx->pc = 0x1729bcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x1729c0: 0x27a70012
    ctx->pc = 0x1729c0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 18));
    // 0x1729c4: 0x27a80013
    ctx->pc = 0x1729c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 19));
    // 0x1729c8: 0x27a90014
    ctx->pc = 0x1729c8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 29), 20));
    // 0x1729cc: 0x27aa0015
    ctx->pc = 0x1729ccu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 29), 21));
    // 0x1729d0: 0xc05a594
    ctx->pc = 0x1729D0u;
    SET_GPR_U32(ctx, 31, 0x1729D8u);
    ctx->pc = 0x1729D4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 29), 24));
    ctx->pc = 0x169650u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADX_DecodeInfo_0x169650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1729D8u; }
        else if (ctx->pc != 0x1729D8u) { ctx->pc = 0x1729D8u; }
    }
    if (ctx->pc != 0x1729D8u) { return; }
    ctx->pc = 0x1729D8u;
    // 0x1729d8: 0x440fff2
    ctx->pc = 0x1729D8u;
    {
        const bool branch_taken_0x1729d8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1729DCu;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1729d8) {
            ctx->pc = 0x1729A4u;
            goto label_1729a4;
        }
    }
    ctx->pc = 0x1729E0u;
    // 0x1729e0: 0x24020001
    ctx->pc = 0x1729e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1729e4: 0xae030000
    ctx->pc = 0x1729e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1729e8:
    // 0x1729e8: 0xdfbf0040
    ctx->pc = 0x1729e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1729ec: 0xdfb00030
    ctx->pc = 0x1729ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1729f0: 0x3e00008
    ctx->pc = 0x1729F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1729F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1729A4u: goto label_1729a4;
            case 0x1729ACu: goto label_1729ac;
            case 0x1729E8u: goto label_1729e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1729F8u;
}
