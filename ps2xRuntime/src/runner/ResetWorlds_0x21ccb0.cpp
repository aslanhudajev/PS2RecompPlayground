#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ResetWorlds
// Address: 0x21ccb0 - 0x21cd18
void ResetWorlds_0x21ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21ccb0u;

    // 0x21ccb0: 0x27bdffd0
    ctx->pc = 0x21ccb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ccb4: 0xffbf0020
    ctx->pc = 0x21ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21ccb8: 0xffb10010
    ctx->pc = 0x21ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21ccbc: 0x80882d
    ctx->pc = 0x21ccbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ccc0: 0x16200003
    ctx->pc = 0x21CCC0u;
    {
        const bool branch_taken_0x21ccc0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x21CCC4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x21ccc0) {
            ctx->pc = 0x21CCD0u;
            goto label_21ccd0;
        }
    }
    ctx->pc = 0x21CCC8u;
    // 0x21ccc8: 0x3c020038
    ctx->pc = 0x21ccc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x21cccc: 0x8c51c9a0
    ctx->pc = 0x21ccccu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294953376)));
label_21ccd0:
    // 0x21ccd0: 0x220202d
    ctx->pc = 0x21ccd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ccd4: 0x3c10003a
    ctx->pc = 0x21ccd4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x21ccd8: 0x26052550
    ctx->pc = 0x21ccd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 9552));
    // 0x21ccdc: 0xc0b3ec0
    ctx->pc = 0x21CCDCu;
    SET_GPR_U32(ctx, 31, 0x21CCE4u);
    ctx->pc = 0x21CCE0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCE4u; }
    }
    if (ctx->pc != 0x21CCE4u) { return; }
    ctx->pc = 0x21CCE4u;
    // 0x21cce4: 0x3c030032
    ctx->pc = 0x21cce4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21cce8: 0xac62fb50
    ctx->pc = 0x21cce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966096), GPR_U32(ctx, 2));
    // 0x21ccec: 0x220202d
    ctx->pc = 0x21ccecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ccf0: 0x26052550
    ctx->pc = 0x21ccf0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 9552));
    // 0x21ccf4: 0xc0b3ec0
    ctx->pc = 0x21CCF4u;
    SET_GPR_U32(ctx, 31, 0x21CCFCu);
    ctx->pc = 0x21CCF8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CCFCu; }
    }
    if (ctx->pc != 0x21CCFCu) { return; }
    ctx->pc = 0x21CCFCu;
    // 0x21ccfc: 0x3c030032
    ctx->pc = 0x21ccfcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21cd00: 0xac62fb54
    ctx->pc = 0x21cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966100), GPR_U32(ctx, 2));
    // 0x21cd04: 0xdfbf0020
    ctx->pc = 0x21cd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cd08: 0xdfb10010
    ctx->pc = 0x21cd08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cd0c: 0xdfb00000
    ctx->pc = 0x21cd0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cd10: 0x3e00008
    ctx->pc = 0x21CD10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CD14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CCD0u: goto label_21ccd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21CD18u;
}
