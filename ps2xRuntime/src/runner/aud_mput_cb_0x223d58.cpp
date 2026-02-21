#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_mput_cb
// Address: 0x223d58 - 0x223e18
void aud_mput_cb_0x223d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223d58u;

    // 0x223d58: 0x27bdffe0
    ctx->pc = 0x223d58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223d5c: 0xffbf0010
    ctx->pc = 0x223d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223d60: 0xffb00000
    ctx->pc = 0x223d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223d64: 0x80382d
    ctx->pc = 0x223d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d68: 0x3c020032
    ctx->pc = 0x223d68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x223d6c: 0x8c4206f8
    ctx->pc = 0x223d6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1784)));
    // 0x223d70: 0x28420100
    ctx->pc = 0x223d70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 256));
    // 0x223d74: 0x10400006
    ctx->pc = 0x223D74u;
    {
        const bool branch_taken_0x223d74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x223D78u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x223d74) {
            ctx->pc = 0x223D90u;
            goto label_223d90;
        }
    }
    ctx->pc = 0x223D7Cu;
    // 0x223d7c: 0x3c020032
    ctx->pc = 0x223d7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x223d80: 0x8c4206f4
    ctx->pc = 0x223d80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1780)));
    // 0x223d84: 0x28420020
    ctx->pc = 0x223d84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 32));
    // 0x223d88: 0x14400003
    ctx->pc = 0x223D88u;
    {
        const bool branch_taken_0x223d88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x223d88) {
            ctx->pc = 0x223D98u;
            goto label_223d98;
        }
    }
    ctx->pc = 0x223D90u;
label_223d90:
    // 0x223d90: 0x1000001d
    ctx->pc = 0x223D90u;
    {
        const bool branch_taken_0x223d90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x223D94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x223d90) {
            ctx->pc = 0x223E08u;
            goto label_223e08;
        }
    }
    ctx->pc = 0x223D98u;
label_223d98:
    // 0x223d98: 0x1a000010
    ctx->pc = 0x223D98u;
    {
        const bool branch_taken_0x223d98 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x223D9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x223d98) {
            ctx->pc = 0x223DDCu;
            goto label_223ddc;
        }
    }
    ctx->pc = 0x223DA0u;
    // 0x223da0: 0x3c02003c
    ctx->pc = 0x223da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223da4: 0x24481000
    ctx->pc = 0x223da4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4096));
    // 0x223da8: 0x3c090032
    ctx->pc = 0x223da8u;
    SET_GPR_U32(ctx, 9, ((uint32_t)50 << 16));
    // 0x223dac: 0x8d2406f8
    ctx->pc = 0x223dacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 1784)));
label_223db0:
    // 0x223db0: 0x41880
    ctx->pc = 0x223db0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x223db4: 0x681821
    ctx->pc = 0x223db4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x223db8: 0x51080
    ctx->pc = 0x223db8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x223dbc: 0x471021
    ctx->pc = 0x223dbcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x223dc0: 0x8c420000
    ctx->pc = 0x223dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223dc4: 0xac620000
    ctx->pc = 0x223dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x223dc8: 0x24a50001
    ctx->pc = 0x223dc8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x223dcc: 0xb0102a
    ctx->pc = 0x223dccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 16)));
    // 0x223dd0: 0x1440fff7
    ctx->pc = 0x223DD0u;
    {
        const bool branch_taken_0x223dd0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x223DD4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x223dd0) {
            ctx->pc = 0x223DB0u;
            goto label_223db0;
        }
    }
    ctx->pc = 0x223DD8u;
    // 0x223dd8: 0xad2406f8
    ctx->pc = 0x223dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1784), GPR_U32(ctx, 4));
label_223ddc:
    // 0x223ddc: 0x3c04003c
    ctx->pc = 0x223ddcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x223de0: 0x24840f78
    ctx->pc = 0x223de0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3960));
    // 0x223de4: 0x3c050032
    ctx->pc = 0x223de4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x223de8: 0x8ca306f4
    ctx->pc = 0x223de8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 1780)));
    // 0x223dec: 0x31080
    ctx->pc = 0x223decu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x223df0: 0x441021
    ctx->pc = 0x223df0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x223df4: 0xac460000
    ctx->pc = 0x223df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x223df8: 0x24630001
    ctx->pc = 0x223df8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x223dfc: 0xc088d72
    ctx->pc = 0x223DFCu;
    SET_GPR_U32(ctx, 31, 0x223E04u);
    ctx->pc = 0x223E00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1780), GPR_U32(ctx, 3));
    ctx->pc = 0x2235C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mput_flush_0x2235c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E04u; }
    }
    if (ctx->pc != 0x223E04u) { return; }
    ctx->pc = 0x223E04u;
    // 0x223e04: 0x200102d
    ctx->pc = 0x223e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_223e08:
    // 0x223e08: 0xdfbf0010
    ctx->pc = 0x223e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223e0c: 0xdfb00000
    ctx->pc = 0x223e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223e10: 0x3e00008
    ctx->pc = 0x223E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223E14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223D90u: goto label_223d90;
            case 0x223D98u: goto label_223d98;
            case 0x223DB0u: goto label_223db0;
            case 0x223DDCu: goto label_223ddc;
            case 0x223E08u: goto label_223e08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223E18u;
}
