#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: vfiprintf
// Address: 0x145d20 - 0x145d98
void vfiprintf_0x145d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("vfiprintf");


    ctx->pc = 0x145d20u;

    // 0x145d20: 0x27bdffc0
    ctx->pc = 0x145d20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x145d24: 0xffb20020
    ctx->pc = 0x145d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x145d28: 0xffb10010
    ctx->pc = 0x145d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x145d2c: 0xc0902d
    ctx->pc = 0x145d2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d30: 0xffb00000
    ctx->pc = 0x145d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145d34: 0xffbf0030
    ctx->pc = 0x145d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x145d38: 0x80802d
    ctx->pc = 0x145d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d3c: 0x8e030054
    ctx->pc = 0x145d3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x145d40: 0x14600005
    ctx->pc = 0x145D40u;
    {
        const bool branch_taken_0x145d40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x145D44u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x145d40) {
            ctx->pc = 0x145D58u;
            goto label_145d58;
        }
    }
    ctx->pc = 0x145D48u;
    // 0x145d48: 0x3c020022
    ctx->pc = 0x145d48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)34 << 16));
    // 0x145d4c: 0x8c4371ec
    ctx->pc = 0x145d4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 29164)));
    // 0x145d50: 0xae030054
    ctx->pc = 0x145d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x145d54: 0x0
    ctx->pc = 0x145d54u;
    // NOP
label_145d58:
    // 0x145d58: 0x8c620038
    ctx->pc = 0x145d58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x145d5c: 0x54400004
    ctx->pc = 0x145D5Cu;
    {
        const bool branch_taken_0x145d5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x145d5c) {
            ctx->pc = 0x145D60u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->pc = 0x145D70u;
            goto label_145d70;
        }
    }
    ctx->pc = 0x145D64u;
    // 0x145d64: 0xc05066e
    ctx->pc = 0x145D64u;
    SET_GPR_U32(ctx, 31, 0x145D6Cu);
    ctx->pc = 0x145D68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1419B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___sinit_0x1419b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D6Cu; }
        else if (ctx->pc != 0x145D6Cu) { ctx->pc = 0x145D6Cu; }
    }
    if (ctx->pc != 0x145D6Cu) { return; }
    ctx->pc = 0x145D6Cu;
    // 0x145d6c: 0x8e040054
    ctx->pc = 0x145d6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_145d70:
    // 0x145d70: 0x200282d
    ctx->pc = 0x145d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d74: 0x220302d
    ctx->pc = 0x145d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d78: 0xc051766
    ctx->pc = 0x145D78u;
    SET_GPR_U32(ctx, 31, 0x145D80u);
    ctx->pc = 0x145D7Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145D98u;
    {
        const uint32_t __entryPc = ctx->pc;
        _vfiprintf_r_0x145d98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D80u; }
        else if (ctx->pc != 0x145D80u) { ctx->pc = 0x145D80u; }
    }
    if (ctx->pc != 0x145D80u) { return; }
    ctx->pc = 0x145D80u;
    // 0x145d80: 0xdfbf0030
    ctx->pc = 0x145d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145d84: 0xdfb20020
    ctx->pc = 0x145d84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145d88: 0xdfb10010
    ctx->pc = 0x145d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145d8c: 0xdfb00000
    ctx->pc = 0x145d8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145d90: 0x3e00008
    ctx->pc = 0x145D90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145D94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x145D58u: goto label_145d58;
            case 0x145D70u: goto label_145d70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x145D98u;
}
