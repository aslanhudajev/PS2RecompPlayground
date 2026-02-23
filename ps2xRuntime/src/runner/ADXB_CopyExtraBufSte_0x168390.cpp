#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_CopyExtraBufSte
// Address: 0x168390 - 0x1683fc
void ADXB_CopyExtraBufSte_0x168390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_CopyExtraBufSte");


    ctx->pc = 0x168390u;

    // 0x168390: 0x27bdffb0
    ctx->pc = 0x168390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x168394: 0xffb00000
    ctx->pc = 0x168394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168398: 0xa0802d
    ctx->pc = 0x168398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16839c: 0xffb30030
    ctx->pc = 0x16839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1683a0: 0xffb20020
    ctx->pc = 0x1683a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1683a4: 0xe0982d
    ctx->pc = 0x1683a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683a8: 0xffb10010
    ctx->pc = 0x1683a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1683ac: 0x80902d
    ctx->pc = 0x1683acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683b0: 0xc0882d
    ctx->pc = 0x1683b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683b4: 0x102840
    ctx->pc = 0x1683b4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 16), 1));
    // 0x1683b8: 0x2452821
    ctx->pc = 0x1683b8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1683bc: 0xffbf0040
    ctx->pc = 0x1683bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1683c0: 0xc05a0d8
    ctx->pc = 0x1683C0u;
    SET_GPR_U32(ctx, 31, 0x1683C8u);
    ctx->pc = 0x1683C4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x168360u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy2_0x168360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1683C8u; }
        else if (ctx->pc != 0x1683C8u) { ctx->pc = 0x1683C8u; }
    }
    if (ctx->pc != 0x1683C8u) { return; }
    ctx->pc = 0x1683C8u;
    // 0x1683c8: 0x2308021
    ctx->pc = 0x1683c8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1683cc: 0x260302d
    ctx->pc = 0x1683ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1683d0: 0x118840
    ctx->pc = 0x1683d0u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 1));
    // 0x1683d4: 0x108040
    ctx->pc = 0x1683d4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
    // 0x1683d8: 0x2512021
    ctx->pc = 0x1683d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x1683dc: 0x2502821
    ctx->pc = 0x1683dcu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1683e0: 0xdfbf0040
    ctx->pc = 0x1683e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1683e4: 0xdfb30030
    ctx->pc = 0x1683e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1683e8: 0xdfb20020
    ctx->pc = 0x1683e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1683ec: 0xdfb10010
    ctx->pc = 0x1683ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1683f0: 0xdfb00000
    ctx->pc = 0x1683f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1683f4: 0x805a0d8
    ctx->pc = 0x1683F4u;
    ctx->pc = 0x1683F8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x168360u;
    memcpy2_0x168360(rdram, ctx, runtime); return;
    ctx->pc = 0x1683FCu;
}
