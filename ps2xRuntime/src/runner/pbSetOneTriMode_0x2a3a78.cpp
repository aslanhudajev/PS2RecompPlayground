#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetOneTriMode
// Address: 0x2a3a78 - 0x2a3b0c
void pbSetOneTriMode_0x2a3a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a3a78u;

    // 0x2a3a78: 0x27bdffe0
    ctx->pc = 0x2a3a78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a3a7c: 0xffbf0010
    ctx->pc = 0x2a3a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a3a80: 0xffb00000
    ctx->pc = 0x2a3a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3a84: 0x3c020037
    ctx->pc = 0x2a3a84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a3a88: 0x8c42d750
    ctx->pc = 0x2a3a88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956880)));
    // 0x2a3a8c: 0x1040001b
    ctx->pc = 0x2A3A8Cu;
    {
        const bool branch_taken_0x2a3a8c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3A90u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a3a8c) {
            ctx->pc = 0x2A3AFCu;
            goto label_2a3afc;
        }
    }
    ctx->pc = 0x2A3A94u;
    // 0x2a3a94: 0x8c420000
    ctx->pc = 0x2a3a94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a3a98: 0x10400018
    ctx->pc = 0x2A3A98u;
    {
        const bool branch_taken_0x2a3a98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3A9Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2a3a98) {
            ctx->pc = 0x2A3AFCu;
            goto label_2a3afc;
        }
    }
    ctx->pc = 0x2A3AA0u;
    // 0x2a3aa0: 0x16020004
    ctx->pc = 0x2A3AA0u;
    {
        const bool branch_taken_0x2a3aa0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x2A3AA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x2a3aa0) {
            ctx->pc = 0x2A3AB4u;
            goto label_2a3ab4;
        }
    }
    ctx->pc = 0x2A3AA8u;
    // 0x2a3aa8: 0x8c42e02c
    ctx->pc = 0x2a3aa8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294959148)));
    // 0x2a3aac: 0x1000000f
    ctx->pc = 0x2A3AACu;
    {
        const bool branch_taken_0x2a3aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A3AB0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x2a3aac) {
            ctx->pc = 0x2A3AECu;
            goto label_2a3aec;
        }
    }
    ctx->pc = 0x2A3AB4u;
label_2a3ab4:
    // 0x2a3ab4: 0x8c43e02c
    ctx->pc = 0x2a3ab4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294959148)));
    // 0x2a3ab8: 0x24020001
    ctx->pc = 0x2a3ab8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3abc: 0xac620018
    ctx->pc = 0x2a3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x2a3ac0: 0x240401b6
    ctx->pc = 0x2a3ac0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 438));
    // 0x2a3ac4: 0x3c05003b
    ctx->pc = 0x2a3ac4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2a3ac8: 0xc0a9fe2
    ctx->pc = 0x2A3AC8u;
    SET_GPR_U32(ctx, 31, 0x2A3AD0u);
    ctx->pc = 0x2A3ACCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294961232));
    ctx->pc = 0x2A7F88u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbPathWait_0x2a7f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3AD0u; }
    }
    if (ctx->pc != 0x2A3AD0u) { return; }
    ctx->pc = 0x2A3AD0u;
    // 0x2a3ad0: 0x3c020037
    ctx->pc = 0x2a3ad0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a3ad4: 0x8c44d750
    ctx->pc = 0x2a3ad4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294956880)));
    // 0x2a3ad8: 0x3c05003b
    ctx->pc = 0x2a3ad8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2a3adc: 0x24a5e860
    ctx->pc = 0x2a3adcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294961248));
    // 0x2a3ae0: 0x302d
    ctx->pc = 0x2a3ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ae4: 0xc0acd84
    ctx->pc = 0x2A3AE4u;
    SET_GPR_U32(ctx, 31, 0x2A3AECu);
    ctx->pc = 0x2A3AE8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2B3610u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbSetVu1DataI_0x2b3610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3AECu; }
    }
    if (ctx->pc != 0x2A3AECu) { return; }
    ctx->pc = 0x2A3AECu;
label_2a3aec:
    // 0x2a3aec: 0xdfbf0010
    ctx->pc = 0x2a3aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3af0: 0xdfb00000
    ctx->pc = 0x2a3af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3af4: 0x80a8e72
    ctx->pc = 0x2A3AF4u;
    ctx->pc = 0x2A3AF8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x2A39C8u;
    pbCalcDebugMode_0x2a39c8(rdram, ctx, runtime); return;
    ctx->pc = 0x2A3AFCu;
label_2a3afc:
    // 0x2a3afc: 0xdfbf0010
    ctx->pc = 0x2a3afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3b00: 0xdfb00000
    ctx->pc = 0x2a3b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3b04: 0x3e00008
    ctx->pc = 0x2A3B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3B08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3AB4u: goto label_2a3ab4;
            case 0x2A3AECu: goto label_2a3aec;
            case 0x2A3AFCu: goto label_2a3afc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A3B0Cu;
}
