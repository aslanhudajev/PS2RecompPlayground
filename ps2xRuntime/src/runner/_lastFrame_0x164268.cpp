#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _lastFrame
// Address: 0x164268 - 0x1642ec
void _lastFrame_0x164268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_lastFrame");


    ctx->pc = 0x164268u;

    // 0x164268: 0x27bdffe0
    ctx->pc = 0x164268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16426c: 0xffb00000
    ctx->pc = 0x16426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164270: 0x3c100023
    ctx->pc = 0x164270u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    // 0x164274: 0xffbf0010
    ctx->pc = 0x164274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x164278: 0x8e02a35c
    ctx->pc = 0x164278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294943580)));
    // 0x16427c: 0x10400006
    ctx->pc = 0x16427Cu;
    {
        const bool branch_taken_0x16427c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x164280u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16427c) {
            ctx->pc = 0x164298u;
            goto label_164298;
        }
    }
    ctx->pc = 0x164284u;
    // 0x164284: 0x3c04002c
    ctx->pc = 0x164284u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x164288: 0xc059112
    ctx->pc = 0x164288u;
    SET_GPR_U32(ctx, 31, 0x164290u);
    ctx->pc = 0x16428Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294938136));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164290u; }
        else if (ctx->pc != 0x164290u) { ctx->pc = 0x164290u; }
    }
    if (ctx->pc != 0x164290u) { return; }
    ctx->pc = 0x164290u;
    // 0x164290: 0x10000012
    ctx->pc = 0x164290u;
    {
        const bool branch_taken_0x164290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x164294u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943580), GPR_U32(ctx, 0));
        if (branch_taken_0x164290) {
            ctx->pc = 0x1642DCu;
            goto label_1642dc;
        }
    }
    ctx->pc = 0x164298u;
label_164298:
    // 0x164298: 0x3c020023
    ctx->pc = 0x164298u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16429c: 0x24040003
    ctx->pc = 0x16429cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1642a0: 0x8c43a3ec
    ctx->pc = 0x1642a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943724)));
    // 0x1642a4: 0x14640007
    ctx->pc = 0x1642A4u;
    {
        const bool branch_taken_0x1642a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1642A8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1642a4) {
            ctx->pc = 0x1642C4u;
            goto label_1642c4;
        }
    }
    ctx->pc = 0x1642ACu;
    // 0x1642ac: 0x3c020023
    ctx->pc = 0x1642acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1642b0: 0x24a5ffff
    ctx->pc = 0x1642b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1642b4: 0xc058b24
    ctx->pc = 0x1642B4u;
    SET_GPR_U32(ctx, 31, 0x1642BCu);
    ctx->pc = 0x1642B8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943300)));
    ctx->pc = 0x162C90u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImage_0x162c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642BCu; }
        else if (ctx->pc != 0x1642BCu) { ctx->pc = 0x1642BCu; }
    }
    if (ctx->pc != 0x1642BCu) { return; }
    ctx->pc = 0x1642BCu;
    // 0x1642bc: 0x10000007
    ctx->pc = 0x1642BCu;
    {
        const bool branch_taken_0x1642bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1642C0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294943580), GPR_U32(ctx, 0));
        if (branch_taken_0x1642bc) {
            ctx->pc = 0x1642DCu;
            goto label_1642dc;
        }
    }
    ctx->pc = 0x1642C4u;
label_1642c4:
    // 0x1642c4: 0x3c030023
    ctx->pc = 0x1642c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1642c8: 0x24a6ffff
    ctx->pc = 0x1642c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1642cc: 0x8c44a250
    ctx->pc = 0x1642ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943312)));
    // 0x1642d0: 0xc058b6a
    ctx->pc = 0x1642D0u;
    SET_GPR_U32(ctx, 31, 0x1642D8u);
    ctx->pc = 0x1642D4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294943324)));
    ctx->pc = 0x162DA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImageField_0x162da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1642D8u; }
        else if (ctx->pc != 0x1642D8u) { ctx->pc = 0x1642D8u; }
    }
    if (ctx->pc != 0x1642D8u) { return; }
    ctx->pc = 0x1642D8u;
    // 0x1642d8: 0xae00a35c
    ctx->pc = 0x1642d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943580), GPR_U32(ctx, 0));
label_1642dc:
    // 0x1642dc: 0xdfbf0010
    ctx->pc = 0x1642dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1642e0: 0xdfb00000
    ctx->pc = 0x1642e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1642e4: 0x3e00008
    ctx->pc = 0x1642E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1642E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x164298u: goto label_164298;
            case 0x1642C4u: goto label_1642c4;
            case 0x1642DCu: goto label_1642dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1642ECu;
}
