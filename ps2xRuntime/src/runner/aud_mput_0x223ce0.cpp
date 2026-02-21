#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_mput
// Address: 0x223ce0 - 0x223d58
void aud_mput_0x223ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223ce0u;

    // 0x223ce0: 0x27bdffe0
    ctx->pc = 0x223ce0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223ce4: 0xffbf0010
    ctx->pc = 0x223ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x223ce8: 0xffb00000
    ctx->pc = 0x223ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x223cec: 0x80302d
    ctx->pc = 0x223cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223cf0: 0xa0802d
    ctx->pc = 0x223cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223cf4: 0x1a000011
    ctx->pc = 0x223CF4u;
    {
        const bool branch_taken_0x223cf4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x223CF8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x223cf4) {
            ctx->pc = 0x223D3Cu;
            goto label_223d3c;
        }
    }
    ctx->pc = 0x223CFCu;
    // 0x223cfc: 0x3c02003c
    ctx->pc = 0x223cfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223d00: 0x24471000
    ctx->pc = 0x223d00u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4096));
    // 0x223d04: 0x3c080032
    ctx->pc = 0x223d04u;
    SET_GPR_U32(ctx, 8, ((uint32_t)50 << 16));
    // 0x223d08: 0x8d0406f8
    ctx->pc = 0x223d08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 1784)));
    // 0x223d0c: 0x0
    ctx->pc = 0x223d0cu;
    // NOP
label_223d10:
    // 0x223d10: 0x41880
    ctx->pc = 0x223d10u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x223d14: 0x671821
    ctx->pc = 0x223d14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x223d18: 0x51080
    ctx->pc = 0x223d18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x223d1c: 0x461021
    ctx->pc = 0x223d1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x223d20: 0x8c420000
    ctx->pc = 0x223d20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223d24: 0xac620000
    ctx->pc = 0x223d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x223d28: 0x24a50001
    ctx->pc = 0x223d28u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x223d2c: 0xb0102a
    ctx->pc = 0x223d2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 16)));
    // 0x223d30: 0x1440fff7
    ctx->pc = 0x223D30u;
    {
        const bool branch_taken_0x223d30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x223D34u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x223d30) {
            ctx->pc = 0x223D10u;
            goto label_223d10;
        }
    }
    ctx->pc = 0x223D38u;
    // 0x223d38: 0xad0406f8
    ctx->pc = 0x223d38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1784), GPR_U32(ctx, 4));
label_223d3c:
    // 0x223d3c: 0xc088d72
    ctx->pc = 0x223D3Cu;
    SET_GPR_U32(ctx, 31, 0x223D44u);
    ctx->pc = 0x2235C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mput_flush_0x2235c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D44u; }
    }
    if (ctx->pc != 0x223D44u) { return; }
    ctx->pc = 0x223D44u;
    // 0x223d44: 0x200102d
    ctx->pc = 0x223d44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d48: 0xdfbf0010
    ctx->pc = 0x223d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223d4c: 0xdfb00000
    ctx->pc = 0x223d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223d50: 0x3e00008
    ctx->pc = 0x223D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223D54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223D10u: goto label_223d10;
            case 0x223D3Cu: goto label_223d3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x223D58u;
}
