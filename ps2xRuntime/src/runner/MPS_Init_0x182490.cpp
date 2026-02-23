#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPS_Init
// Address: 0x182490 - 0x1824f0
void MPS_Init_0x182490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPS_Init");


    ctx->pc = 0x182490u;

    // 0x182490: 0x27bdffd0
    ctx->pc = 0x182490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x182494: 0xffb10010
    ctx->pc = 0x182494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x182498: 0xffb00000
    ctx->pc = 0x182498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18249c: 0xa0882d
    ctx->pc = 0x18249cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824a0: 0xffbf0020
    ctx->pc = 0x1824a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1824a4: 0xc060920
    ctx->pc = 0x1824A4u;
    SET_GPR_U32(ctx, 31, 0x1824ACu);
    ctx->pc = 0x1824A8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182480u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_GetVersionStr_0x182480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824ACu; }
        else if (ctx->pc != 0x1824ACu) { ctx->pc = 0x1824ACu; }
    }
    if (ctx->pc != 0x1824ACu) { return; }
    ctx->pc = 0x1824ACu;
    // 0x1824ac: 0x3c03002e
    ctx->pc = 0x1824acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
    // 0x1824b0: 0x200202d
    ctx->pc = 0x1824b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824b4: 0xac624288
    ctx->pc = 0x1824b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17032), GPR_U32(ctx, 2));
    // 0x1824b8: 0xc06093c
    ctx->pc = 0x1824B8u;
    SET_GPR_U32(ctx, 31, 0x1824C0u);
    ctx->pc = 0x1824BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1824F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_InitLibWork_0x1824f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824C0u; }
        else if (ctx->pc != 0x1824C0u) { ctx->pc = 0x1824C0u; }
    }
    if (ctx->pc != 0x1824C0u) { return; }
    ctx->pc = 0x1824C0u;
    // 0x1824c0: 0x14400007
    ctx->pc = 0x1824C0u;
    {
        const bool branch_taken_0x1824c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1824C4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x1824c0) {
            ctx->pc = 0x1824E0u;
            goto label_1824e0;
        }
    }
    ctx->pc = 0x1824C8u;
    // 0x1824c8: 0xc06020e
    ctx->pc = 0x1824C8u;
    SET_GPR_U32(ctx, 31, 0x1824D0u);
    ctx->pc = 0x180838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSDEC_Init_0x180838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824D0u; }
        else if (ctx->pc != 0x1824D0u) { ctx->pc = 0x1824D0u; }
    }
    if (ctx->pc != 0x1824D0u) { return; }
    ctx->pc = 0x1824D0u;
    // 0x1824d0: 0xc060890
    ctx->pc = 0x1824D0u;
    SET_GPR_U32(ctx, 31, 0x1824D8u);
    ctx->pc = 0x182240u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSGET_Init_0x182240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1824D8u; }
        else if (ctx->pc != 0x1824D8u) { ctx->pc = 0x1824D8u; }
    }
    if (ctx->pc != 0x1824D8u) { return; }
    ctx->pc = 0x1824D8u;
    // 0x1824d8: 0x102d
    ctx->pc = 0x1824d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824dc: 0xdfbf0020
    ctx->pc = 0x1824dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1824e0:
    // 0x1824e0: 0xdfb10010
    ctx->pc = 0x1824e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1824e4: 0xdfb00000
    ctx->pc = 0x1824e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1824e8: 0x3e00008
    ctx->pc = 0x1824E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1824ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1824E0u: goto label_1824e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1824F0u;
}
