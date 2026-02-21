#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBCreateBlit
// Address: 0x2c2c10 - 0x2c2ce0
void MBCreateBlit_0x2c2c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c2c10u;

    // 0x2c2c10: 0x27bdffe0
    ctx->pc = 0x2c2c10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c2c14: 0xffbf0010
    ctx->pc = 0x2c2c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c2c18: 0xffb00000
    ctx->pc = 0x2c2c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c2c1c: 0x3c020037
    ctx->pc = 0x2c2c1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2c20: 0x8c4231b0
    ctx->pc = 0x2c2c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12720)));
    // 0x2c2c24: 0x18400014
    ctx->pc = 0x2C2C24u;
    {
        const bool branch_taken_0x2c2c24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C2C28u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c2c24) {
            ctx->pc = 0x2C2C78u;
            goto label_2c2c78;
        }
    }
    ctx->pc = 0x2C2C2Cu;
    // 0x2c2c2c: 0x3c020037
    ctx->pc = 0x2c2c2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2c30: 0x8c4231b8
    ctx->pc = 0x2c2c30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12728)));
    // 0x2c2c34: 0x30420002
    ctx->pc = 0x2c2c34u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2c2c38: 0x14400010
    ctx->pc = 0x2C2C38u;
    {
        const bool branch_taken_0x2c2c38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C2C3Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 383));
        if (branch_taken_0x2c2c38) {
            ctx->pc = 0x2C2C7Cu;
            goto label_2c2c7c;
        }
    }
    ctx->pc = 0x2C2C40u;
    // 0x2c2c40: 0x3c020037
    ctx->pc = 0x2c2c40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2c44: 0x8c4431b0
    ctx->pc = 0x2c2c44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12720)));
    // 0x2c2c48: 0x3c020037
    ctx->pc = 0x2c2c48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2c4c: 0x244731b8
    ctx->pc = 0x2c2c4cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 12728));
    // 0x2c2c50: 0x24050038
    ctx->pc = 0x2c2c50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 56));
    // 0x2c2c54: 0x24630001
    ctx->pc = 0x2c2c54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_2c2c58:
    // 0x2c2c58: 0x64102a
    ctx->pc = 0x2c2c58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x2c2c5c: 0x10400006
    ctx->pc = 0x2C2C5Cu;
    {
        const bool branch_taken_0x2c2c5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2C60u;
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
        if (branch_taken_0x2c2c5c) {
            ctx->pc = 0x2C2C78u;
            goto label_2c2c78;
        }
    }
    ctx->pc = 0x2C2C64u;
    // 0x2c2c64: 0xc71021
    ctx->pc = 0x2c2c64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2c2c68: 0x8c420000
    ctx->pc = 0x2c2c68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2c6c: 0x30420002
    ctx->pc = 0x2c2c6cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2c2c70: 0x5040fff9
    ctx->pc = 0x2C2C70u;
    {
        const bool branch_taken_0x2c2c70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c2c70) {
            ctx->pc = 0x2C2C74u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x2C2C58u;
            goto label_2c2c58;
        }
    }
    ctx->pc = 0x2C2C78u;
label_2c2c78:
    // 0x2c2c78: 0x2862017f
    ctx->pc = 0x2c2c78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 383));
label_2c2c7c:
    // 0x2c2c7c: 0x14400007
    ctx->pc = 0x2C2C7Cu;
    {
        const bool branch_taken_0x2c2c7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C2C80u;
        SET_GPR_U32(ctx, 5, ((uint32_t)55 << 16));
        if (branch_taken_0x2c2c7c) {
            ctx->pc = 0x2C2C9Cu;
            goto label_2c2c9c;
        }
    }
    ctx->pc = 0x2C2C84u;
    // 0x2c2c84: 0x3c04003b
    ctx->pc = 0x2c2c84u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c2c88: 0x24846e40
    ctx->pc = 0x2c2c88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28224));
    // 0x2c2c8c: 0xc0b49a6
    ctx->pc = 0x2C2C8Cu;
    SET_GPR_U32(ctx, 31, 0x2C2C94u);
    ctx->pc = 0x2C2C90u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2C94u; }
    }
    if (ctx->pc != 0x2C2C94u) { return; }
    ctx->pc = 0x2C2C94u;
    // 0x2c2c94: 0x1000000e
    ctx->pc = 0x2C2C94u;
    {
        const bool branch_taken_0x2c2c94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C2C98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c2c94) {
            ctx->pc = 0x2C2CD0u;
            goto label_2c2cd0;
        }
    }
    ctx->pc = 0x2C2C9Cu;
label_2c2c9c:
    // 0x2c2c9c: 0x8ca431b0
    ctx->pc = 0x2c2c9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12720)));
    // 0x2c2ca0: 0x64102a
    ctx->pc = 0x2c2ca0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x2c2ca4: 0x14400003
    ctx->pc = 0x2C2CA4u;
    {
        const bool branch_taken_0x2c2ca4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C2CA8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 56));
        if (branch_taken_0x2c2ca4) {
            ctx->pc = 0x2C2CB4u;
            goto label_2c2cb4;
        }
    }
    ctx->pc = 0x2C2CACu;
    // 0x2c2cac: 0x24820001
    ctx->pc = 0x2c2cacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c2cb0: 0xaca231b0
    ctx->pc = 0x2c2cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12720), GPR_U32(ctx, 2));
label_2c2cb4:
    // 0x2c2cb4: 0x708018  mult $s0, $v1, $s0 (R5900: also writes LO to rd=$s0)
    ctx->pc = 0x2c2cb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x2c2cb8: 0x3c020037
    ctx->pc = 0x2c2cb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2c2cbc: 0x244231b8
    ctx->pc = 0x2c2cbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12728));
    // 0x2c2cc0: 0x2028021
    ctx->pc = 0x2c2cc0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c2cc4: 0xc0b0af6
    ctx->pc = 0x2C2CC4u;
    SET_GPR_U32(ctx, 31, 0x2C2CCCu);
    ctx->pc = 0x2C2CC8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C2BD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBInitBlit_0x2c2bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2CCCu; }
    }
    if (ctx->pc != 0x2C2CCCu) { return; }
    ctx->pc = 0x2C2CCCu;
    // 0x2c2ccc: 0x200102d
    ctx->pc = 0x2c2cccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2cd0:
    // 0x2c2cd0: 0xdfbf0010
    ctx->pc = 0x2c2cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2cd4: 0xdfb00000
    ctx->pc = 0x2c2cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c2cd8: 0x3e00008
    ctx->pc = 0x2C2CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2CDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C2C58u: goto label_2c2c58;
            case 0x2C2C78u: goto label_2c2c78;
            case 0x2C2C7Cu: goto label_2c2c7c;
            case 0x2C2C9Cu: goto label_2c2c9c;
            case 0x2C2CB4u: goto label_2c2cb4;
            case 0x2C2CD0u: goto label_2c2cd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C2CE0u;
}
