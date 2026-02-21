#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitEffect
// Address: 0x279b88 - 0x279c70
void InitEffect_0x279b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x279b88u;

    // 0x279b88: 0x27bdffa0
    ctx->pc = 0x279b88u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x279b8c: 0xffbf0050
    ctx->pc = 0x279b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x279b90: 0xffb40040
    ctx->pc = 0x279b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x279b94: 0xffb30030
    ctx->pc = 0x279b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x279b98: 0xffb20020
    ctx->pc = 0x279b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x279b9c: 0xffb10010
    ctx->pc = 0x279b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x279ba0: 0xffb00000
    ctx->pc = 0x279ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x279ba4: 0x80882d
    ctx->pc = 0x279ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ba8: 0xa0202d
    ctx->pc = 0x279ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279bac: 0xc0802d
    ctx->pc = 0x279bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279bb0: 0xe0982d
    ctx->pc = 0x279bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279bb4: 0x100a02d
    ctx->pc = 0x279bb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279bb8: 0x10800006
    ctx->pc = 0x279BB8u;
    {
        const bool branch_taken_0x279bb8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x279BBCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279bb8) {
            ctx->pc = 0x279BD4u;
            goto label_279bd4;
        }
    }
    ctx->pc = 0x279BC0u;
    // 0x279bc0: 0x12000005
    ctx->pc = 0x279BC0u;
    {
        const bool branch_taken_0x279bc0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x279BC4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x279bc0) {
            ctx->pc = 0x279BD8u;
            goto label_279bd8;
        }
    }
    ctx->pc = 0x279BC8u;
    // 0x279bc8: 0x82020000
    ctx->pc = 0x279bc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x279bcc: 0x14400008
    ctx->pc = 0x279BCCu;
    {
        const bool branch_taken_0x279bcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x279BD0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x279bcc) {
            ctx->pc = 0x279BF0u;
            goto label_279bf0;
        }
    }
    ctx->pc = 0x279BD4u;
label_279bd4:
    // 0x279bd4: 0x3c030034
    ctx->pc = 0x279bd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_279bd8:
    // 0x279bd8: 0x24634ab8
    ctx->pc = 0x279bd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19128));
    // 0x279bdc: 0x2402000c
    ctx->pc = 0x279bdcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x279be0: 0x2221018
    ctx->pc = 0x279be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x279be4: 0x431021
    ctx->pc = 0x279be4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279be8: 0x1000000f
    ctx->pc = 0x279BE8u;
    {
        const bool branch_taken_0x279be8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x279BECu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x279be8) {
            ctx->pc = 0x279C28u;
            goto label_279c28;
        }
    }
    ctx->pc = 0x279BF0u;
label_279bf0:
    // 0x279bf0: 0xc0847fc
    ctx->pc = 0x279BF0u;
    SET_GPR_U32(ctx, 31, 0x279BF8u);
    ctx->pc = 0x279BF4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279BF8u; }
    }
    if (ctx->pc != 0x279BF8u) { return; }
    ctx->pc = 0x279BF8u;
    // 0x279bf8: 0x3c040034
    ctx->pc = 0x279bf8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x279bfc: 0x24844ab8
    ctx->pc = 0x279bfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19128));
    // 0x279c00: 0x2403000c
    ctx->pc = 0x279c00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x279c04: 0x2231818
    ctx->pc = 0x279c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x279c08: 0x641821
    ctx->pc = 0x279c08u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x279c0c: 0x14400006
    ctx->pc = 0x279C0Cu;
    {
        const bool branch_taken_0x279c0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x279C10u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x279c0c) {
            ctx->pc = 0x279C28u;
            goto label_279c28;
        }
    }
    ctx->pc = 0x279C14u;
    // 0x279c14: 0x12400004
    ctx->pc = 0x279C14u;
    {
        const bool branch_taken_0x279c14 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x279C18u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x279c14) {
            ctx->pc = 0x279C28u;
            goto label_279c28;
        }
    }
    ctx->pc = 0x279C1Cu;
    // 0x279c1c: 0x2484bcd0
    ctx->pc = 0x279c1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294950096));
    // 0x279c20: 0xc0b492e
    ctx->pc = 0x279C20u;
    SET_GPR_U32(ctx, 31, 0x279C28u);
    ctx->pc = 0x279C24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279C28u; }
    }
    if (ctx->pc != 0x279C28u) { return; }
    ctx->pc = 0x279C28u;
label_279c28:
    // 0x279c28: 0x3c040034
    ctx->pc = 0x279c28u;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x279c2c: 0x24844ab8
    ctx->pc = 0x279c2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19128));
    // 0x279c30: 0x2402000c
    ctx->pc = 0x279c30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
    // 0x279c34: 0x2221018
    ctx->pc = 0x279c34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x279c38: 0x821821
    ctx->pc = 0x279c38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x279c3c: 0xac730004
    ctx->pc = 0x279c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 19));
    // 0x279c40: 0xac740008
    ctx->pc = 0x279c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 20));
    // 0x279c44: 0x441021
    ctx->pc = 0x279c44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x279c48: 0x8c420000
    ctx->pc = 0x279c48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279c4c: 0x2102b
    ctx->pc = 0x279c4cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x279c50: 0xdfbf0050
    ctx->pc = 0x279c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x279c54: 0xdfb40040
    ctx->pc = 0x279c54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x279c58: 0xdfb30030
    ctx->pc = 0x279c58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279c5c: 0xdfb20020
    ctx->pc = 0x279c5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279c60: 0xdfb10010
    ctx->pc = 0x279c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279c64: 0xdfb00000
    ctx->pc = 0x279c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279c68: 0x3e00008
    ctx->pc = 0x279C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279C6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279BD4u: goto label_279bd4;
            case 0x279BD8u: goto label_279bd8;
            case 0x279BF0u: goto label_279bf0;
            case 0x279C28u: goto label_279c28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279C70u;
}
