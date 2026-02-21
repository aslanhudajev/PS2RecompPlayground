#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _lf_version
// Address: 0x3079e8 - 0x307a4c
void _lf_version_0x3079e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x3079e8u;

    // 0x3079e8: 0x27bdffd0
    ctx->pc = 0x3079e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3079ec: 0x3c02003e
    ctx->pc = 0x3079ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x3079f0: 0xffb10010
    ctx->pc = 0x3079f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3079f4: 0x3c05003a
    ctx->pc = 0x3079f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x3079f8: 0xffb00000
    ctx->pc = 0x3079f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3079fc: 0x24516fe8
    ctx->pc = 0x3079fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 28648));
    // 0x307a00: 0xffbf0020
    ctx->pc = 0x307a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x307a04: 0x24a5426c
    ctx->pc = 0x307a04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17004));
    // 0x307a08: 0x802d
    ctx->pc = 0x307a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a0c: 0x220202d
    ctx->pc = 0x307a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a10: 0xc0bec34
    ctx->pc = 0x307A10u;
    SET_GPR_U32(ctx, 31, 0x307A18u);
    ctx->pc = 0x307A14u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2FB0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x2fb0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A18u; }
    }
    if (ctx->pc != 0x307A18u) { return; }
    ctx->pc = 0x307A18u;
    // 0x307a18: 0x10400006
    ctx->pc = 0x307A18u;
    {
        const bool branch_taken_0x307a18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x307A1Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x307a18) {
            ctx->pc = 0x307A34u;
            goto label_307a34;
        }
    }
    ctx->pc = 0x307A20u;
    // 0x307a20: 0x220202d
    ctx->pc = 0x307a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a24: 0x8c45429c
    ctx->pc = 0x307a24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 17052)));
    // 0x307a28: 0xc0bec34
    ctx->pc = 0x307A28u;
    SET_GPR_U32(ctx, 31, 0x307A30u);
    ctx->pc = 0x307A2Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2FB0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x2fb0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x307A30u; }
    }
    if (ctx->pc != 0x307A30u) { return; }
    ctx->pc = 0x307A30u;
    // 0x307a30: 0x2802b
    ctx->pc = 0x307a30u;
    SET_GPR_U32(ctx, 16, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_307a34:
    // 0x307a34: 0x200102d
    ctx->pc = 0x307a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307a38: 0xdfbf0020
    ctx->pc = 0x307a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307a3c: 0xdfb10010
    ctx->pc = 0x307a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307a40: 0xdfb00000
    ctx->pc = 0x307a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x307a44: 0x3e00008
    ctx->pc = 0x307A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307A48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x307A34u: goto label_307a34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x307A4Cu;
}
