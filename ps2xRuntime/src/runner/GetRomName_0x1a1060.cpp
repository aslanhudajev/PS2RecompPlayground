#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetRomName
// Address: 0x1a1060 - 0x1a10fc
void GetRomName_0x1a1060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetRomName");


    ctx->pc = 0x1a1060u;

    // 0x1a1060: 0x27bdffb0
    ctx->pc = 0x1a1060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a1064: 0xffb10010
    ctx->pc = 0x1a1064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a1068: 0x3c110026
    ctx->pc = 0x1a1068u;
    SET_GPR_U32(ctx, 17, ((uint32_t)38 << 16));
    // 0x1a106c: 0xffb30030
    ctx->pc = 0x1a106cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a1070: 0x8222df88
    ctx->pc = 0x1a1070u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294958984)));
    // 0x1a1074: 0x2633df88
    ctx->pc = 0x1a1074u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 4294958984));
    // 0x1a1078: 0xffbf0040
    ctx->pc = 0x1a1078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a107c: 0xffb20020
    ctx->pc = 0x1a107cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a1080: 0x14400016
    ctx->pc = 0x1A1080u;
    {
        const bool branch_taken_0x1a1080 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A1084u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x1a1080) {
            ctx->pc = 0x1A10DCu;
            goto label_1a10dc;
        }
    }
    ctx->pc = 0x1A1088u;
    // 0x1a1088: 0x3c04002c
    ctx->pc = 0x1a1088u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1a108c: 0x24050001
    ctx->pc = 0x1a108cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1090: 0x2484d790
    ctx->pc = 0x1a1090u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956944));
    // 0x1a1094: 0xc05623e
    ctx->pc = 0x1A1094u;
    SET_GPR_U32(ctx, 31, 0x1A109Cu);
    ctx->pc = 0x1A1098u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x1588F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceOpen_0x1588f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A109Cu; }
        else if (ctx->pc != 0x1A109Cu) { ctx->pc = 0x1A109Cu; }
    }
    if (ctx->pc != 0x1A109Cu) { return; }
    ctx->pc = 0x1A109Cu;
    // 0x1a109c: 0x40802d
    ctx->pc = 0x1a109cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10a0: 0x16120005
    ctx->pc = 0x1A10A0u;
    {
        const bool branch_taken_0x1a10a0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 18));
        ctx->pc = 0x1A10A4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a10a0) {
            ctx->pc = 0x1A10B8u;
            goto label_1a10b8;
        }
    }
    ctx->pc = 0x1A10A8u;
    // 0x1a10a8: 0x3c04002c
    ctx->pc = 0x1a10a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1a10ac: 0xc05114a
    ctx->pc = 0x1A10ACu;
    SET_GPR_U32(ctx, 31, 0x1A10B4u);
    ctx->pc = 0x1A10B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956960));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10B4u; }
        else if (ctx->pc != 0x1A10B4u) { ctx->pc = 0x1A10B4u; }
    }
    if (ctx->pc != 0x1A10B4u) { return; }
    ctx->pc = 0x1A10B4u;
    // 0x1a10b4: 0x260282d
    ctx->pc = 0x1a10b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a10b8:
    // 0x1a10b8: 0x200202d
    ctx->pc = 0x1a10b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a10bc: 0xc0563ce
    ctx->pc = 0x1A10BCu;
    SET_GPR_U32(ctx, 31, 0x1A10C4u);
    ctx->pc = 0x1A10C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x158F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceRead_0x158f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10C4u; }
        else if (ctx->pc != 0x1A10C4u) { ctx->pc = 0x1A10C4u; }
    }
    if (ctx->pc != 0x1A10C4u) { return; }
    ctx->pc = 0x1A10C4u;
    // 0x1a10c4: 0x14520003
    ctx->pc = 0x1A10C4u;
    {
        const bool branch_taken_0x1a10c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        ctx->pc = 0x1A10C8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1a10c4) {
            ctx->pc = 0x1A10D4u;
            goto label_1a10d4;
        }
    }
    ctx->pc = 0x1A10CCu;
    // 0x1a10cc: 0xc05114a
    ctx->pc = 0x1A10CCu;
    SET_GPR_U32(ctx, 31, 0x1A10D4u);
    ctx->pc = 0x1A10D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956984));
    ctx->pc = 0x144528u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x144528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10D4u; }
        else if (ctx->pc != 0x1A10D4u) { ctx->pc = 0x1A10D4u; }
    }
    if (ctx->pc != 0x1A10D4u) { return; }
    ctx->pc = 0x1A10D4u;
label_1a10d4:
    // 0x1a10d4: 0xc0562e0
    ctx->pc = 0x1A10D4u;
    SET_GPR_U32(ctx, 31, 0x1A10DCu);
    ctx->pc = 0x1A10D8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x158B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceClose_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A10DCu; }
        else if (ctx->pc != 0x1A10DCu) { ctx->pc = 0x1A10DCu; }
    }
    if (ctx->pc != 0x1A10DCu) { return; }
    ctx->pc = 0x1A10DCu;
label_1a10dc:
    // 0x1a10dc: 0x2622df88
    ctx->pc = 0x1a10dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 4294958984));
    // 0x1a10e0: 0xdfbf0040
    ctx->pc = 0x1a10e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a10e4: 0xdfb30030
    ctx->pc = 0x1a10e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a10e8: 0xdfb20020
    ctx->pc = 0x1a10e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a10ec: 0xdfb10010
    ctx->pc = 0x1a10ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a10f0: 0xdfb00000
    ctx->pc = 0x1a10f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a10f4: 0x3e00008
    ctx->pc = 0x1A10F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A10F8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A10B8u: goto label_1a10b8;
            case 0x1A10D4u: goto label_1a10d4;
            case 0x1A10DCu: goto label_1a10dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A10FCu;
}
