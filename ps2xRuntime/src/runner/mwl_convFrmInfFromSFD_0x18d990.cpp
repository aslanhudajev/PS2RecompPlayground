#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwl_convFrmInfFromSFD
// Address: 0x18d990 - 0x18da58
void mwl_convFrmInfFromSFD_0x18d990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwl_convFrmInfFromSFD");


    ctx->pc = 0x18d990u;

    // 0x18d990: 0x27bdff70
    ctx->pc = 0x18d990u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x18d994: 0xffb60060
    ctx->pc = 0x18d994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x18d998: 0xffb50050
    ctx->pc = 0x18d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x18d99c: 0xffb40040
    ctx->pc = 0x18d99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x18d9a0: 0xffb30030
    ctx->pc = 0x18d9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x18d9a4: 0xffb20020
    ctx->pc = 0x18d9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18d9a8: 0xffb10010
    ctx->pc = 0x18d9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18d9ac: 0xffb00000
    ctx->pc = 0x18d9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18d9b0: 0xa0882d
    ctx->pc = 0x18d9b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9b4: 0xffbf0080
    ctx->pc = 0x18d9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x18d9b8: 0x80802d
    ctx->pc = 0x18d9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9bc: 0xffb70070
    ctx->pc = 0x18d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x18d9c0: 0x8e170020
    ctx->pc = 0x18d9c0u;
    SET_GPR_U32(ctx, 23, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18d9c4: 0xc063696
    ctx->pc = 0x18D9C4u;
    SET_GPR_U32(ctx, 31, 0x18D9CCu);
    ctx->pc = 0x18D9C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x18DA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwl_convBufFmtFromSFD_0x18da58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9CCu; }
        else if (ctx->pc != 0x18D9CCu) { ctx->pc = 0x18D9CCu; }
    }
    if (ctx->pc != 0x18D9CCu) { return; }
    ctx->pc = 0x18D9CCu;
    // 0x18d9cc: 0x8e040010
    ctx->pc = 0x18d9ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x18d9d0: 0x40902d
    ctx->pc = 0x18d9d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d9d4: 0x8e130000
    ctx->pc = 0x18d9d4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18d9d8: 0x8e140004
    ctx->pc = 0x18d9d8u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18d9dc: 0x8e150008
    ctx->pc = 0x18d9dcu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x18d9e0: 0xc0636ac
    ctx->pc = 0x18D9E0u;
    SET_GPR_U32(ctx, 31, 0x18D9E8u);
    ctx->pc = 0x18D9E4u;
    SET_GPR_U32(ctx, 22, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x18DAB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwl_convPtypeFromSFD_0x18dab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D9E8u; }
        else if (ctx->pc != 0x18D9E8u) { ctx->pc = 0x18D9E8u; }
    }
    if (ctx->pc != 0x18D9E8u) { return; }
    ctx->pc = 0x18D9E8u;
    // 0x18d9e8: 0x8e03002c
    ctx->pc = 0x18d9e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x18d9ec: 0x8e040014
    ctx->pc = 0x18d9ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x18d9f0: 0x8e050018
    ctx->pc = 0x18d9f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x18d9f4: 0x8e060024
    ctx->pc = 0x18d9f4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18d9f8: 0x8e070028
    ctx->pc = 0x18d9f8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18d9fc: 0xae370000
    ctx->pc = 0x18d9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
    // 0x18da00: 0xae320004
    ctx->pc = 0x18da00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x18da04: 0xae330008
    ctx->pc = 0x18da04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x18da08: 0xae34000c
    ctx->pc = 0x18da08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 20));
    // 0x18da0c: 0xae350010
    ctx->pc = 0x18da0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x18da10: 0xae360014
    ctx->pc = 0x18da10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
    // 0x18da14: 0xae23002c
    ctx->pc = 0x18da14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x18da18: 0xae220018
    ctx->pc = 0x18da18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x18da1c: 0xae24001c
    ctx->pc = 0x18da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x18da20: 0xae250020
    ctx->pc = 0x18da20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 5));
    // 0x18da24: 0xae260024
    ctx->pc = 0x18da24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x18da28: 0xae270028
    ctx->pc = 0x18da28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 7));
    // 0x18da2c: 0xdfbf0080
    ctx->pc = 0x18da2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18da30: 0xdfb70070
    ctx->pc = 0x18da30u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18da34: 0xdfb60060
    ctx->pc = 0x18da34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18da38: 0xdfb50050
    ctx->pc = 0x18da38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18da3c: 0xdfb40040
    ctx->pc = 0x18da3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18da40: 0xdfb30030
    ctx->pc = 0x18da40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18da44: 0xdfb20020
    ctx->pc = 0x18da44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18da48: 0xdfb10010
    ctx->pc = 0x18da48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18da4c: 0xdfb00000
    ctx->pc = 0x18da4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18da50: 0x3e00008
    ctx->pc = 0x18DA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DA54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DA58u;
}
