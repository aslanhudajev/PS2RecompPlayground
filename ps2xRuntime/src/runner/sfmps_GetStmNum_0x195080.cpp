#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_GetStmNum
// Address: 0x195080 - 0x195130
void sfmps_GetStmNum_0x195080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_GetStmNum");


    ctx->pc = 0x195080u;

    // 0x195080: 0x27bdff60
    ctx->pc = 0x195080u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x195084: 0xffb60080
    ctx->pc = 0x195084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x195088: 0xffb50070
    ctx->pc = 0x195088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x19508c: 0xa0b02d
    ctx->pc = 0x19508cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195090: 0xffb30050
    ctx->pc = 0x195090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x195094: 0xc0a82d
    ctx->pc = 0x195094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195098: 0xffb20040
    ctx->pc = 0x195098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x19509c: 0x24933060
    ctx->pc = 0x19509cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 4), 12384));
    // 0x1950a0: 0xffb10030
    ctx->pc = 0x1950a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1950a4: 0x902d
    ctx->pc = 0x1950a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950a8: 0xffb00020
    ctx->pc = 0x1950a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1950ac: 0x882d
    ctx->pc = 0x1950acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950b0: 0xffbf0090
    ctx->pc = 0x1950b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1950b4: 0x802d
    ctx->pc = 0x1950b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950b8: 0xffb40060
    ctx->pc = 0x1950b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1950bc: 0x8c943060
    ctx->pc = 0x1950bcu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 4), 12384)));
label_1950c0:
    // 0x1950c0: 0x200302d
    ctx->pc = 0x1950c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950c4: 0x280202d
    ctx->pc = 0x1950c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950c8: 0x3a0282d
    ctx->pc = 0x1950c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1950cc: 0xc0608ae
    ctx->pc = 0x1950CCu;
    SET_GPR_U32(ctx, 31, 0x1950D4u);
    ctx->pc = 0x1950D0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1822B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPS_GetSysHd_0x1822b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1950D4u; }
        else if (ctx->pc != 0x1950D4u) { ctx->pc = 0x1950D4u; }
    }
    if (ctx->pc != 0x1950D4u) { return; }
    ctx->pc = 0x1950D4u;
    // 0x1950d4: 0x8fa50008
    ctx->pc = 0x1950d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1950d8: 0x2a060003
    ctx->pc = 0x1950d8u;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 16), 3));
    // 0x1950dc: 0x8fa4000c
    ctx->pc = 0x1950dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1950e0: 0xb2102a
    ctx->pc = 0x1950e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 18)));
    // 0x1950e4: 0x91182a
    ctx->pc = 0x1950e4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 17)));
    // 0x1950e8: 0xa2900a
    ctx->pc = 0x1950e8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 18, GPR_U32(ctx, 5));
    // 0x1950ec: 0x14c0fff4
    ctx->pc = 0x1950ECu;
    {
        const bool branch_taken_0x1950ec = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1950F0u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 4));
        if (branch_taken_0x1950ec) {
            ctx->pc = 0x1950C0u;
            goto label_1950c0;
        }
    }
    ctx->pc = 0x1950F4u;
    // 0x1950f4: 0xae710004
    ctx->pc = 0x1950f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x1950f8: 0xae720008
    ctx->pc = 0x1950f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
    // 0x1950fc: 0xaed20000
    ctx->pc = 0x1950fcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
    // 0x195100: 0xdfbf0090
    ctx->pc = 0x195100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x195104: 0x8e620004
    ctx->pc = 0x195104u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x195108: 0xdfb60080
    ctx->pc = 0x195108u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19510c: 0xaea20000
    ctx->pc = 0x19510cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x195110: 0xdfb50070
    ctx->pc = 0x195110u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x195114: 0xdfb40060
    ctx->pc = 0x195114u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x195118: 0xdfb30050
    ctx->pc = 0x195118u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19511c: 0xdfb20040
    ctx->pc = 0x19511cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x195120: 0xdfb10030
    ctx->pc = 0x195120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195124: 0xdfb00020
    ctx->pc = 0x195124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195128: 0x3e00008
    ctx->pc = 0x195128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19512Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1950C0u: goto label_1950c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195130u;
}
