#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: copy_reg
// Address: 0x1492a0 - 0x14931c
void copy_reg_0x1492a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("copy_reg");


    ctx->pc = 0x1492a0u;

    // 0x1492a0: 0x27bdffc0
    ctx->pc = 0x1492a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1492a4: 0xffb10010
    ctx->pc = 0x1492a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1492a8: 0xffb00000
    ctx->pc = 0x1492a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1492ac: 0x80882d
    ctx->pc = 0x1492acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492b0: 0xc0802d
    ctx->pc = 0x1492b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492b4: 0xffb20020
    ctx->pc = 0x1492b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1492b8: 0xffbf0030
    ctx->pc = 0x1492b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1492bc: 0xc052486
    ctx->pc = 0x1492BCu;
    SET_GPR_U32(ctx, 31, 0x1492C4u);
    ctx->pc = 0x1492C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x149218u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_reg_addr_0x149218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492C4u; }
        else if (ctx->pc != 0x1492C4u) { ctx->pc = 0x1492C4u; }
    }
    if (ctx->pc != 0x1492C4u) { return; }
    ctx->pc = 0x1492C4u;
    // 0x1492c4: 0x40902d
    ctx->pc = 0x1492c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492c8: 0x200282d
    ctx->pc = 0x1492c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492cc: 0x220202d
    ctx->pc = 0x1492ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492d0: 0xc052486
    ctx->pc = 0x1492D0u;
    SET_GPR_U32(ctx, 31, 0x1492D8u);
    ctx->pc = 0x1492D4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x149218u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_reg_addr_0x149218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1492D8u; }
        else if (ctx->pc != 0x1492D8u) { ctx->pc = 0x1492D8u; }
    }
    if (ctx->pc != 0x1492D8u) { return; }
    ctx->pc = 0x1492D8u;
    // 0x1492d8: 0x40202d
    ctx->pc = 0x1492d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1492dc: 0x2a22001f
    ctx->pc = 0x1492dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 31));
    // 0x1492e0: 0x54400006
    ctx->pc = 0x1492E0u;
    {
        const bool branch_taken_0x1492e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1492e0) {
            ctx->pc = 0x1492E4u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
            ctx->pc = 0x1492FCu;
            goto label_1492fc;
        }
    }
    ctx->pc = 0x1492E8u;
    // 0x1492e8: 0x2402003f
    ctx->pc = 0x1492e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 63));
    // 0x1492ec: 0x24060008
    ctx->pc = 0x1492ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1492f0: 0x51102a
    ctx->pc = 0x1492f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x1492f4: 0x24030004
    ctx->pc = 0x1492f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1492f8: 0x62300a
    ctx->pc = 0x1492f8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_1492fc:
    // 0x1492fc: 0xc050c90
    ctx->pc = 0x1492FCu;
    SET_GPR_U32(ctx, 31, 0x149304u);
    ctx->pc = 0x149300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149304u; }
        else if (ctx->pc != 0x149304u) { ctx->pc = 0x149304u; }
    }
    if (ctx->pc != 0x149304u) { return; }
    ctx->pc = 0x149304u;
    // 0x149304: 0xdfbf0030
    ctx->pc = 0x149304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149308: 0xdfb20020
    ctx->pc = 0x149308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14930c: 0xdfb10010
    ctx->pc = 0x14930cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149310: 0xdfb00000
    ctx->pc = 0x149310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149314: 0x3e00008
    ctx->pc = 0x149314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149318u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1492FCu: goto label_1492fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14931Cu;
}
