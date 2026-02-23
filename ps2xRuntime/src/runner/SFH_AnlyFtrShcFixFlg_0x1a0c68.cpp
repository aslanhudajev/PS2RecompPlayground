#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyFtrShcFixFlg
// Address: 0x1a0c68 - 0x1a0cd8
void SFH_AnlyFtrShcFixFlg_0x1a0c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyFtrShcFixFlg");


    ctx->pc = 0x1a0c68u;

    // 0x1a0c68: 0x27bdffc0
    ctx->pc = 0x1a0c68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0c6c: 0xffb10010
    ctx->pc = 0x1a0c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0c70: 0xffb20020
    ctx->pc = 0x1a0c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0c74: 0x30b100ff
    ctx->pc = 0x1a0c74u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0c78: 0xffb00000
    ctx->pc = 0x1a0c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0c7c: 0xc0902d
    ctx->pc = 0x1a0c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c80: 0xffbf0030
    ctx->pc = 0x1a0c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0c84: 0xc0681d0
    ctx->pc = 0x1A0C84u;
    SET_GPR_U32(ctx, 31, 0x1A0C8Cu);
    ctx->pc = 0x1A0C88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C8Cu; }
        else if (ctx->pc != 0x1A0C8Cu) { ctx->pc = 0x1A0C8Cu; }
    }
    if (ctx->pc != 0x1A0C8Cu) { return; }
    ctx->pc = 0x1A0C8Cu;
    // 0x1a0c8c: 0x40802d
    ctx->pc = 0x1a0c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c90: 0x12000005
    ctx->pc = 0x1A0C90u;
    {
        const bool branch_taken_0x1a0c90 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0C94u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c90) {
            ctx->pc = 0x1A0CA8u;
            goto label_1a0ca8;
        }
    }
    ctx->pc = 0x1A0C98u;
    // 0x1a0c98: 0xc0683b8
    ctx->pc = 0x1A0C98u;
    SET_GPR_U32(ctx, 31, 0x1A0CA0u);
    ctx->pc = 0x1A0C9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEnableVidFtr_0x1a0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0CA0u; }
        else if (ctx->pc != 0x1A0CA0u) { ctx->pc = 0x1A0CA0u; }
    }
    if (ctx->pc != 0x1A0CA0u) { return; }
    ctx->pc = 0x1A0CA0u;
    // 0x1a0ca0: 0x54400003
    ctx->pc = 0x1A0CA0u;
    {
        const bool branch_taken_0x1a0ca0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0ca0) {
            ctx->pc = 0x1A0CA4u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
            ctx->pc = 0x1A0CB0u;
            goto label_1a0cb0;
        }
    }
    ctx->pc = 0x1A0CA8u;
label_1a0ca8:
    // 0x1a0ca8: 0x10000005
    ctx->pc = 0x1A0CA8u;
    {
        const bool branch_taken_0x1a0ca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0CACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0ca8) {
            ctx->pc = 0x1A0CC0u;
            goto label_1a0cc0;
        }
    }
    ctx->pc = 0x1A0CB0u;
label_1a0cb0:
    // 0x1a0cb0: 0x24020001
    ctx->pc = 0x1a0cb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0cb4: 0x30630010
    ctx->pc = 0x1a0cb4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16));
    // 0x1a0cb8: 0x3182b
    ctx->pc = 0x1a0cb8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1a0cbc: 0xae430000
    ctx->pc = 0x1a0cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a0cc0:
    // 0x1a0cc0: 0xdfbf0030
    ctx->pc = 0x1a0cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0cc4: 0xdfb20020
    ctx->pc = 0x1a0cc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0cc8: 0xdfb10010
    ctx->pc = 0x1a0cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0ccc: 0xdfb00000
    ctx->pc = 0x1a0cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0cd0: 0x3e00008
    ctx->pc = 0x1A0CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0CD4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0CA8u: goto label_1a0ca8;
            case 0x1A0CB0u: goto label_1a0cb0;
            case 0x1A0CC0u: goto label_1a0cc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0CD8u;
}
