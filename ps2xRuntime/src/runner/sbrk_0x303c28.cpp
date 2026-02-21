#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sbrk
// Address: 0x303c28 - 0x303cd0
void sbrk_0x303c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303c28u;

    // 0x303c28: 0x27bdffc0
    ctx->pc = 0x303c28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x303c2c: 0xffbf0030
    ctx->pc = 0x303c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x303c30: 0xffb20020
    ctx->pc = 0x303c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x303c34: 0xffb10010
    ctx->pc = 0x303c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x303c38: 0xffb00000
    ctx->pc = 0x303c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x303c3c: 0x40116000
    ctx->pc = 0x303c3cu;
    SET_GPR_U32(ctx, 17, ctx->cop0_status);
    // 0x303c40: 0x3c020001
    ctx->pc = 0x303c40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x303c44: 0x2228824
    ctx->pc = 0x303c44u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x303c48: 0x1220000a
    ctx->pc = 0x303C48u;
    {
        const bool branch_taken_0x303c48 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x303C4Cu;
        SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
        if (branch_taken_0x303c48) {
            ctx->pc = 0x303C74u;
            goto label_303c74;
        }
    }
    ctx->pc = 0x303C50u;
label_303c50:
    // 0x303c50: 0x42000039
    ctx->pc = 0x303c50u;
    ctx->cop0_status &= ~0x10000; // DI: clear EIE (R5900)
    // 0x303c54: 0x40f
    ctx->pc = 0x303c54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x303c58: 0x40026000
    ctx->pc = 0x303c58u;
    SET_GPR_U32(ctx, 2, ctx->cop0_status);
    // 0x303c5c: 0x3c030001
    ctx->pc = 0x303c5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x303c60: 0x431024
    ctx->pc = 0x303c60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x303c64: 0x1440fffa
    ctx->pc = 0x303C64u;
    {
        const bool branch_taken_0x303c64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x303c64) {
            ctx->pc = 0x303C50u;
            goto label_303c50;
        }
    }
    ctx->pc = 0x303C6Cu;
    // 0x303c6c: 0x10000002
    ctx->pc = 0x303C6Cu;
    {
        const bool branch_taken_0x303c6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x303C70u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 17012)));
        if (branch_taken_0x303c6c) {
            ctx->pc = 0x303C78u;
            goto label_303c78;
        }
    }
    ctx->pc = 0x303C74u;
label_303c74:
    // 0x303c74: 0x8e424274
    ctx->pc = 0x303c74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 17012)));
label_303c78:
    // 0x303c78: 0xc0c0d70
    ctx->pc = 0x303C78u;
    SET_GPR_U32(ctx, 31, 0x303C80u);
    ctx->pc = 0x303C7Cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x3035C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EndOfHeap_0x3035c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303C80u; }
    }
    if (ctx->pc != 0x303C80u) { return; }
    ctx->pc = 0x303C80u;
    // 0x303c80: 0x50102b
    ctx->pc = 0x303c80u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x303c84: 0x50400009
    ctx->pc = 0x303C84u;
    {
        const bool branch_taken_0x303c84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x303c84) {
            ctx->pc = 0x303C88u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 17012)));
            ctx->pc = 0x303CACu;
            goto label_303cac;
        }
    }
    ctx->pc = 0x303C8Cu;
    // 0x303c8c: 0xc0be8b2
    ctx->pc = 0x303C8Cu;
    SET_GPR_U32(ctx, 31, 0x303C94u);
    ctx->pc = 0x2FA2C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___errno_0x2fa2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x303C94u; }
    }
    if (ctx->pc != 0x303C94u) { return; }
    ctx->pc = 0x303C94u;
    // 0x303c94: 0x2403000c
    ctx->pc = 0x303c94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x303c98: 0xac430000
    ctx->pc = 0x303c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x303c9c: 0x42000038
    ctx->pc = 0x303c9cu;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
    // 0x303ca0: 0x3c02ffff
    ctx->pc = 0x303ca0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x303ca4: 0x10000004
    ctx->pc = 0x303CA4u;
    {
        const bool branch_taken_0x303ca4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x303CA8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
        if (branch_taken_0x303ca4) {
            ctx->pc = 0x303CB8u;
            goto label_303cb8;
        }
    }
    ctx->pc = 0x303CACu;
label_303cac:
    // 0x303cac: 0x12200002
    ctx->pc = 0x303CACu;
    {
        const bool branch_taken_0x303cac = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x303CB0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 17012), GPR_U32(ctx, 16));
        if (branch_taken_0x303cac) {
            ctx->pc = 0x303CB8u;
            goto label_303cb8;
        }
    }
    ctx->pc = 0x303CB4u;
    // 0x303cb4: 0x42000038
    ctx->pc = 0x303cb4u;
    ctx->cop0_status |= 0x10000; // EI: set EIE (R5900)
label_303cb8:
    // 0x303cb8: 0xdfbf0030
    ctx->pc = 0x303cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x303cbc: 0xdfb20020
    ctx->pc = 0x303cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x303cc0: 0xdfb10010
    ctx->pc = 0x303cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x303cc4: 0xdfb00000
    ctx->pc = 0x303cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x303cc8: 0x3e00008
    ctx->pc = 0x303CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303CCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x303C50u: goto label_303c50;
            case 0x303C74u: goto label_303c74;
            case 0x303C78u: goto label_303c78;
            case 0x303CACu: goto label_303cac;
            case 0x303CB8u: goto label_303cb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x303CD0u;
}
